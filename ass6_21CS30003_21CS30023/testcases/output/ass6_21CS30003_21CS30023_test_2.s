	.file	"./testcases/input/ass6_21CS30003_21CS30023_test_2.c"
	.text
	.text
	.globl	swapTwoNumbers
	.type	swapTwoNumbers, @function
swapTwoNumbers: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$60, %rsp
	movq	%rdi, -20(%rbp)
	movq	%rsi, -12(%rbp)
	movq	-20(%rbp), %rax
	movl	(%rax),%eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movq	-20(%rbp), %rax
	movl	(%rax),%eax
	movl 	%eax, -36(%rbp)
	movq	-12(%rbp), %rax
	movl	(%rax),%eax
	movl 	%eax, -40(%rbp)
	movq	-20(%rbp), %rax
	movl	-40(%rbp), %edx
	movl	%edx, (%rax)
	movq	-12(%rbp), %rax
	movl	(%rax),%eax
	movl 	%eax, -44(%rbp)
	movq	-12(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, (%rax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	swapTwoNumbers, .-swapTwoNumbers
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
	subq	$108, %rsp

	movl	$2, %eax
	movl 	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	$3, %eax
	movl 	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl 	%eax, -28(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -48(%rbp)
	movq 	-48(%rbp), %rdi
	call	printStr
	movl	%eax, -48(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -52(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -56(%rbp)
	movq 	-56(%rbp), %rdi
	call	printStr
	movl	%eax, -56(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -60(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -64(%rbp)
	movq 	-64(%rbp), %rdi
	call	printStr
	movl	%eax, -64(%rbp)
	leaq	-24(%rbp), %rax
	movq 	%rax, -68(%rbp)
	leaq	-28(%rbp), %rax
	movq 	%rax, -76(%rbp)
	movq 	-68(%rbp), %rdi
	movq 	-76(%rbp), %rsi
	call	swapTwoNumbers
	movl	%eax, -84(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -84(%rbp)
	movq 	-84(%rbp), %rdi
	call	printStr
	movl	%eax, -84(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -88(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -92(%rbp)
	movq 	-92(%rbp), %rdi
	call	printStr
	movl	%eax, -92(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -96(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -100(%rbp)
	movq 	-100(%rbp), %rdi
	call	printStr
	movl	%eax, -100(%rbp)
	movl	$0, %eax
	movl 	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
