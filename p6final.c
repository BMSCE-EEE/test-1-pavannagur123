~/test-1-pavannagur123$ gcc -g p6original.c
~/test-1-pavannagur123$ gdb ./a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./a.out...done.
(gdb) b main
Breakpoint 1 at 0x722: file p6original.c, line 6.
(gdb) r
Starting program: /home/runner/test-1-pavannagur123/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p6original.c:6
6   {
(gdb) s
8     input (&a,&b,&c);
(gdb) c
Continuing.
5
6
7
the largest number is 7[Inferior 1 (process 34) exited normally]
(gdb) 