

section .data
 
vector1 times 67108864 dd 2.0
vector2 times 67108864 dd 3.0

section .text
bits 64
default rel 

global dotProduct

dotProduct:
    mov rdx, 0
    mov rcx, 67108864
    xorps xmm3, xmm3       ; Clear xmm3 (initialize it with zero)

L1:
    movss xmm0, [vector1 + rdx]
    movss xmm1, [vector2 + rdx]
    mulss xmm0, xmm1       ; Multiply xmm0 and xmm1
    addss xmm3, xmm0       ; Add the result to xmm3
    add rdx, 4             ; Move to the next element 
    loop L1              

    movaps xmm0, xmm3      ; Move the result into xmm0
    
ret                     ; Return from the function


