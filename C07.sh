#!/bin/bash

# Define color variables
GREEN="\e[32m"
RED="\e[31m"
DEFAULT="\e[0m"

total=0
count=1
value=0

src=~/Piscine_Moulinette/C07
dest=temp/C07

run_tests_for_C04()
{
	mkdir temp
	cp -R "$src" "$dest"

	run_norminette
	# ex00
	ex=ex00
	file=ft_strdup.c
	tester=ft_strdup.o
	value=15
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex01
	ex=ex01
	file=ft_range.c
	tester=ft_range.o
	value=15
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex02
	ex=ex02
	file=ft_ultimate_range.c
	tester=ft_ultimate_range.o
	value=15
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex03
	ex=ex03
	file=ft_strjoin.c
	tester=ft_strjoin.o
	value=15
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex04
	ex=ex04
	file=ft_convert_base.c
	file2=ft_convert_base2.c
	tester=ft_convert_base.o
	tester2=ft_convert_base2.o
	value=20
	test_ex2 "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o "$ex"/"$file2" "$dest"/"$ex"/"$tester2"

	# ex05
	ex=ex05
	file=ft_split.c
	tester=ft_split.o
	value=20
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

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
	local mainfile="$2"
	local outputname="$3"

	cc -Wextra -Werror -Wall "$filename" "$mainfile"  -o "$outputname"

	local exit_status="$?"

	return "$exit_status"
}

test_ex()
{
	local ex="$1"
	local template="$2"
	local main="$3"
	local file_test=temp/C07/test.out
	local file_final=temp/C07/final.out

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

compile2()
{
	local filename="$1"
	local mainfile="$2"
	local outputname="$3"
	local filename2="$4"

	cc -Wextra -Werror -Wall "$filename" "$mainfile" "$filename2" -o "$outputname"

	local exit_status="$?"

	return "$exit_status"
}

test_ex2()
{
	local ex="$1"
	local exextra="$4"
	local template="$2"
	local templateextra="$5"
	local main="$3"
	local file_test=temp/C07/test.out
	local file_final=temp/C07/final.out

	compile2 "$ex" "$main" "$file_test" "$exextra"
	if [ $? -ne 0 ]; then
		echo -e "${RED}Compilation failed${DEFAULT}"
	return 0
	fi
	compile2 "$template" "$main" "$file_final" "$templateextra"

	./"$file_final" > "temp/output_final.txt"
	./"$file_test" > "temp/output_test.txt"

	if [ $? -eq 124 ]; then
		echo -e "${RED}----- ${ex} -> TIMEOUT (exceeded 10 seconds) ----- ${DEFAULT}"
	else
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
	fi

	rm -f "$file_test"  "$file_final"
}



run_tests_for_C04
