#include<stdio.h>
int main(){
    int n,c=0,d=0;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
        if(a[i]%2==0){
            c++;
        }
        else{
            d++;
        }
    }
    if(c<d){
        printf("odd")
    }
    else if(c==d){
        printf("-1");
    }
    else{
        printf("even");
    }
    return 0;
}