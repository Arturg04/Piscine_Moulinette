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
	case input_string in
		"C00")
			./C00.sh
			;;

		"C01")
			;;

		"C02")
			;;

		"C03")
			;;

		"C04")
			;;

		"C05")
			;;

		"C06")
			;;

		"C07")
			;;

		"C08")
			;;

		"C09")
			;;

		"C10")
			;;

		"C11")
			;;

		"C12")
			;;

		"C13")
			;;

		*)
			# Default case: Ignore any other input strings
			echo -e "${RED}assignment \"$input_string\" dont exist${DEFAULT}"
			echo -e "${RED}You need to choose an assignment. ex: C02${DEFAULT}"
			;;
	esac
done
