/*Factor Count of N

Fill in the missing lines of code so that the program accepts a positive integer N and prints the total number of factors of N.
Example Input/Output:
Input:
10 
Output:
4*/

#include <stdio.h>
#include <stdlib.h> 
#define LLU unsigned long long int 
 int main() { 
    LLU N, ctr; 
    int factorsCount = 0; 
    scanf("%llu", &N);
    for(ctr = 1;ctr*ctr<=N; ctr++) {
        if(N % ctr == 0) { 
           factorsCount = factorsCount +2 ; 
         } 
    } 
    if(N==1){
        factorsCount = 1; 
    } 
    printf("%d", factorsCount); 
    return 0; 
}