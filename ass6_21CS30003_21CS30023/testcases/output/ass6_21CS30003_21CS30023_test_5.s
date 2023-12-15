	.file	"./testcases/input/ass6_21CS30003_21CS30023_test_5.c"
	.text
	.text
	.globl	fib
	.type	fib, @function
fib: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$72, %rsp
	movq	%rdi, -20(%rbp)
	movl	$1, %eax
	movl 	%eax, -28(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jle .L1
	jmp .L2
.L1: 
	movl	-20(%rbp), %eax
	movl 	%eax, -24(%rbp)
	jmp .L3
.L2: 
	movl	$1, %eax
	movl 	%eax, -36(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-36(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -40(%rbp)
	movq 	-40(%rbp), %rdi
	call	fib
	movl	%eax, -44(%rbp)
	movl	$2, %eax
	movl 	%eax, -48(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-48(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -52(%rbp)
	movq 	-52(%rbp), %rdi
	call	fib
	movl	%eax, -56(%rbp)
	movl 	-44(%rbp), %eax
	addl 	-56(%rbp), %eax
	movl 	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl 	%eax, -24(%rbp)
.L3: 
	movl	-24(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	fib, .-fib
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
	subq	$92, %rsp

	movl	0(%rbp), %eax
	movl 	%eax, -32(%rbp)
	movq 	-32(%rbp), %rdi
	call	printStr
	movl	%eax, -32(%rbp)
	nop
	movl	$1, %eax
	movl 	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl 	%eax, -40(%rbp)
.L4: 
	movl	$10, %eax
	movl 	%eax, -52(%rbp)
	movl	-40(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jle .L6
	jmp .L7
.L5: 
	movl	-40(%rbp), %eax
	movl 	%eax, -56(%rbp)
	movl 	-40(%rbp), %eax
	incl 	%eax
	movl 	%eax, -40(%rbp)
	jmp .L4
.L6: 
	movq 	-40(%rbp), %rdi
	call	fib
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl 	%eax, -60(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -72(%rbp)
	movq 	-72(%rbp), %rdi
	call	printStr
	movl	%eax, -72(%rbp)
	movq 	-40(%rbp), %rdi
	call	printInt
	movl	%eax, -76(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -80(%rbp)
	movq 	-80(%rbp), %rdi
	call	printStr
	movl	%eax, -80(%rbp)
	movq 	-60(%rbp), %rdi
	call	printInt
	movl	%eax, -84(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -88(%rbp)
	movq 	-88(%rbp), %rdi
	call	printStr
	movl	%eax, -88(%rbp)
	jmp .L5
.L7: 
	movl	$0, %eax
	movl 	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
