#!/bin/bash

# Define color variables
GREEN="\e[32m"
RED="\e[31m"
DEFAULT="\e[0m"

src=~/Piscine_Moulinette/C01
dest=temp/C01

run_tests_for_C01()
{
	mkdir temp
	cp -R "$src" "$dest"
	# ex00
	ex=ex00
	file=ft_ft.c
	tester=ft_ft.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex01
	ex=ex01
	file=ft_ultimate_ft.c
	tester=ft_ultimate_ft.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex02
	ex=ex02
	file=ft_swap.c
	tester=ft_swap.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex03
	ex=ex03
	file=ft_div_mod.c
	tester=ft_div_mod.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex04
	ex=ex04
	file=ft_ultimate_div_mod.c
	tester=ft_ultimate_div_mod.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex05
	ex=ex05
	file=ft_putstr.c
	tester=ft_putstr.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex06
	ex=ex06
	file=ft_strlen.c
	tester=ft_strlen.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex07
	ex=ex07
	file=ft_rev_int_tab.c
	tester=ft_rev_int_tab.o
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex08
	ex=ex08
	file=ft_sort_int_tab.c
	tester=ft_sort_int_tab.o
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

	local exit_status="$?"

	return "$exit_status"
}

test_ex()
{
	local ex="$1"
	local template="$2"
	local main="$3"
	local file_test=temp/C01/test.out
	local file_final=temp/C01/final.out

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
		else
			echo -n "+ "
			cat -e "temp/output_final.txt"
			echo ""
			echo -n "- "
			cat -e "temp/output_test.txt"
			echo ""
			echo -e "${RED}----- ${ex} -> FAIL ----- ${DEFAULT}"
		fi
	# fi

	rm -f "$file_test"  "$file_final"
}



run_tests_for_C01
