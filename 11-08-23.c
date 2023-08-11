/*String - Decimal

The program must accept a string S containing only a and b  
b as the input.The program must form the binary represention
of an integer X by replacing a by 1 and b by 0 in the 
string S.Then the program must print the value of X as the output.

Boundary Condition(s):
1 <= Length of S <= 30

Input Format:
The first line contains the string S.

Output Format:
The first line contains the integer X.

Example Input/Output 1:
Input:
aabba

Output:
25

Explanation:
After replacing all the occurrences of a by 1 and b by 0, the string becomes 11001.
So the decimal equivalent of (11001)2 is 25.
Hence the output is 25

Example Input/Output 2:
Input:
abbaaba

Output:
77*/
Program:

#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    scanf("%s",a);
    int l=strlen(a);
    int b[100],s=0,k=0;
    int d=0, base = 1, rem;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='a')
        {
            b[k]=1;
            k++;
        }
        else
        {
            b[k]=0;
            k++;
        }
    }
    for(int i=k-1;i>=0;i--)
    {
        rem=b[i];
        d=d+rem*base;
        base=base*2;
    }
    printf("%d", d);
    return 0;
}