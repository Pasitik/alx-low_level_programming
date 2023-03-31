section .data
  msg db 'Hello, Holberton', 10, 0

section .text
  global main
  
  extern printf
  
  main:
    push msg
    mov rdi, format
    xor eax, eax
    call printf
    xor eax, eax
    ret
  
  section .data
    format db "%s", 10, 0

