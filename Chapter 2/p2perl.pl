# Name: Pratyay Kumar
# Date: 09/29/2022
# Lab: 2
# Purpose: To test if the language implementation has short circuit evaluation in AND boolean construct.
# Program Description: This problem calls function f, whith && operator and checks if short circuit happens or not.
use strict;
use warnings;

# Function: f
# Description: function f is used to check short-circuit.
# Param: NIL
sub f {
    print ("I have been evaluated\n");
    return 1;
}

#Declared my variable 
my $i = 1;

#Here, short circuit happens if $i == 0.
if ( $i == 0 && f() ) {
    print("True\n");
} else {
    print("False\n");
}