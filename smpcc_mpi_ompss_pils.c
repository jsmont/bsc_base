static __inline unsigned int __bswap_32(unsigned int __bsx)
{
  return __builtin_bswap32(__bsx);
}
typedef unsigned long int __uint64_t;
static __inline __uint64_t __bswap_64(__uint64_t __bsx)
{
  return __builtin_bswap64(__bsx);
}
typedef unsigned short int __uint16_t;
static __inline __uint16_t __uint16_identity(__uint16_t __x)
{
  return __x;
}
typedef unsigned int __uint32_t;
static __inline __uint32_t __uint32_identity(__uint32_t __x)
{
  return __x;
}
static __inline __uint64_t __uint64_identity(__uint64_t __x)
{
  return __x;
}
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
struct _IO_FILE;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int sys_nerr;
extern const char *const sys_errlist[];
struct ompi_predefined_communicator_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_communicator_t ompi_mpi_comm_world;
extern __attribute__((visibility("default"))) struct ompi_predefined_communicator_t ompi_mpi_comm_self;
extern __attribute__((visibility("default"))) struct ompi_predefined_communicator_t ompi_mpi_comm_null;
struct ompi_predefined_group_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_group_t ompi_mpi_group_empty;
extern __attribute__((visibility("default"))) struct ompi_predefined_group_t ompi_mpi_group_null;
struct ompi_predefined_request_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_request_t ompi_request_null;
struct ompi_predefined_message_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_message_t ompi_message_null;
extern __attribute__((visibility("default"))) struct ompi_predefined_message_t ompi_message_no_proc;
struct ompi_predefined_op_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_null;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_min;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_max;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_sum;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_prod;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_land;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_band;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_lor;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_bor;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_lxor;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_bxor;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_maxloc;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_minloc;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_replace;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_no_op;
struct ompi_predefined_datatype_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_datatype_null;
extern __attribute__((visibility("default"))) __attribute__((__deprecated__("MPI_LB is deprecated in MPI-2.0"))) struct ompi_predefined_datatype_t ompi_mpi_lb;
extern __attribute__((visibility("default"))) __attribute__((__deprecated__("MPI_UB is deprecated in MPI-2.0"))) struct ompi_predefined_datatype_t ompi_mpi_ub;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_char;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_signed_char;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned_char;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_byte;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_short;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned_short;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_long;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned_long;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_long_long_int;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned_long_long;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_float;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_double;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_long_double;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_wchar;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_packed;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cxx_bool;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cxx_cplex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cxx_dblcplex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cxx_ldblcplex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_character;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_dblprec;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cplex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_dblcplex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_ldblcplex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2int;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2integer;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2real;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2dblprec;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2cplex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2dblcplex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_float_int;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_double_int;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_longdbl_int;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_short_int;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_long_int;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical1;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical2;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical4;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical8;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer1;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer2;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer4;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer8;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer16;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real2;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real4;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real8;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real16;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_complex8;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_complex16;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_complex32;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int8_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_uint8_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int16_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_uint16_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int32_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_uint32_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int64_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_uint64_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_aint;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_offset;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_count;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_bool;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_complex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_float_complex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_double_complex;
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_long_double_complex;
struct ompi_predefined_errhandler_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_errhandler_t ompi_mpi_errhandler_null;
extern __attribute__((visibility("default"))) struct ompi_predefined_errhandler_t ompi_mpi_errors_are_fatal;
extern __attribute__((visibility("default"))) struct ompi_predefined_errhandler_t ompi_mpi_errors_return;
struct ompi_predefined_win_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_win_t ompi_mpi_win_null;
struct ompi_predefined_file_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_file_t ompi_mpi_file_null;
struct ompi_predefined_info_t;
extern __attribute__((visibility("default"))) struct ompi_predefined_info_t ompi_mpi_info_null;
extern __attribute__((visibility("default"))) struct ompi_predefined_info_t ompi_mpi_info_env;
extern __attribute__((visibility("default"))) int *MPI_F_STATUS_IGNORE;
extern __attribute__((visibility("default"))) int *MPI_F_STATUSES_IGNORE;
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
const int DEF_LOADS_SIZE = 2;
const int default_loads[2L] = {[0] = 100, [1] = 250};
int computation(int num, int usec)
{
  int x;
  int i;
  float a = 9.999899864196777343750000e-01f;
  float p = num;
  x = 145 * usec;
  for (i = 0; i < x; i++)
    {
      p += a * i;
      p = p / i;
    }
  return (int)p;
}
struct timeval;
struct timezone;
typedef struct timezone *__restrict __timezone_ptr_t;
extern int gettimeofday(struct timeval *__restrict __tv, __timezone_ptr_t __tz) __attribute__((__nothrow__)) __attribute__((__leaf__)) __attribute__((__nonnull__(1)));
typedef long int __time_t;
typedef long int __suseconds_t;
struct  timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
long int usecs(void)
{
  struct timeval t;
  gettimeofday(&t, (void *)0);
  return t.tv_sec * 1000000 + t.tv_usec;
}
double LoadUnbalance(int *loads, int how_many)
{
  int i;
  int sum = 0;
  int max = 0;
  for (i = 0; i < how_many; i++)
    {
      sum += loads[i];
      max = max > loads[i] ? max : loads[i];
    }
  return sum / (how_many * max);
}
union  mcc_union_anon_43
{
  double __val;
  long int __addr;
};
typedef union mcc_union_anon_43 __nanos_atomic_union_0;
void iter(double *app_time, int *fib, int usec)
{
  long int t_start;
  long int t_end;
  t_start = usecs();
  *fib = computation(35, usec);
  t_end = usecs();
  double iter_time = (t_end - t_start) / 1.00000000000000000000000000000000000000000000000000000e+06;
  {
    double __oldval;
    double __newval;
    double __temp = iter_time;
    do
      {
        __oldval = *app_time;
        __newval = __oldval + __temp;
      }
    while (!__sync_bool_compare_and_swap_8((long int *)&*app_time, (__nanos_atomic_union_0){.__val = __oldval}.__addr, (__nanos_atomic_union_0){.__val = __newval}.__addr));
  }
}
typedef struct _IO_FILE FILE;
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format, ...);
extern struct _IO_FILE *stderr;
extern void exit(int __status) __attribute__((__nothrow__)) __attribute__((__leaf__)) __attribute__((__noreturn__));
int MPI_Init(int *argc, char ***argv) __attribute__((visibility("default")));
struct ompi_communicator_t;
typedef struct ompi_communicator_t *MPI_Comm;
int MPI_Comm_rank(MPI_Comm comm, int *rank) __attribute__((visibility("default")));
extern __attribute__((visibility("default"))) struct ompi_predefined_communicator_t ompi_mpi_comm_world;
int MPI_Comm_size(MPI_Comm comm, int *size) __attribute__((visibility("default")));
extern double atof(const char *__nptr) __attribute__((__nothrow__)) __attribute__((__leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern int atoi(const char *__nptr) __attribute__((__nothrow__)) __attribute__((__leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
extern FILE *fopen(const char *__restrict __filename, const char *__restrict __modes);
extern void perror(const char *__s);
extern int fscanf(FILE *__restrict __stream, const char *__restrict __format, ...) __asm("""__isoc99_fscanf");
extern struct _IO_FILE *stdout;
struct ompi_datatype_t;
typedef struct ompi_datatype_t *MPI_Datatype;
int MPI_Scatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm) __attribute__((visibility("default")));
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int;
enum mcc_enum_anon_5
{
  NANOS_OK = 0,
  NANOS_UNKNOWN_ERR = 1,
  NANOS_UNIMPLEMENTED = 2,
  NANOS_ENOMEM = 3,
  NANOS_INVALID_PARAM = 4,
  NANOS_INVALID_REQUEST = 5
};
typedef enum mcc_enum_anon_5 nanos_err_t;
extern nanos_err_t nanos_in_final(_Bool *result);
extern void nanos_handle_error(nanos_err_t err);
struct  mcc_struct_anon_16
{
  void (*outline)(void *);
};
typedef struct mcc_struct_anon_16 nanos_smp_args_t;
struct  nanos_args_0_t
{
  double *app_time;
  int *fib;
  int usec;
};
static void smp_ol_iter_1(struct nanos_args_0_t *const args);
struct  mcc_struct_anon_12
{
  _Bool mandatory_creation:1;
  _Bool tied:1;
  _Bool clear_chunk:1;
  _Bool reserved0:1;
  _Bool reserved1:1;
  _Bool reserved2:1;
  _Bool reserved3:1;
  _Bool reserved4:1;
};
typedef struct mcc_struct_anon_12 nanos_wd_props_t;
typedef unsigned long int size_t;
struct  nanos_const_wd_definition_tag
{
  nanos_wd_props_t props;
  size_t data_alignment;
  size_t num_copies;
  size_t num_devices;
  size_t num_dimensions;
  const char *description;
};
typedef struct nanos_const_wd_definition_tag nanos_const_wd_definition_t;
struct  mcc_struct_anon_15
{
  void *(*factory)(void *);
  void *arg;
};
typedef struct mcc_struct_anon_15 nanos_device_t;
struct  nanos_const_wd_definition_1
{
  nanos_const_wd_definition_t base;
  nanos_device_t devices[1L];
};
extern void *nanos_smp_factory(void *args);
struct  mcc_struct_anon_13
{
  _Bool is_final:1;
  _Bool is_recover:1;
  _Bool is_implicit:1;
  _Bool reserved3:1;
  _Bool reserved4:1;
  _Bool reserved5:1;
  _Bool reserved6:1;
  _Bool reserved7:1;
};
typedef struct mcc_struct_anon_13 nanos_wd_dyn_flags_t;
typedef void *nanos_thread_t;
struct  mcc_struct_anon_14
{
  nanos_wd_dyn_flags_t flags;
  nanos_thread_t tie_to;
  int priority;
  void *callback;
  void *arguments;
};
typedef struct mcc_struct_anon_14 nanos_wd_dyn_props_t;
typedef void *nanos_wd_t;
struct mcc_struct_anon_5;
typedef struct mcc_struct_anon_5 nanos_copy_data_internal_t;
typedef nanos_copy_data_internal_t nanos_copy_data_t;
struct mcc_struct_anon_1;
typedef struct mcc_struct_anon_1 nanos_region_dimension_internal_t;
typedef void *nanos_wg_t;
extern nanos_err_t nanos_create_wd_compact(nanos_wd_t *wd, nanos_const_wd_definition_t *const_data, nanos_wd_dyn_props_t *dyn_props, size_t data_size, void **data, nanos_wg_t wg, nanos_copy_data_t **copies, nanos_region_dimension_internal_t **dimensions);
extern nanos_wd_t nanos_current_wd(void);
struct mcc_struct_anon_3;
typedef struct mcc_struct_anon_3 nanos_data_access_internal_t;
typedef nanos_data_access_internal_t nanos_data_access_t;
typedef void *nanos_team_t;
extern nanos_err_t nanos_submit(nanos_wd_t wd, size_t num_data_accesses, nanos_data_access_t *data_accesses, nanos_team_t team);
struct  mcc_struct_anon_2
{
  _Bool input:1;
  _Bool output:1;
  _Bool can_rename:1;
  _Bool concurrent:1;
  _Bool commutative:1;
};
typedef struct mcc_struct_anon_2 nanos_access_type_internal_t;
typedef long int ptrdiff_t;
struct  mcc_struct_anon_3
{
  void *address;
  nanos_access_type_internal_t flags;
  short int dimension_count;
  const nanos_region_dimension_internal_t *dimensions;
  ptrdiff_t offset;
};
typedef void (*nanos_translate_args_t)(void *, nanos_wd_t);
extern nanos_err_t nanos_create_wd_and_run_compact(nanos_const_wd_definition_t *const_data, nanos_wd_dyn_props_t *dyn_props, size_t data_size, void *data, size_t num_data_accesses, nanos_data_access_t *data_accesses, nanos_copy_data_t *copies, nanos_region_dimension_internal_t *dimensions, nanos_translate_args_t translate_args);
extern nanos_err_t nanos_wg_wait_completion(nanos_wg_t wg, _Bool avoid_flush);
extern int printf(const char *__restrict __format, ...);
int MPI_Barrier(MPI_Comm comm) __attribute__((visibility("default")));
struct ompi_op_t;
typedef struct ompi_op_t *MPI_Op;
int MPI_Allreduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm) __attribute__((visibility("default")));
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_double;
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_sum;
int MPI_Finalize(void) __attribute__((visibility("default")));
int main(int argc, char **argv)
{
  long int t_start;
  int me;
  int how_many;
  int steps;
  int BS;
  int k;
  int tope;
  int fib;
  double final_time;
  long int t_end;
  double app_time;
  if (argc != 5)
    {
      fprintf(stderr, "Error: Wrong number of parameters. pils <loads file> <parallelism grain [0..1] <loops> <task duration>\n");
      fprintf(stderr, "%d \n", argc);
      exit(1);
    }
  t_start = usecs();
  MPI_Init(&argc, &argv);
  MPI_Comm_rank((MPI_Comm)(void *)&ompi_mpi_comm_world, &me);
  MPI_Comm_size((MPI_Comm)(void *)&ompi_mpi_comm_world, &how_many);
  int loads[how_many];
  double iter_time = 0;
  double parall_grain = atof(argv[2]);
  int loops = atoi(argv[3]);
  int usec = atoi(argv[4]);
  if (parall_grain > 1 || parall_grain <= 0)
    {
      fprintf(stderr, "Error: Parallelism grain parameter must be a value between 1 and 0 (but not 0). %f\n", parall_grain);
      exit(1);
    }
  if (me == 0)
    {
      int i;
      FILE *fileLoads = fopen(argv[1], "r");
      if (fileLoads == (void *)0)
        {
          perror("Fopen file of loads");
          fprintf(stderr, "(%s)\n", argv[1]);
          exit(1);
        }
      for (i = 0; i < how_many; i++)
        {
          if (fscanf(fileLoads, "%d ", &loads[i]) ==  -1)
            {
              break;
            }
        }
      for (; i < how_many; i++)
        {
          loads[i] = default_loads[i % DEF_LOADS_SIZE];
        }
      if (i < how_many)
        {
          fprintf(stderr, "ERROR: Bad format in unbalance file\n");
        }
      double LB = LoadUnbalance(loads, how_many);
      fprintf(stdout, "Unbalance: %.2f \n", LB);
    }
  MPI_Scatter(&loads, 1, (MPI_Datatype)(void *)&ompi_mpi_int, &steps, 1, (MPI_Datatype)(void *)&ompi_mpi_int, 0, (MPI_Comm)(void *)&ompi_mpi_comm_world);
  fprintf(stdout, "%d: Load = %d\n", me, steps);
  BS = steps * parall_grain;
  if (BS <= 0)
    {
      BS = 1;
    }
  fprintf(stdout, "%d: BS = %d\n", me, BS);
  for (k = 0; k < loops; k++)
    {
      int i;
      for (i = 0; i < steps; i += BS)
        {
          int j;
          tope = steps < i + BS ? steps : i + BS;
          for (j = i; j < tope; j++)
            {
              {
                double *mcc_arg_0 = &iter_time;
                int *mcc_arg_1 = &fib;
                int mcc_arg_2 = usec;
                {
                  _Bool mcc_is_in_final;
                  nanos_err_t mcc_err_in_final = nanos_in_final(&mcc_is_in_final);
                  if (mcc_err_in_final != NANOS_OK)
                    {
                      nanos_handle_error(mcc_err_in_final);
                    }
                  if (mcc_is_in_final)
                    {
                      iter(&iter_time, &fib, usec);
                    }
                  else
                    {
                      {
                        nanos_wd_dyn_props_t nanos_wd_dyn_props;
                        struct nanos_args_0_t *ol_args;
                        nanos_err_t nanos_err;
                        struct nanos_args_0_t imm_args;
                        nanos_data_access_t dependences[1L];
                        static nanos_smp_args_t smp_ol_iter_1_args = {.outline = (void (*)(void *))(void (*)(struct nanos_args_0_t *))&smp_ol_iter_1};
                        static struct nanos_const_wd_definition_1 nanos_wd_const_data = {.base = {.props = {.mandatory_creation = 0, .tied = 0, .clear_chunk = 0, .reserved0 = 0, .reserved1 = 0, .reserved2 = 0, .reserved3 = 0, .reserved4 = 0}, .data_alignment = __alignof__(struct nanos_args_0_t), .num_copies = 0, .num_devices = 1, .num_dimensions = 0, .description = "iter"}, .devices = {[0] = {.factory = &nanos_smp_factory, .arg = &smp_ol_iter_1_args}}};
                        nanos_wd_dyn_props.tie_to = 0;
                        nanos_wd_dyn_props.priority = 0;
                        nanos_wd_dyn_props.flags.is_final = 0;
                        nanos_wd_dyn_props.flags.is_implicit = 0;
                        ol_args = (struct nanos_args_0_t *)0;
                        nanos_wd_t nanos_wd_ = (nanos_wd_t)0;
                        nanos_err = nanos_create_wd_compact(&nanos_wd_, &nanos_wd_const_data.base, &nanos_wd_dyn_props, sizeof(struct nanos_args_0_t), (void **)&ol_args, nanos_current_wd(), (nanos_copy_data_t **)0, (nanos_region_dimension_internal_t **)0);
                        if (nanos_err != NANOS_OK)
                          {
                            nanos_handle_error(nanos_err);
                          }
                        if (nanos_wd_ != (nanos_wd_t)0)
                          {
                            (*ol_args).app_time = mcc_arg_0;
                            (*ol_args).fib = mcc_arg_1;
                            (*ol_args).usec = mcc_arg_2;
                            nanos_err = nanos_submit(nanos_wd_, 0, &dependences[0], (nanos_team_t)0);
                            if (nanos_err != NANOS_OK)
                              {
                                nanos_handle_error(nanos_err);
                              }
                          }
                        else
                          {
                            imm_args.app_time = mcc_arg_0;
                            imm_args.fib = mcc_arg_1;
                            imm_args.usec = mcc_arg_2;
                            nanos_err = nanos_create_wd_and_run_compact(&nanos_wd_const_data.base, &nanos_wd_dyn_props, sizeof(struct nanos_args_0_t), &imm_args, 0, &dependences[0], (nanos_copy_data_t *)0, (nanos_region_dimension_internal_t *)0, (nanos_translate_args_t)0);
                            if (nanos_err != NANOS_OK)
                              {
                                nanos_handle_error(nanos_err);
                              }
                          }
                      }
                    }
                }
              }
            }
        }
      {
        nanos_err_t nanos_err;
        nanos_wd_t nanos_wd_ = nanos_current_wd();
        nanos_err = nanos_wg_wait_completion(nanos_wd_, 0);
        if (nanos_err != NANOS_OK)
          {
            nanos_handle_error(nanos_err);
          }
      }
      printf("%d: Total time: %6.3f\n", me, iter_time);
      MPI_Barrier((MPI_Comm)(void *)&ompi_mpi_comm_world);
      MPI_Allreduce(&iter_time, &final_time, 1, (MPI_Datatype)(void *)&ompi_mpi_double, (MPI_Op)(void *)&ompi_mpi_op_sum, (MPI_Comm)(void *)&ompi_mpi_comm_world);
    }
  if (me == 0)
    {
      printf("Final time: %6.3f\n", final_time);
    }
  t_end = usecs();
  app_time = (double)(t_end - t_start) / 1000000;
  if (me == 0)
    {
      printf("\nApplication time = %f \n", app_time);
    }
  MPI_Finalize();
  return 0;
}
static void smp_ol_iter_1_unpacked(double *app_time, int *fib, int usec)
{
  {
    iter(app_time, fib, usec);
  }
}
static void smp_ol_iter_1(struct nanos_args_0_t *const args)
{
  {
    smp_ol_iter_1_unpacked((*args).app_time, (*args).fib, (*args).usec);
  }
}
