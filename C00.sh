#!/bin/bash

# Define color variables
GREEN="\e[32m"
RED="\e[31m"
DEFAULT="\e[0m"

src=~/tests/C00
dest=temp/C00

file=ex00/ft_putchar.c
file2=temp/C00/ex00/ft_putchar.c
file_main=temp/C00/ex00/main.c
file_test=ex00/test.out
file_final=temp/C00/ex00/final.out

run_tests_for_C00()
{
	mkdir temp
	cp -R "$src" "$dest"

	run_norminette "$file"
	if [ $? -eq 0 ]; then
		echo -e "${RED}----- ${file} -> FAIL ----- ${DEFAULT}"
		return 0
	fi

	compile "$file" "$file_main" "$file_test"
	if [ $? -eq 0 ]; then
		echo -n ""
		#echo -e "${GREEN}Compilation successful${DEFAULT}"
	else
		echo -e "${RED}Compilation failed${DEFAULT}"
		return 0
	fi
	compile "$file2" "$file_main" "$file_final"


	# Run the final and test programs
	./"$file_final" > "temp/output_final.txt"
	./"$file_test" > "temp/output_test.txt"

	# Compare the output of the final and test programs
	if diff "temp/output_final.txt" "temp/output_test.txt" &> /dev/null; then
		echo -e "${GREEN}----- ${file} -> CORRECT ----- ${DEFAULT}"
	else
		echo -n "+ "
		cat -e "temp/output_final.txt"
		echo ""
		echo -n "- "
		cat -e "temp/output_test.txt"
		echo ""
		echo -e "${RED}----- ${file} -> FAIL ----- ${DEFAULT}"
	fi

	rm -f "$file_test"
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

run_tests_for_C00
