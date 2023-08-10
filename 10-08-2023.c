/*
Alternate Repeat Pattern

The program must accept a positive even integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):
2 <= N <= 100

Input Format:
The first line contains the positive even integer N.

Output Format:
The lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
6

Output:
1666666
2255555
3334444

Example Input/Output 2:
Input:
4

Output:
14444
22333*/

Program:

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1,k=n;i<=n/2,k>n/2;i++,k--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        for(int j=1;j<=k;j++)
        {
            printf("%d",k);
        }
        printf("\n");
    }

    return 0;
}