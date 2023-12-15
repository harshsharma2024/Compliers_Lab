	.file	"code.c"									#Name of the file
	.text												#Code Starts					
	.globl	calculateFrequency							#calculateFrequency is a global name
	.type	calculateFrequency, @function				#calculateFrequency is a function
calculateFrequency:										#calculateFrequency : starts
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp										# Save Old base Pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp									# rbp <-- rsp set new stack base pointer 
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)								# Memory[rbp - 24] <-- arr1 (first argument)
	movl	%esi, -28(%rbp)								# Memory[rbp - 28] <-- n (second argument)
	movq	%rdx, -40(%rbp)								# Memory[rbp - 40] <-- fr1 (third argument)
	movl	$0, -12(%rbp)								# i <-- 0 ,Memory[rbp - 12] = i, Starting of the loop
	jmp	.L2												# Jumps to Label .L2
.L7:
	movl	$1, -4(%rbp)								# ctr <-- 1 ==> Memory[rbp - 4] = 1
	movl	-12(%rbp), %eax								# eax <-- i
	addl	$1, %eax									# eax = eax + 1 ==> incrementing the value of i and storing it in eax, basically performing j=i+1 part for the nested loop
	movl	%eax, -8(%rbp)								# j <-- eax ==> j = i+1, Memory[rbp - 8] = j
	jmp	.L3												# jump to label .L3
.L5:
	movl	-12(%rbp), %eax								# eax <-- i
	cltq												# Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)	
	leaq	0(,%rax,4), %rdx							# rdx will store the scaled value of rax (i) (rax(i) * 4)
	movq	-24(%rbp), %rax								# rax <-- arr1 beginning address
	addq	%rdx, %rax									# rax = rax + rdx ==> Address of arr1[i]
	movl	(%rax), %edx								# edx <-- arr1[i] ,  we are basically dereferencing %rax
	movl	-8(%rbp), %eax								# eax <-- j
	cltq												# Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)	
	leaq	0(,%rax,4), %rcx							# rcx will store the scaled value of rax (j) (rax(j) * 4)
	movq	-24(%rbp), %rax								# rax <-- arr1 beginning address
	addq	%rcx, %rax									# rax = rax + rcx ==> Address of arr1[j]
	movl	(%rax), %eax								# eax <-- arr1[j]
	cmpl	%eax, %edx									# Compares arr1[i] and arr1[j]
	jne	.L4												# Jump to label .L4 if arr[i] != arr[j]
	addl	$1, -4(%rbp)								# ctr <-- ctr + 1
	movl	-8(%rbp), %eax								# eax <-- j
	cltq												# Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)
	leaq	0(,%rax,4), %rdx							# rdx will store the scaled value of rax (j) (rax(j) * 4)
	movq	-40(%rbp), %rax								# rax <-- fr1 beginning address 
	addq	%rdx, %rax									# rax = rax + rdx ==> Address of fr1[j]
	movl	$0, (%rax)									# fr1[j] <-- 0
.L4:
	addl	$1, -8(%rbp)							   # j <-- j+1
.L3:
	movl	-8(%rbp), %eax						       # eax <-- j as Memory[rbp - 8] = j
	cmpl	-28(%rbp), %eax							   # Compares value of n with with value of  j as Memory[rbp - 28] is n
	jl	.L5											   # Including the If-Else part, If(j<n) then jump to Label .L5 else go to the next line
	movl	-12(%rbp), %eax							   # eax <-- i
	cltq											   # Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)
	leaq	0(,%rax,4), %rdx						   # rdx will store the scaled value of rax (i) (rax(i) * 4)
	movq	-40(%rbp), %rax							   # rax <-- fr1 beginning address 
	addq	%rdx, %rax								   # rax = rax + rdx ==> Address of fr1[i]
	movl	(%rax), %eax							   # eax <-- fr1[i], we are basically dereferencing %eax
	testl	%eax, %eax								   # Perform a bitwise "AND" operation of the eax register with itself ==> fr1[i] AND fr1[i]
	je	.L6											   # jump to label .L6 if result of (fr1[i] AND fr1[i] == 0) ==> (fr1=0) else continue from the next line
	movl	-12(%rbp), %eax							   # eax <-- i
	cltq											   # Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)
	leaq	0(,%rax,4), %rdx						   # rdx will store the scaled value of rax (i) (rax(i) * 4)
	movq	-40(%rbp), %rax							   # rax <-- fr1 beginning address 
	addq	%rax, %rdx								   # rdx = rax + rdx ==> Address of fr1[i]
	movl	-4(%rbp), %eax							   # eax <-- ctr as  Memory[rbp - 4] is ctr
	movl	%eax, (%rdx)							   # fr1[i] <-- ctr 
