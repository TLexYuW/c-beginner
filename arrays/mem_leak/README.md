```bash
gcc -o arr_mem_leak arr_mem_leak.c

valgrind --leak-check=full ./arr_mem_leak
```
```
==14191== Memcheck, a memory error detector
==14191== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.   
==14191== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==14191== Command: ./arr_mem_leak
==14191==
==14191==
==14191== HEAP SUMMARY:
==14191==     in use at exit: 400 bytes in 1 blocks
==14191==   total heap usage: 1 allocs, 0 frees, 400 bytes allocated
==14191==
==14191== 400 bytes in 1 blocks are definitely lost in loss record 1 of 1
==14191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==14191==    by 0x10915E: memoryLeakArray (in ...)
==14191==    by 0x109177: main (...)
==14191==
==14191== LEAK SUMMARY:
==14191==    definitely lost: 400 bytes in 1 blocks
==14191==    indirectly lost: 0 bytes in 0 blocks
==14191==      possibly lost: 0 bytes in 0 blocks
==14191==    still reachable: 0 bytes in 0 blocks
==14191==         suppressed: 0 bytes in 0 blocks
==14191==
==14191== For lists of detected and suppressed errors, rerun with: -s
==14191== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
```