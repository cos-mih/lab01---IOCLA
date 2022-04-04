%include "printf32.asm"

section .text
    global main
    extern printf

main:
    mov eax, 7       ; vrem sa aflam al N-lea numar; N = 7

    ; TODO: calculati al N-lea numar fibonacci (f(0) = 0, f(1) = 1)

    mov ebx, 0
    mov ecx, 1

   	sub eax, 1

advance:
	add ebx, ecx
	xchg ebx, ecx
	sub eax, 1
	cmp eax, 0
	jg advance

	PRINTF32 `%u\n\x0`, ebx

    ret
