#!/bin/bash

# Define color variables
GREEN="\e[32m"
RED="\e[31m"
DEFAULT="\e[0m"

total=0
count=1
value=0

src=~/Piscine_Moulinette/C00
dest=temp/C00

run_tests_for_C00()
{
	mkdir temp
	cp -R "$src" "$dest"

	run_norminette
	# ex00
	ex=ex00
	file=ft_putchar.c
	tester=ft_putchar.o
	value=10
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex01
	ex=ex01
	file=ft_print_alphabet.c
	tester=ft_print_alphabet.o
	value=10
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex02
	ex=ex02
	file=ft_print_reverse_alphabet.c
	tester=ft_print_reverse_alphabet.o
	value=10
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex03
	ex=ex03
	file=ft_print_numbers.c
	tester=ft_print_numbers.o
	value=10
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex04
	ex=ex04
	file=ft_is_negative.c
	tester=ft_is_negative.o
	value=10
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex05
	ex=ex05
	file=ft_print_comb.c
	tester=ft_print_comb.o
	value=10
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex06
	ex=ex06
	file=ft_print_comb2.c
	tester=ft_print_comb2.o
	value=10
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex07
	ex=ex07
	file=ft_putnbr.c
	tester=ft_putnbr.o
	value=15
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex08
	ex=ex08
	file=ft_print_combn.c
	tester=ft_print_combn.o
	value=15
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	rm -r -f temp

	echo ${total}
}

run_norminette()
{

	if command -v norminette &> /dev/null; then
		if norminette ; then
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

	local exit_status="$?"

	return "$exit_status"
}

test_ex()
{
	local ex="$1"
	local template="$2"
	local main="$3"
	local file_test=temp/C00/test.out
	local file_final=temp/C00/final.out

	compile "$ex" "$main" "$file_test"
	if [ $? -ne 0 ]; then
		echo -e "${RED}Compilation failed${DEFAULT}"
	return 0
	fi
	compile "$template" "$main" "$file_final"

	./"$file_final" > "temp/output_final.txt"
	 ./"$file_test" > "temp/output_test.txt"

	# if [ $? -eq 124 ]; then
	# 	echo -e "${RED}----- ${ex} -> TIMEOUT (exceeded 10 seconds) ----- ${DEFAULT}"
	# else
		if diff "temp/output_final.txt" "temp/output_test.txt" &> /dev/null; then
			echo -e "${GREEN}----- ${ex} -> CORRECT ----- ${DEFAULT}"

			if [$count -eq 1]; then
				total=$((total + value))
			fi
		else
			echo -n "+ "
			cat -e "temp/output_final.txt"
			echo ""
			echo -n "- "
			cat -e "temp/output_test.txt"
			echo ""
			echo -e "${RED}----- ${ex} -> FAIL ----- ${DEFAULT}"
			count=0
		fi
	# fi

	rm -f "$file_test"  "$file_final"
}


run_tests_for_C00
