%include "printf32.asm"

section .data
    wrong: db 'Not today, son.',0
    right: db 'Well done!',0

section .text
    global main
    extern printf

main:
    ;mov eax, 0xdeadc0de         ; TODO3.1: modify eax register
    mov eax, 0x2
    ;mov ebx, 0x1337ca5e         ; TODO3.1: modify ebx register
    mov ebx, 0x3
    mov ecx, 0x5                ; hardcoded; DO NOT change
    cmp eax, ebx
    jns bad                     ;jump if eax < ebx (signed)
    cmp ecx, ebx
    jb bad                      ;jump if ecx < ebx (unsigned)
    add eax, ebx
    xor eax, ecx
    jnz bad                     ;jump if eax ^ ecx != 0

good:
    PRINTF32 `%s\n\x0`, right
    ret

bad:
    PRINTF32 `%s\n\x0`, wrong
    ret
