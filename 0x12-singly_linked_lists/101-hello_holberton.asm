	global   main
	  extern    printf
/*before main*/

main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
/*after main*/

format: db `Hello, Holberton\n`,0