.L6:
	addl	$1, -12(%rbp)							   # i <-- i+1
.L2:
	movl	-12(%rbp), %eax									# eax <-- i
	cmpl	-28(%rbp), %eax									# Compares value of n with with value of  i , Memory[rbp - 28] is n
	jl	.L7													# Including the If-Else part, If(i<n) then jump to Label .L7 else go to the next line
	nop														# No-operation (placeholder)
	nop														# No-operation (placeholder)
	popq	%rbp											# Restore the previous value of the base pointer (old RBP) from the stack
	.cfi_def_cfa 7, 8
	ret														# Return from the function
	.cfi_endproc											# End of procedure (for debugging information)
.LFE0:														# Label indicating the end of calculateFrequency function
	.size	calculateFrequency, .-calculateFrequency		# Declare the size of the calculateFrequency function
	.section	.rodata										# Switch to the .rodata (read-only data) section
.LC0:
	.string	"Element\tFrequency" 							# Define a string constant for printing in printArrayWithFrequency function
.LC1:
	.string	"%d\t%d\n"										# Define a format string for printing
	.text													# Switch back to the .text (executable code) section
	.globl	printArrayWithFrequency							# Declare the global symbol for printArrayWithFrequency
	.type	printArrayWithFrequency, @function				# Declare that printArrayWithFrequency is a function
printArrayWithFrequency:									#printArrayWithFrequency : starts
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp											# Save Old base Pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# rbp <-- rsp set new stack base pointer 
	.cfi_def_cfa_register 6
	subq	$48, %rsp										# Allocate space on the stack for local variables							
	movq	%rdi, -24(%rbp)									# Memory[rbp - 24] <-- arr1 (first argument)
	movq	%rsi, -32(%rbp)									# Memory[rbp - 32] <-- fr1 (second argument)
	movl	%edx, -36(%rbp)									# Memory[rbp - 36] <-- n (third argument)
	leaq	.LC0(%rip), %rax								# %rax register stores the effective address of the memory location pointed to by the label .LC0 and the current instruction's address
	movq	%rax, %rdi										# rdi <-- 1st parameter of printf (Basically the address Pointer of .LC0 label)
	call	puts@PLT										# Calls puts for printf (It will basically print the LC0 label)	
	movl	$0, -4(%rbp)									# i <-- 0 , Starting of the loop as Memory[rbp - 4] = i
	jmp	.L9													# jump to Label .L9
.L11:
	movl	-4(%rbp), %eax									# eax <-- i as Memory[rbp - 4] = i
	cltq													# Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)
	leaq	0(,%rax,4), %rdx								# rdx will store the scaled value of rax (i) (rax(i) * 4)
	movq	-32(%rbp), %rax									# rax <-- fr1 Array beginning address
	addq	%rdx, %rax										# rax = rax + rdx ==> Address of fr1[i]
	movl	(%rax), %eax									# eax <-- fr1[i]
	testl	%eax, %eax										# Perform a bitwise "AND" operation of the eax register with itself ==> fr1[i] AND fr1[i]
	je	.L10												# jump to label .L10 if result of (fr1[i] AND fr1[i] == 0) ==> (fr1=0) else continue from the next line
	movl	-4(%rbp), %eax									# eax <-- i
	cltq													# Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)
	leaq	0(,%rax,4), %rdx								# rdx will store the scaled value of rax (i) (rax(i) * 4)
	movq	-32(%rbp), %rax									# rax <-- fr1 Array beginning address
	addq	%rdx, %rax										# rax = rax + rdx ==> Address of fr1[i]
	movl	(%rax), %edx									# edx( 3rd argument of printf function) <-- fr1[i]
	movl	-4(%rbp), %eax									# eax <-- i
	cltq													# Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)
	leaq	0(,%rax,4), %rcx								# rcx will store the scaled value of rax (i) (rax(i) * 4)
	movq	-24(%rbp), %rax									# rax <-- arr1 Array beginning address
	addq	%rcx, %rax										# rax = rax + rcx ==> Address of arr1[i]
	movl	(%rax), %eax									# eax <-- fr1[i], we are basically dereferencing %rax
	movl	%eax, %esi										# esi (2nd argument of printf function) <-- eax
	leaq	.LC1(%rip), %rax								# %rax register stores the effective address of the memory location pointed to by the label .LC1 and the current instruction's address 
	movq	%rax, %rdi										# rdi <-- 1st parameter of printf (Basically the address Pointer of .LC1 label)
	movl	$0, %eax										# eax <-- 0
	call	printf@PLT										# Call printf function
