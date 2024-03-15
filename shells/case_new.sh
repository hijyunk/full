#!/bin/bash

if [ $# -eq 0 ]; then
	echo "Enter the country name~!!"
else
	case "$1" in
		ko) echo "Seoul" ;;
		us) echo "Washington" ;;
		cn) echo "Beiging" ;;
		jp) echo "Tokyo" ;;
		*) echo "Your entry => $@ is not in list." 
	esac
fi

