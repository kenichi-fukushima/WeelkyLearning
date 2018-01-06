/*
 * This program shows that optimization by the compiler may change
 * program semantics setjmp() is called from within a function
 * that has local variables.  Compiling and run this program with
 * and without will give different results.
 */

#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

static jmp_buf env;

static void doJump(int nvar, int rvar, int vvar) {
  printf("Inside doJump(): nvar=%d rvar=%d vvar=%d\n",
	 nvar,
	 rvar,
	 vvar);
  longjmp(env, 1);
}

int main(int argc, char *argv[]) {
  // These two variables may have wrong values after jump from a
  // call of longjmp() as a result of compiler optimization.
  int nvar;
  register int rvar;
  // Volatile variables always have correct values.
  volatile int vvar;

  nvar = 111;
  rvar = 222;
  vvar = 333;
  if (setjmp(env) == 0) {
    nvar = 777;
    rvar = 888;
    vvar = 999;
    doJump(nvar, rvar, vvar);
  } else {
    printf("After longjmp(): nvar=%d rvar=%d vvar=%d\n",
	   nvar,
	   rvar,
	   vvar);

  }
  return 0;
}
