%include "printf32.asm"

section .text
    global main
    extern printf

main:
    ;cele doua multimi se gasesc in eax si ebx
    mov eax, 139 ; 0 1 3 7
    mov ebx, 169 ; 0 3 5 7
    PRINTF32 `%u\n\x0`, eax ; afiseaza prima multime
    PRINTF32 `%u\n\x0`, ebx ; afiseaza cea de-a doua multime

    ; TODO1: reuniunea a doua multimi : 0 1 3 5 7
    
    mov ecx, eax
    or ecx, ebx

    PRINTF32 `reuniune: %u\n\x0`, ecx

    ; TODO2: adaugarea unui element in multime



    ; TODO3: intersectia a doua multimi : 0 3 7

    mov ecx, eax
    and ecx, ebx

    PRINTF32 `intersectie: %u\n\x0`, ecx

    ; TODO4: complementul unei multimi

    mov ecx, eax
    not ecx

    PRINTF32 `complementul lui eax: %u\n\x0`, ecx

    ; TODO5: eliminarea unui element

    mov ecx, 1
    shl ecx, 3
    sub eax, ecx

    PRINTF32 `eax - 3: %u\n\x0`, eax

    ; TODO6: diferenta de multimi EAX-EBX

    mov ecx, eax
    sub ecx, ebx

    PRINTF32 `eax - ebx: %u\n\x0`, ecx

    xor eax, eax
    ret
