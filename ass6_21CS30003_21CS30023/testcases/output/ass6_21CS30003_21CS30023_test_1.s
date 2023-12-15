	.file	"./testcases/input/ass6_21CS30003_21CS30023_test_1.c"
	.text
	.comm	arr, 32, 32
	.globl	t_2
	.data
	.align 4
	.type	t_2, @object
	.size	t_2, 4
t_2:
	.long	8
	.comm	b, 4, 4
	.globl	t_3
	.data
	.align 4
	.type	t_3, @object
	.size	t_3, 4
t_3:
	.long	4
	.comm	t_4, 4, 4
	.comm	c, 8, 8
	.comm	d, 4, 4
	.comm	ch, 1, 1
	.comm	a, 8, 8
	.text
	movl	0(%rbp), %eax
	movl 	%eax, 0(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, 0(%rbp)
	movl	$8, %eax
	movl 	%eax, 0(%rbp)
	movl	$4, %eax
	movl 	%eax, 0(%rbp)
	movl	0(%rbp), %eax
	negl	%eax
	movl 	%eax, 0(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, 0(%rbp)
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
	subq	$174, %rsp

	movl	0(%rbp), %eax
	movl 	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl 	%eax, -40(%rbp)
	movl	$0, %eax
	movl 	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl 	%eax, -48(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -57(%rbp)
	movl	-57(%rbp), %eax
	movl 	%eax, -56(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -58(%rbp)
	movq 	-58(%rbp), %rdi
	call	printStr
	movl	%eax, -58(%rbp)
	movl	$24, %eax
	movl 	%eax, -66(%rbp)
	movl	-66(%rbp), %eax
	movl 	%eax, -62(%rbp)
	movl	$8, %eax
	movl 	%eax, -74(%rbp)
	movl	-74(%rbp), %eax
	movl 	%eax, -70(%rbp)
	movl 	-62(%rbp), %eax
	addl 	-70(%rbp), %eax
	movl 	%eax, -82(%rbp)
	movl	-82(%rbp), %eax
	movl 	%eax, -78(%rbp)
	movl	$3, %eax
	movl 	%eax, -90(%rbp)
	movl 	-78(%rbp), %eax
	imull 	-90(%rbp), %eax
	movl 	%eax, -94(%rbp)
	movl	-94(%rbp), %eax
	movl 	%eax, -86(%rbp)
	movl	$3, %eax
	movl 	%eax, -102(%rbp)
	movl 	-78(%rbp), %eax
	cltd
	idivl 	-102(%rbp)
	movl 	%eax, -106(%rbp)
	movl	-106(%rbp), %eax
	movl 	%eax, -98(%rbp)
	movl	$3, %eax
	movl 	%eax, -114(%rbp)
	movl 	-78(%rbp), %eax
	movl 	-114(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -118(%rbp)
	movl	-118(%rbp), %eax
	movl 	%eax, -110(%rbp)
	movq 	-78(%rbp), %rdi
	call	printInt
	movl	%eax, -122(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -126(%rbp)
	movq 	-126(%rbp), %rdi
	call	printStr
	movl	%eax, -126(%rbp)
	movq 	-86(%rbp), %rdi
	call	printInt
	movl	%eax, -130(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -134(%rbp)
	movq 	-134(%rbp), %rdi
	call	printStr
	movl	%eax, -134(%rbp)
	movq 	-78(%rbp), %rdi
	call	printInt
	movl	%eax, -138(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -142(%rbp)
	movq 	-142(%rbp), %rdi
	call	printStr
	movl	%eax, -142(%rbp)
	movq 	-98(%rbp), %rdi
	call	printInt
	movl	%eax, -146(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -150(%rbp)
	movq 	-150(%rbp), %rdi
	call	printStr
	movl	%eax, -150(%rbp)
	movq 	-78(%rbp), %rdi
	call	printInt
	movl	%eax, -154(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -158(%rbp)
	movq 	-158(%rbp), %rdi
	call	printStr
	movl	%eax, -158(%rbp)
	movq 	-110(%rbp), %rdi
	call	printInt
	movl	%eax, -162(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -166(%rbp)
	movq 	-166(%rbp), %rdi
	call	printStr
	movl	%eax, -166(%rbp)
	movl	$0, %eax
	movl 	%eax, -170(%rbp)
	movl	-170(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
