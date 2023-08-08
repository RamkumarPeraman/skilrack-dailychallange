/*Consonants in Range

The program must accept two lower case alphabets CH1 and CH2 as the input. The program must print all the consonants from CH1 to CH2 as the output.
Input Format:
The first line contains CH1 and CH2 separated by a space.

Output Format:
The first line contains all the consonants from CH1 to CH2.

Example Input/Output 1:
Input:
a z

Output:
b c d f g h j k l m n p q r s t v w x y z

Explanation:
All the consonants (except the vowels) from a to z are printed as the output.

Example Input/Output 2:
Input:
v h

Output:
v t s r q p n m l k j h*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isVowel (char s)
{  
    if(s=='a'|| s=='i' || s== 'e' ||s== 'o'||s=='u')
    { 
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    char c1, c2;
    scanf("%c %c", &c1, &c2);
    if(c1<c2){
        for (char i=c1+1;i<=c2;i++)
        { 
        if(isVowel(i)){
            continue;
        }
        else{
            printf("%c ",i);
        }
        }
    }
    else{
        for(char i=c1;i>=c2; i--)
        {
            if(isVowel(i))
            {
                continue;
            }
            else{
                printf("%c ",i);
            }
        }
    }
}

