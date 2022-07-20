#include<stdio.h>

int main() {
    int n,rem,result=0;
    scanf("%d",&n);
    
    while(n!=0) {
        rem = n%10;
        result+=rem*rem*rem;
        n=n/10;
    }
    printf("%d",result);
}
