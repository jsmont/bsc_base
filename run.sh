#!/bin/bash

# variables detected at configure time
MPIEXEC=/usr/bin/mpiexec
MPIEXEC_EXPORT_FLAG=-x

# variables to be modified by the user
TRACE=0
DLB=0

APP="./mpi_ompss_pils"
ARGS="/dev/null 1 150 50"

if [[ $TRACE == 1 ]] ; then
    PRELOAD="$EXTRAE_HOME/lib/libnanosmpitrace.so"
    export EXTRAE_CONFIG_FILE="extrae.xml"
    export NX_ARGS+=" --instrumentation=extrae"
    if [[ $DLB == 1 ]] ; then
        TRACENAME="pils_dlb.prv"
    else
        TRACENAME="pils.prv"
    fi
fi

if [[ $DLB == 1 ]] ; then
    export NX_ARGS+=" --thread-manager=dlb"
    export LB_POLICY="auto_LeWI_mask"
else
    export LB_POLICY="No"
fi

$MPIEXEC -np 2 $MPIEXEC_EXPORT_FLAG LD_PRELOAD=$PRELOAD $APP $ARGS

if [[ $TRACE == 1 ]] ; then
    $EXTRAE_HOME/bin/mpi2prv -f TRACE.mpits -no-keep-mpits -o "$TRACENAME"
    rm -f TRACE.spawn
fi
