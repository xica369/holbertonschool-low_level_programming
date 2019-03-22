extern printf
        global    main

	          section   .text
main:
	push rbp
	mov rax, 1
	mov rdi, type
	mov       rsi, message
	mov rdx, 17
	          call	printf
	mov rax, 60
	xor rdi, rdi
	pop rbp
	          section   .data
message:		  db        "Hello, Holberton", 0
type:	db	"%s", 10
