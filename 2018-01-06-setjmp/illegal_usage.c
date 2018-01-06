#include <setjmp.h>
#include <stdio.h>

static jmp_buf buf;

int main() {
  // SUSv3 and C99 specify that a call to setjmp() should not
  // appear in this way. But both GCC and Clang doesn't raise
  // an error when compiling this code.
  int a = 1 + setjmp(buf);
  printf("%d", a);
  return 0;
}
