# Name: Pratyay Kumar
# Date: 09/29/2022
# Lab: 2
# Purpose: To test if the language implementation has short circuit evaluation in AND boolean construct.
# Program Description: This problem calls function f, whith && operator and checks if short circuit happens or not.

#!/bin/ksh

# Function: f
# Description: function f is used to check short-circuit.
# Param: NIL
f () {
    echo "I have been evaluated"
    return 0
}

#Declared the variable 
i=1

#Here, short circuit happens if $i -eq 0.
if [ $i -eq 0 ] && f; then
        echo "True"
else
        echo "False"
fi