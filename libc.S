
	/* Suppose we receive the argument in %cx. */

	.code16gcc
	.global printf
	.global get_mem_size

	.section .text
	
printf:	

	mov   %cx, %bx
	
        mov   $0x0e,%ah               
        mov   $0x0, %si               
loop:                                 
        mov   (%bx, %si), %al           
        cmp   $0x0, %al               
        je    end                    
        int   $0x10                   
        add   $0x1, %si               
        jmp   loop                    
end:
        mov %si, %ax
        ret

/* Function to get conventional memory size using BIOS interrupt 0x12 */
get_mem_size:
	int $0x12          /* Call BIOS interrupt 0x12 - memory size determination */
	ret                /* Return memory size in kilobytes in %ax */




