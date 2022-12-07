<!--
# Name: Pratyay Kumar
# Date: 09/29/2022
# Lab: 2
# Purpose: To test if the language implementation has short circuit evaluation in AND boolean construct.
# Program Description: This problem calls function f, whith && operator and checks if short circuit happens or not.
-->
<html>
 <head>
  <title>PHP Test</title>
 </head>
 <body>
 <?php 
    
    # Function: f
    # Description: function f is used to check short-circuit.
    # Param: NIL
    function f () {
        echo '<p>I have been evaluated</p>';
        return 1;
    }
 
    # Declared the variable 
    $i = 1;

    # Here, short circuit happens if $i == 0.
    if ( $i == 0 && f() )
        echo '<p>True</p>';
    else
        echo '<p>False</p>';
 
 ?> 
 </body>
</html>