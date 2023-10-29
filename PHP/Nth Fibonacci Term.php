<?php

function Fibonacci($number)
{ 
      
    // if and else if to generate first two numbers 
    if ($number == 0) 
        return 0;     
    else if ($number == 1) 
        return 1;     
      
    // Recursive Call to get the upcoming numbers 
    else
        return (Fibonacci($number-1) +  
                Fibonacci($number-2)); 
}
  
// Taking Nth term to be 10 by default - can be changed
$n = 10;

// Below line can be used to input n's value from console
// $n = intval(readline('Enter the value of N : ')); 

echo "<h3>Nth term of the Fibonacci series is : </h3>";  
echo "\n";  

// Calling recursive function to calculate and 
// print Nth term of the Fibonacci Series
echo Fibonacci($n); 

?>
