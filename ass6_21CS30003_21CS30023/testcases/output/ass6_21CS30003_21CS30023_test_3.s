	.file	"./testcases/input/ass6_21CS30003_21CS30023_test_3.c"
	.text
	.text
	.globl	maximum
	.type	maximum, @function
maximum: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$44, %rsp
	movq	%rdi, -20(%rbp)
	movq	%rsi, -16(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jl .L1
	jmp .L2
.L1: 
	movl	-16(%rbp), %eax
	movl 	%eax, -28(%rbp)
	jmp .L3
.L2: 
	movl	-20(%rbp), %eax
	movl 	%eax, -28(%rbp)
.L3: 
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	maximum, .-maximum
	.globl	minimum
	.type	minimum, @function
minimum: 
.LFB1:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$44, %rsp
	movq	%rdi, -20(%rbp)
	movq	%rsi, -16(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jg .L4
	jmp .L5
.L4: 
	movl	-16(%rbp), %eax
	movl 	%eax, -28(%rbp)
	jmp .L6
.L5: 
	movl	-20(%rbp), %eax
	movl 	%eax, -28(%rbp)
.L6: 
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	minimum, .-minimum
	.globl	absolute
	.type	absolute, @function
absolute: 
.LFB2:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$36, %rsp
	movq	%rdi, -20(%rbp)
	movl	$0, %eax
	movl 	%eax, -24(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl .L7
	jmp .L8
.L7: 
	movl	-20(%rbp), %eax
	negl	%eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	jmp .L9
.L8: 
	movl	-20(%rbp), %eax
.L9: 
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	absolute, .-absolute
	.globl	main
	.type	main, @function
main: 
.LFB3:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$236, %rsp

	movl	$5, %eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	negl	%eax
	movl 	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	$4, %eax
	movl 	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movq 	-24(%rbp), %rdi
	call	absolute
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl 	%eax, -44(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -52(%rbp)
	movq 	-52(%rbp), %rdi
	call	printStr
	movl	%eax, -52(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -56(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -60(%rbp)
	movq 	-60(%rbp), %rdi
	call	printStr
	movl	%eax, -60(%rbp)
	movq 	-44(%rbp), %rdi
	call	printInt
	movl	%eax, -64(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -68(%rbp)
	movq 	-68(%rbp), %rdi
	call	printStr
	movl	%eax, -68(%rbp)
	movq 	-36(%rbp), %rdi
	call	absolute
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl 	%eax, -72(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -80(%rbp)
	movq 	-80(%rbp), %rdi
	call	printStr
	movl	%eax, -80(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -84(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -88(%rbp)
	movq 	-88(%rbp), %rdi
	call	printStr
	movl	%eax, -88(%rbp)
	movq 	-72(%rbp), %rdi
	call	printInt
	movl	%eax, -92(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -96(%rbp)
	movq 	-96(%rbp), %rdi
	call	printStr
	movl	%eax, -96(%rbp)
	movq 	-24(%rbp), %rdi
	movq 	-36(%rbp), %rsi
	call	minimum
	movl	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	movl 	%eax, -100(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -108(%rbp)
	movq 	-108(%rbp), %rdi
	call	printStr
	movl	%eax, -108(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -112(%rbp)
	movq 	-112(%rbp), %rdi
	call	printStr
	movl	%eax, -112(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -116(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -120(%rbp)
	movq 	-120(%rbp), %rdi
	call	printStr
	movl	%eax, -120(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -124(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -128(%rbp)
	movq 	-128(%rbp), %rdi
	call	printStr
	movl	%eax, -128(%rbp)
	movq 	-100(%rbp), %rdi
	call	printInt
	movl	%eax, -132(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -136(%rbp)
	movq 	-136(%rbp), %rdi
	call	printStr
	movl	%eax, -136(%rbp)
	movq 	-24(%rbp), %rdi
	movq 	-36(%rbp), %rsi
	call	maximum
	movl	%eax, -144(%rbp)
	movl	-144(%rbp), %eax
	movl 	%eax, -140(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -148(%rbp)
	movq 	-148(%rbp), %rdi
	call	printStr
	movl	%eax, -148(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -152(%rbp)
	movq 	-152(%rbp), %rdi
	call	printStr
	movl	%eax, -152(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -156(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -160(%rbp)
	movq 	-160(%rbp), %rdi
	call	printStr
	movl	%eax, -160(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -164(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -168(%rbp)
	movq 	-168(%rbp), %rdi
	call	printStr
	movl	%eax, -168(%rbp)
	movq 	-140(%rbp), %rdi
	call	printInt
	movl	%eax, -172(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -176(%rbp)
	movq 	-176(%rbp), %rdi
	call	printStr
	movl	%eax, -176(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -180(%rbp)
	movq 	-180(%rbp), %rdi
	call	printStr
	movl	%eax, -180(%rbp)
	movl	$0, %eax
	movl 	%eax, -188(%rbp)
	movl	-188(%rbp), %eax
	movl 	%eax, -216(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -192(%rbp)
	movq 	-192(%rbp), %rdi
	call	printStr
	movl	%eax, -192(%rbp)
	nop
	movl	$0, %eax
	movl 	%eax, -204(%rbp)
	movl	-204(%rbp), %eax
	movl 	%eax, -200(%rbp)
.L10: 
	movl	$5, %eax
	movl 	%eax, -208(%rbp)
	movl	-200(%rbp), %eax
	cmpl	-208(%rbp), %eax
	jl .L12
	jmp .L13
.L11: 
	movl 	-200(%rbp), %eax
	incl 	%eax
	movl 	%eax, -200(%rbp)
	jmp .L10
.L12: 
	movl	0(%rbp), %eax
	movl 	%eax, -212(%rbp)
	movq 	-212(%rbp), %rdi
	call	printStr
	movl	%eax, -212(%rbp)
	movq 	-216(%rbp), %rdi
	call	printInt
	movl	%eax, -220(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, -224(%rbp)
	movq 	-224(%rbp), %rdi
	call	printStr
	movl	%eax, -224(%rbp)
	movl 	-216(%rbp), %eax
	addl 	-200(%rbp), %eax
	movl 	%eax, -228(%rbp)
	movl	-228(%rbp), %eax
	movl 	%eax, -216(%rbp)
	jmp .L11
.L13: 
	movl	$0, %eax
	movl 	%eax, -196(%rbp)
	movl	-196(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
