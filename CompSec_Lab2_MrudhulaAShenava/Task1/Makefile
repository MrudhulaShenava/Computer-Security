call_shellcode:
	gcc -z execstack call_shellcode.c -o call_shellcode
vuln_prog:
	gcc -g -z execstack -m32 -fno-stack-protector vuln_prog.c -o vuln_prog
exploit:
	gcc exploit.c -o exploit
test:
	gcc -g -z execstack -m32 -fno-stack-protector test.c -o test

