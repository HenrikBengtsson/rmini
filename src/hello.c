#include <Rdefines.h>

SEXP hello() {
  Rprintf("Hello world!\n");
  return R_NilValue;
}
