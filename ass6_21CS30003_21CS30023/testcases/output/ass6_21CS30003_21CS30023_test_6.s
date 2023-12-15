	.file	"./testcases/input/ass6_21CS30003_21CS30023_test_6.c"
	.text
	.text
	.globl	main
	.type	main, @function
main: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$96, %rsp

	movl	0(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movq 	-24(%rbp), %rdi
	call	printStr
	movl	%eax, -24(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -28(%rbp)
	movq 	-28(%rbp), %rdi
	call	printStr
	movl	%eax, -28(%rbp)
	movl	$707, %eax
	movl 	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl 	%eax, -32(%rbp)
	movq 	-32(%rbp), %rdi
	call	printInt
	movl	%eax, -40(%rbp)
	movl	$707, %eax
	movl 	%eax, -44(%rbp)
	movl	-32(%rbp), %eax
	cmpl	-44(%rbp), %eax
	je .L1
	jmp .L2
.L1: 
	nop
	movl	0(%rbp), %eax
	movl 	%eax, -72(%rbp)
	movq 	-72(%rbp), %rdi
	call	printStr
	movl	%eax, -72(%rbp)
	jmp .L2
.L2: 
	movl	$707, %eax
	movl 	%eax, -48(%rbp)
	movl	-32(%rbp), %eax
	cmpl	-48(%rbp), %eax
	jne .L3
	jmp .L4
.L3: 
	nop
	movl	0(%rbp), %eax
	movl 	%eax, -76(%rbp)
	movq 	-76(%rbp), %rdi
	call	printStr
	movl	%eax, -76(%rbp)
	jmp .L8
.L4: 
	movl	$500, %eax
	movl 	%eax, -52(%rbp)
	movl	-32(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jg .L5
	jmp .L7
.L5: 
	movl	$999, %eax
	movl 	%eax, -56(%rbp)
	movl	-32(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jl .L6
	jmp .L7
.L6: 
	nop
	movl	0(%rbp), %eax
	movl 	%eax, -80(%rbp)
	movq 	-80(%rbp), %rdi
	call	printStr
	movl	%eax, -80(%rbp)
	jmp .L8
.L7: 
	nop
	movl	0(%rbp), %eax
	movl 	%eax, -84(%rbp)
	movq 	-84(%rbp), %rdi
	call	printStr
	movl	%eax, -84(%rbp)
.L8: 
	movl	$900, %eax
	movl 	%eax, -60(%rbp)
	movl	-32(%rbp), %eax
	cmpl	-60(%rbp), %eax
	jg .L10
	jmp .L9
.L9: 
	movl	$800, %eax
	movl 	%eax, -64(%rbp)
	movl	-32(%rbp), %eax
	cmpl	-64(%rbp), %eax
	jl .L10
	jmp .L11
.L10: 
	nop
	movl	0(%rbp), %eax
	movl 	%eax, -88(%rbp)
	movq 	-88(%rbp), %rdi
	call	printStr
	movl	%eax, -88(%rbp)
	jmp .L12
.L11: 
	nop
	movl	0(%rbp), %eax
	movl 	%eax, -92(%rbp)
	movq 	-92(%rbp), %rdi
	call	printStr
	movl	%eax, -92(%rbp)
.L12: 
	movl	$0, %eax
	movl 	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
