section .data
	hello db 'Hello, Holberton',10, 0  ; The string to be printed (10 is the newline)

section .text
	global main
	extern printf

main:
	sub rsp, 8              ; Stack aligned on a 16-byte boundary
	lea rdi, [rel hello]    ; Loads the string address into rdi
	call printf             ; Calls the printf function
	add rsp, 8              ; Restores the stack pointer
	mov rax, 0x60           ; Exits syscall number for x86_64
	xor rdi, rdi            ; Status code 0
	syscall                 ; Invokes the syscall
