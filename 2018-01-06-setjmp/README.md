# References
- [ISO/IEC 9899:TC3, 7.13 Nonlocal jumps \<setjmp.h\>](http://www.open-std.org/jtc1/sc22/WG14/www/docs/n1256.pdf)
- [setjmp.h - Wikipedia](https://en.wikipedia.org/wiki/Setjmp.h)
- [:bulb: :book: The Linux Programming Interface, Chapter 6. Processes](https://www.safaribooksonline.com/library/view/the-linux-programming/9781593272203/ch06.html)
- [:book: Computer Systems A Programmer's Perspective 8.6 Nonlocal Jumps]
- [SETJMP(3) Linux Programmer's Manual](http://man7.org/linux/man-pages/man3/setjmp.3.html)
- [git://sourceware.org/glibc.git/tree - The GNU C Library](https://sourceware.org/git/?p=glibc.git;a=tree)
- [:bulb: longjmpと例外 - Super Technique 講座](http://www.nurs.or.jp/~sug/soft/super/longjmp.htm)
- [MSC22-C. Use the setjmp(), longjmp() facility securely - SEI CERT C Coding Standard](https://wiki.sei.cmu.edu/confluence/display/c/MSC22-C.+Use+the+setjmp%28%29%2C+longjmp%28%29+facility+securely)

# TODOs
- Analyze behavior of programs that have setjmp/longjmp with the debugger.
- Read the source code.
- Explore applications of setjmp/longjmp.
- What is `volatile` in C?

# Summary
- Nonlocal jump
  - Nonlocal == outside of the currently executing function
- Usages
  - Exception handling
  - In signal handers
  - Coroutine??
- Internals
  - jmp_buf holds
    - program counter register
    - stack pointer register
    - and else