.L10:
	addl	$1, -4(%rbp)								# i <-- i+1
.L9:												      
	movl	-4(%rbp), %eax								# eax <-- i
	cmpl	-36(%rbp), %eax								# Compares value of n with with value of i as Memory[rbp - 36] is n
	jl	.L11											# Including the If-Else part, If(i<n) then jump to Label .L11 else go to the next line 
	nop													# No operation (placeholder instruction)
	nop													# No operation (placeholder instruction)
	leave												# Restore the stack frame and base pointer
	.cfi_def_cfa 7, 8
	ret													# Return from the function
	.cfi_endproc
.LFE1:													# Local function end marker
	.size	printArrayWithFrequency, .-printArrayWithFrequency    # Declare the size of the calculateFrequency function
	.section	.rodata											  # Switch to the .rodata (read-only data) section
	.align 8													  # Align the section
.LC2:
	.string	"\n\nCount frequency of each integer element of an array:"		# String Message
	.align 8																# Aligns the memory location to an 8-byte boundary
.LC3:
	.string	"------------------------------------------------"				# String Message
	.align 8																# Aligns the memory location to an 8-byte boundary
.LC4:
	.string	"Input the number of elements to be stored in the array :"		# String Message
.LC5:
	.string	"%d"															# Format specifier for reading an integer
	.align 8																# Aligns the memory location to an 8-byte boundary
.LC6:
	.string	"Enter each elements separated by space: "						# For user input (array elements)
	.text																	# Marks the beginning of the executable code section
	.globl	main															# Declares 'main' as a global symbol
	.type	main, @function													# Specifies that 'main' is a function
main:																# main:  starts
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp													# Save Old base Pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp												# rbp <-- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$832, %rsp												# create space for local array(arr1[100], arr2[100] ) , Variables n,i and others
	movq	%fs:40, %rax 											# 64-bit value from the thread-local storage segment at a specific %rax register 
	movq	%rax, -8(%rbp)											# Memory[rbp - 8] = rax
	xorl	%eax, %eax												# %eax <-- 0
	leaq	.LC2(%rip), %rax										# %rax register stores the effective address of the memory location pointed to by the label .LC2 and the current instruction's address
	movq	%rax, %rdi												# rdi <-- 1st parameter of printf (Basically the address Pointer of .LC2 label)
	call	puts@PLT												# Calls puts for printf (It will basically print the LC2 label)	
	leaq	.LC3(%rip), %rax										# %rax register stores the effective address of the memory location pointed to by the label .LC3 and the current instruction's address
	movq	%rax, %rdi												# rdi <-- 1st parameter of printf (Basically the address Pointer of .LC3 label)
	call	puts@PLT												# Calls puts for printf	
	leaq	.LC4(%rip), %rax										# %rax register stores the effective address of the memory location pointed to by the label .LC4 and the current instruction's address
	movq	%rax, %rdi												# rdi <-- 1st parameter of printf (Basically the address Pointer of .LC4 label)
	movl	$0, %eax												# eax <-- 0
	call	printf@PLT												# Prints the Line "Input the number of elements to be stored in the array :" by using memory location of .LC4 label in the %rax
	leaq	-828(%rbp), %rax										# Memory[rbp - 828] address has been stored in %rax to take input for n
	movq	%rax, %rsi												# address for n variable is stored as the second argument for the next function to be called
	leaq	.LC5(%rip), %rax										# %rax register stores the effective address of the memory location pointed to by the label .LC5 and the current instruction's address
	movq	%rax, %rdi												# rdi <-- 1st parameter of printf (Basically the address Pointer of .LC5 label)
	movl	$0, %eax												# eax <-- 0
	call	__isoc99_scanf@PLT										# (n <-- Input )Calls the Scanf function to take input for n
	leaq	.LC6(%rip), %rax										# %rax register stores the effective address of the memory location pointed to by the label .LC6 and the current instruction's address
	movq	%rax, %rdi												# rdi <-- 1st parameter of printf (Basically the address Pointer of .LC6 label)
	movl	$0, %eax												# eax <-- 0
	call	printf@PLT												# Prints the Line "Enter each elements separated by space: " by using memory location of .LC6 label in the %rax
	movl	$0, -824(%rbp)											# (i <-- 0) , Stored 0 in Memory[Rbp - 24] BEGINNING OF THE LOOP 
	jmp	.L13														# jump to label .L13
