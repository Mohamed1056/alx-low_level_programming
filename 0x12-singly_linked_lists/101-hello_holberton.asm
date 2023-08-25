section		.text
	extern	printf
	global	main

/*before main*/

main:
	mov		edi, msg
	mov		eax, 0
	call	printf

/*after main*/

swction		.data
	msg db 'Hello, Holberton', 0xa, 0
