
/*Remove Character from String 

The program must accept a string S and a character CH 
as the input. The program must remove all the occurrences of CH 
in the string S and print it as the output. 

Boundary Condition(s):
2 <= Length of S <= 100 

Example Input/Output 1: 
Input: 
icecream 
c 
Output: 
ieream 
Explanation: The character c has occurred 2 times in the 
string "icecream". So they are removed from the string 
and printed as the output. 

Example Input/Output 2: 
Input: 
greatappleshouldbeanapple 
p 
Output: 
greataleshouldbeanale*/

Program:

#include <stdio.h>

int main() {
   char a[100],c;
   scanf("%s\n%c",a,&c);
   for(int i=0;a[i]!='\0';i++)
   {
       if(a[i]!=c)
       {
           printf("%c",a[i]);
       }
   }

    return 0;
}