.L14:
	leaq	-816(%rbp), %rdx										# we are storing the effective address of arr1 beginning (memory location [rbp - 816] ) into rdx
	movl	-824(%rbp), %eax										# eax <-- i , Storing the value of i ( memory location [rbp - 824] ) into the eax register
	cltq															# Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)
	salq	$2, %rax												# rax <-- 4*i ,Shift the value in rax left by 2 bits (multiply by 4), We are basically doing the offset part so to be able to access the other array adress 
	addq	%rdx, %rax												# address of arr1[i] , rax = rax + rdx => rax stores (Adress of arr1 beginning + i*4) , So with all varying i we would be able to access all the elemnts of arr1
	movq	%rax, %rsi												# adress of arr1[i] is stored as 2nd parameter of scanf function
	leaq	.LC5(%rip), %rax										# %rax register stores the effective address of the memory location pointed to by the label .LC5 and the current instruction's address										# 
	movq	%rax, %rdi												# rdi <-- 1st parameter of scanf function (Basically the address Pointer of .LC5 label)
	movl	$0, %eax												# Clear the eax register (used to store the return value of scanf)
	call	__isoc99_scanf@PLT										# Call the scanf function to read value of arr1[i] and store it at 2nd parameter (rsi) address
	addl	$1, -824(%rbp)											# increment i , i <-- i+1
.L13:																
	movl	-828(%rbp), %eax										# eax <-- n , Stores value on n 			
	cmpl	%eax, -824(%rbp)										# Compares value of n with with value of i as Memory[rbp - 824] is i
	jl	.L14														# Including the If-Else part, If(i<n) then jump to Label .L14 else go to the next line
	movl	$0, -820(%rbp)						  					# new i <-- 0 , As we have defined a new int i in the second loop so this memory address refers to the address of new i,  Memory[rbp - 820] = 0 
	jmp	.L15														# Jumps to label .L15 to execute the 2nd loop in C code
.L16:
	movl	-820(%rbp), %eax										# eax <-- new i (of 2nd loop)
	cltq															# Sign-extend eax to rax (convert a 32-bit value in eax to a 64-bit value in rax)
	movl	$-1, -416(%rbp,%rax,4)									# Memory[rbp - 416 + 4*(new i)] <-- (-1), Storing fr1[new i] = -1
	addl	$1, -820(%rbp)											# new i <-- new i + 1
.L15:
	movl	-828(%rbp), %eax										# eax <-- n , Stores value on n 
	cmpl	%eax, -820(%rbp)										# Compares value of n with with value of new i as Memory[rbp - 820] is new i
	jl	.L16														# Including the If-Else part, If(new i<n) then jump to Label .L16 else go to the next line
	movl	-828(%rbp), %ecx										# ecx <-- Address of n 
	leaq	-416(%rbp), %rdx										# rdx <-- Address of fr1 array beginning (3rd parameter for calculatefrequency function)
	leaq	-816(%rbp), %rax										# rax <-- address of arr1 array beginning
	movl	%ecx, %esi												# esi <-- ecx , As ecx stores n so n would be 2nd argument for calculateFrequency function 
	movq	%rax, %rdi												# rdi <-- rax ==> arr1 would be 1st argument for calculateFrequency function
	call	calculateFrequency										# calculateFrequency function Called
	movl	-828(%rbp), %edx										# edx <-- Address of n 
	leaq	-416(%rbp), %rcx										# rcx <-- Address of fr1 array beginning
	leaq	-816(%rbp), %rax										# rax <-- address of arr1 array beginning
	movq	%rcx, %rsi												# rsi <-- rcx ==> rsi(2nd Argument) <-- Address of fr1 array beginning
	movq	%rax, %rdi												# rdi <-- rax ==> rdi(1st Argument) <-- address of arr1 array beginning
	call	printArrayWithFrequency									# printArrayWithFrequency function Called 
	movl	$0, %eax												# Move the value 0 into the eax register
	movq	-8(%rbp), %rdx											# Load the value at memory location [rbp - 8] into the rdx register
	subq	%fs:40, %rdx											# Subtract the value at fs:40 from the value in the rdx register
	je	.L18														# Jump to label .L18 if the zero flag is set (indicating that the result of the subtraction was zero)
	call	__stack_chk_fail@PLT									# Call the __stack_chk_fail function from the PLT (Procedure Linkage Table)
.L18:
	leave															# Cleans up the stack frame and restores the previous base pointer
	.cfi_def_cfa 7, 8
	ret																# Returns control to the calling function
	.cfi_endproc
.LFE2:
	.size	main, .-main											# Specifies the size of the 'main' function
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8														# Aligns the memory location to an 8-byte boundary
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8														# Aligns the memory location to an 8-byte boundary
4:
