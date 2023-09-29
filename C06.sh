#!/bin/bash

# Define color variables
GREEN="\e[32m"
RED="\e[31m"
DEFAULT="\e[0m"

total=0
count=1
value=0

src=~/Piscine_Moulinette/C06
dest=temp/C06

run_tests_for_C06()
{
	mkdir temp
	cp -R "$src" "$dest"

	run_norminette
	# ex00
	ex=ex00
	file=ft_print_program_name.c
	tester=ft_print_program_name.o
	value=25
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester"

	# ex01
	ex=ex01
	file=ft_print_params.c
	tester=ft_print_params.o
	value=25
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester"

	# ex02
	ex=ex02
	file=ft_rev_params.c
	tester=ft_rev_params.o
	value=25
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester"

	# ex03
	ex=ex03
	file=ft_sort_params.c
	tester=ft_sort_params.o
	value=25
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester"

	rm -r -f temp

	if [ $total -gt 49 ]; then
		echo ""
		echo -e "${GREEN}*****You Pass C00 with $total points*****${DEFAULT}"
		echo ""
	else
		echo ""
		echo -e "${RED}*****You Failed C00 with $total points*****${DEFAULT}"
		echo ""


	fi
}

run_norminette()
{

	if command -v norminette &> /dev/null; then
		if norminette ; then
			echo ""
			echo -e "${GREEN}Norminette checks passed${DEFAULT}"
			echo ""
			return 1
		else
			echo ""
			echo -e "${RED}Norminette checks failed${DEFAULT}"
			echo ""
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
	local outputname="$2"

	cc -Wextra -Werror -Wall "$filename" -o "$outputname"

	local exit_status="$?"

	return "$exit_status"
}

test_ex()
{
	local ex="$1"
	local template="$2"
	local file_test=temp/C06/test.out
	local file_final=temp/C06/final.out

	compile "$ex" "$file_test"
	if [ $? -ne 0 ]; then
		echo -e "${RED}Compilation failed${DEFAULT}"
	return 0
	fi

	./"$file_test" >> "temp/output_test.txt"
	./"$file_test" "hello" >> "temp/output_test.txt"
	./"$file_test" "hello" "world" "!" >> "temp/output_test.txt"
	./"$file_test" "!" "world" "hello" >> "temp/output_test.txt"
	./"$file_test" "hello" "WORLD" "!" "1" "2" "3" >> "temp/output_test.txt"
	./"$file_test" "hello" "world!" "!" "12345" "67890" >> "temp/output_test.txt"
	./"$file_test" "hello world" "world again!" "!" "123 456" "678 900" >> "temp/output_test.txt"
	./"$file_test" "hello" "世界" "!" "12345" "67890" >> "temp/output_test.txt"
	./"$file_test" "hello" "world" "hello" "!" "1" "2" "3" >> "temp/output_test.txt"
	./"$file_test" "hello" "world" NULL "!" "1" "2" "3" >> "temp/output_test.txt"

	compile "$template" "$file_test"
	./"$file_test" >> "temp/output_final.txt"
	./"$file_test" "hello" >> "temp/output_final.txt"
	./"$file_test" "hello" "world" "!" >> "temp/output_final.txt"
	./"$file_test" "!" "world" "hello" >> "temp/output_final.txt"
	./"$file_test" "hello" "WORLD" "!" "1" "2" "3" >> "temp/output_final.txt"
	./"$file_test" "hello" "world!" "!" "12345" "67890" >> "temp/output_final.txt"
	./"$file_test" "hello world" "world again!" "!" "123 456" "678 900" >> "temp/output_final.txt"
	./"$file_test" "hello" "世界" "!" "12345" "67890" >> "temp/output_final.txt"
	./"$file_test" "hello" "world" "hello" "!" "1" "2" "3" >> "temp/output_final.txt"
	./"$file_test" "hello" "world" NULL "!" "1" "2" "3" >> "temp/output_final.txt"

	# if [ $? -eq 124 ]; then
	# 	echo -e "${RED}----- ${ex} -> TIMEOUT (exceeded 10 seconds) ----- ${DEFAULT}"
	# else
		if diff "temp/output_final.txt" "temp/output_test.txt" &> /dev/null; then
			echo -e "${GREEN}----- ${ex} -> CORRECT ----- ${DEFAULT}"

			if [ $count -eq 1 ]; then
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



run_tests_for_C06
