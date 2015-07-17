#define _GNU_SOURCE

#include <dlfcn.h>
#include <stdlib.h>
#include <assert.h>

void (*orig_srand)(unsigned int seed);

void srand(unsigned int seed) {
  if(!orig_srand) {
    orig_srand = dlsym(RTLD_NEXT, "srand");
    assert(orig_srand);
  }

  orig_srand(0);
}
