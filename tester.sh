#!/bin/bash

RED="\e[31m"
DEFAULT="\e[0m"

# Check if the script received an argument
if [ $# -eq 0 ]; then
	echo -e "${RED}You need to choose an assignment. ex: C02${DEFAULT}"
	exit 1
fi

# Loop through the provided arguments
for input_string in "$@"; do
	case "$input_string" in
		"C00")
			~/Piscine_Moulinette/C00.sh
			;;

		"C01")
			~/Piscine_Moulinette/C01.sh
			;;

		"C02")
			~/Piscine_Moulinette/C02.sh
			;;

		"C03")
			~/Piscine_Moulinette/C03.sh
			;;

		"C04")
			~/Piscine_Moulinette/C04.sh
			;;

		"C05")
			~/Piscine_Moulinette/C05.sh
			;;

		"C06")
			~/Piscine_Moulinette/C06.sh
			;;

		"C07")
			~/Piscine_Moulinette/C07.sh
			;;

		"C08")
			echo -e "${YELLOW}These assignments are currently being worked on.${DEFAULT}"
			;;

		"C09")
			echo -e "${YELLOW}These assignments are currently being worked on.${DEFAULT}"

			;;

		"C10")
			echo -e "${YELLOW}These assignments are currently being worked on.${DEFAULT}"
			;;

		"C11")
			echo -e "${YELLOW}These assignments are currently being worked on.${DEFAULT}"
			;;

		"C12")
			echo -e "${YELLOW}These assignments are currently being worked on.${DEFAULT}"
			;;

		"C13")
			echo -e "${YELLOW}These assignments are currently being worked on.${DEFAULT}"
			;;

		*)
			# Default case: Ignore any other input strings
			echo -e "${RED}assignment \"$input_string\" dont exist${DEFAULT}"
			echo -e "${RED}You need to choose an assignment. ex: C02${DEFAULT}"
			;;
	esac
done

export PATH="$HOME/bin:$PATH"
