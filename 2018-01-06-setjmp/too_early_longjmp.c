#include <setjmp.h>
#include <stdio.h>

static jmp_buf env;

int main() {
  longjmp(env, 1);
}
