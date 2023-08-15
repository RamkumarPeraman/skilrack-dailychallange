/*Mask Email

A string S representing the email of a user is passed as the input. The program must secure the email by masking vowels and digits with asterisk * and print the resulting masked string value M as the output.

Boundary Condition(s):
5 <= Length of S <= 100

Input Format:
The first line contains S.

Output Format:
The first line contains M.

Example Input/Output 1:
Input:
your5name_007@gmail.com

Output:
y**r*n*m*_***@gm**l.c*m

Example Input/Output 2:
Input:
AS34DFq65werx7cm0v@red@rediffmail.com

Output:
*S**DFq**w*rx*cm*v@r*d@r*d*ffm**l.c*m
*/
Program:

#include <stdio.h>
#include<stdbool.h>
bool isvowel(char s){
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'){
        return true;
    }
    else{
        return false;
    }
}
bool isnum(char s){
    if(s=='1'||s=='2'||s=='3'||s=='4'||s=='5'||s=='6'||s=='7'||s=='8'||s=='9'||s=='0'){
        return true;
    }else{
        return false;
    }
}
int main(){
    char a[100];
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(isvowel(a[i])|| isnum(a[i]))
        {
            printf("*");
        }else{
            printf("%c",a[i]);
        }
    }
}