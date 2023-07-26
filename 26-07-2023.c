/*****ProgramID- 9125

Prime and Composite Numbers

The program must accept a  positive integer N and  print the prime numbers and composite numbers from 2 to N as the output.

Boundary Condition(s):
2 <= N <= 100

Input Format:
The first line contains N.

Output Format:
The first line contains the prime numbers separated by a space.
The second line contains the composite numbers separated by a space.

Example Input/Output 1:
Input:
10

Output:
2 3 5 7
4 6 8 9 10

Example Input/Output 2:
Input:
45

Output:
2 3 5 7 11 13 17 19 23 29 31 37 41 43
4 6 8 9 10 12 14 15 16 18 20 21 22 24 25 26 27 28 30 32 33 34 35 36 38 39 40 42 44 45

Example Input/Output 3:
Input:
6

Output:
2 3 5
4 6*/


#include<stdio.h>
#include<stdlib.h>
int isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void pricom(int li){
    for(int i=2;i<=li;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    for(int i=0;i<=li;i++){
        if(i!=0 && i!=1){
        if(!isprime(i)){
            printf("%d ",i);
        }
    }
    }
}

int main()
{
    int li;
    scanf("%d ",&li);
    pricom(li);

}