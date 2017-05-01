.model small
.stack 100h
.code

main proc
	mov ah,2h
	mov cx,80
	mov dl,42d

print_loop:
	int 21h
	dec cx

jnz print_loop
	mov ah,4ch
	int 21h

main endp
	 end main