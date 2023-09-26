#!/bin/bash

# Define color variables
GREEN="\e[32m"
RED="\e[31m"
DEFAULT="\e[0m"

src=~/tests/C00
dest=temp/C00

run_tests_for_C00()
{
	mkdir temp
	cp -R "$src" "$dest"
	# ex00
	ex=ex00
	file=ft_putchar.c
	tester=ft_putchar.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex01
	ex=ex01
	file=ft_print_alphabet.c
	tester=ft_print_alphabet.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex02
	ex=ex02
	file=ft_print_reverse_alphabet.c
	tester=ft_print_reverse_alphabet.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex03
	ex=ex03
	file=ft_print_numbers.c
	tester=ft_print_numbers.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex04
	ex=ex04
	file=ft_is_negative.c
	tester=ft_is_negative.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex05
	ex=ex05
	file=ft_print_comb.c
	tester=ft_print_comb.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex06
	ex=ex06
	file=ft_print_comb2.c
	tester=ft_print_comb2.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex07
	ex=ex07
	file=ft_putnbr.c
	tester=ft_putnbr.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex08
	ex=ex08
	file=ft_print_combn.c
	tester=ft_print_combn.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	rm -r -f temp
}

run_norminette()
{
	local filename="$1"

	if command -v norminette &> /dev/null; then
		if norminette "$filename"; then
			# echo -e "${GREEN}Norminette checks passed${DEFAULT}"
			return 1
		else
			echo -e "${RED}Norminette checks failed${DEFAULT}"
			return 0
		fi
	else
		echo "Norminette not found, skipping norminette checks"
		return 2
	fi
}

compile()
{
	local filename="$1"
	local mainfile="$2"
	local outputname="$3"

	cc -Wextra -Werror -Wall "$filename" "$mainfile" -o "$outputname"

	# Check the exit status of the compilation
	local exit_status="$?"

	# Return the exit status to the calling code
	return "$exit_status"
}

test_ex()
{
	local ex="$1"
	local template="$2"
	local main="$3"
	local file_test=temp/C00/test.out
	local file_final=temp/C00/final.out

	run_norminette "$ex"
	if [ $? -eq 0 ]; then
		echo -e "${RED}----- ${ex00} -> FAIL ----- ${DEFAULT}"
		return 0
	fi

	compile "$ex" "$main" "$file_test"
	if [ $? -eq 0 ]; then
		echo -n ""
		#echo -e "${GREEN}Compilation successful${DEFAULT}"
	else
		echo -e "${RED}Compilation failed${DEFAULT}"
		return 0
	fi
	compile "$template" "$main" "$file_final"

	# Run the final and test programs
	./"$file_final" > "temp/output_final.txt"
	./"$file_test" > "temp/output_test.txt"

	# Compare the output of the final and test programs
	if diff "temp/output_final.txt" "temp/output_test.txt" &> /dev/null; then
		echo -e "${GREEN}----- ${ex} -> CORRECT ----- ${DEFAULT}"
	else
		echo -n "+ "
		cat -e "temp/output_final.txt"
		echo ""
		echo -n "- "
		cat -e "temp/output_test.txt"
		echo ""
		echo -e "${RED}----- ${ex} -> FAIL ----- ${DEFAULT}"
	fi

	rm -f "$file_test"  "$file_final"
}


run_tests_for_C00
