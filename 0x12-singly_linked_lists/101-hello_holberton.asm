; File: 101-hello_holberton.asm
; Description: A 64-bit assemply program that prints
;		Hello, Holberton followed by new line
; Author: Timothy Kibirige



 extern printf

section .text
   global main

main:
   push rbp

   mov rdi,fmt
   mov rsi,msg
   mov rax,0
   call printf

   pop rbp

   mov rax,0
   ret

section .data
   msg: db "Hello, Holberton", 0
   fmt: db "%s", 10, 0

