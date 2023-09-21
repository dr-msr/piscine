#!/bin/bash
echo " "
echo "Execute Script =========================="
echo " "
echo "EXECUTING FILE : $1"
echo " "
echo "Check With Norminette ==================="
echo "========================================="
echo " "
norminette -R CheckForbiddenSourceHeader $1
echo " "
echo "Compiling & Executing.. ================="
echo "========================================="
gcc -Werror -Wextra -Wall $1 -o $1_c && chmod 777 $1_c && echo " " && ./$1_c && rm $1_c
echo " "
echo " "
echo "Finish Script Execute ==================="
echo "=========== by mrahim@student.42kl.edu.my"
echo " "
