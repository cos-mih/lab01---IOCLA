section .text

global get_max

get_max:
	push rbp
	mov rbp, rsp

	mov rcx, rsi
	xor rax, rax
compare:
	cmp rax, [rdi+rcx*4-4]
	jge check_end
	mov rax, [rdi+rcx*4-4]
check_end:
	loopnz compare

	leave
	ret
