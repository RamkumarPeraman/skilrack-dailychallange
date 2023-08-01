/*FIB - First and Last Digit
Fill in the missing lines of code so that the program 
accepts a positive integer N and prints the first 
and last digits of N as the output.
Note: The value of N is always greater than or equal to 10.
*/
#include <stdio.h>
#include<stdlib.h>
int main() {
   int num,lastdigit;
   scanf("%d",num);
   lastdigit=num%10;
   while(num>=10)
   {
       num/=10;
   }
    printf("%d%d",num,lastdigit);
    return 0;
}