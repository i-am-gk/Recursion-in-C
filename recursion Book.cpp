#include <stdio.h>
unsigned long long int factorial(unsigned int number);
 int main(void)
{
// during each iteration, calculate
 // factorial(i) and display result
for (unsigned int i = 0; i <= 21; ++i) {
printf("%u! = %llu\n", i, factorial(i));
} 
 } 

unsigned long long int factorial(unsigned int number)
{ 
 // base case 
 if (number <= 1) { 
 return 1; 
 } 
 else { // recursive step 
 return (number * factorial(number - 1)); 
 } 
}
