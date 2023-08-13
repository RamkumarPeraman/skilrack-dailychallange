/*
Alphabet Triangle Pattern

The program must accept an alphabet CH as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Input Format:
The first line contains the alphabet CH.

Output Format:
The lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
F

Output:
A
B B
C C C
D D D D
E E E E E
F F F F F F

Example Input/Output 2:
Input:
g

Output:
A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
*/

Program:

#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    c=toupper(c);
    int l=(int)c;
    int k=1;
    for(int i=65;i<=l;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%c ",i);
        }
        k++;
        printf("\n");
    }
    return 0;
}