
CC = smpcc
CFLAGS = --ompss --instrument
CPPFLAGS = -pthread
LDFLAGS = -pthread -Wl,-rpath -Wl,/usr/lib/openmpi -Wl,--enable-new-dtags -L/usr/lib/openmpi -lmpi

mpi_ompss_pils: mpi_ompss_pils.c
	$(CC) $^ -o $@ $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f mpi_ompss_pils
