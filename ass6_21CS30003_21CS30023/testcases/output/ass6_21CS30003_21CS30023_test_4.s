	.file	"./testcases/input/ass6_21CS30003_21CS30023_test_4.c"
	.text
	.text
	.globl	oneton
	.type	oneton, @function
oneton: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$56, %rsp
	movq	%rdi, -20(%rbp)
	movl	$0, %eax
	movl 	%eax, -24(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl .L1
	jmp .L2
.L1: 
	movl	$0, %eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	jmp .L5
.L2: 
	movl	$0, %eax
	movl 	%eax, -32(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-32(%rbp), %eax
	je .L3
	jmp .L4
.L3: 
	movl	$1, %eax
	movl 	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	jmp .L5
.L4: 
	movl	$2, %eax
	movl 	%eax, -40(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-40(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -44(%rbp)
	movq 	-44(%rbp), %rdi
	call	oneton
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
.L5: 
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	oneton, .-oneton
	.globl	main
	.type	main, @function
main: 
.LFB1:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$72, %rsp

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
	leaq	-32(%rbp), %rax
	movq 	%rax, -36(%rbp)
	movq 	-36(%rbp), %rdi
	call	readInt
	movl	%eax, -44(%rbp)
	movq 	-32(%rbp), %rdi
	call	oneton
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl 	%eax, -48(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -56(%rbp)
	movq 	-56(%rbp), %rdi
	call	printStr
	movl	%eax, -56(%rbp)
	movq 	-48(%rbp), %rdi
	call	printInt
	movl	%eax, -60(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -64(%rbp)
	movq 	-64(%rbp), %rdi
	call	printStr
	movl	%eax, -64(%rbp)
	movl	$0, %eax
	movl 	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
