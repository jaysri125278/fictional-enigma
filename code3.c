/*C program to check whether the given number is prime number or not*/

#include<stdio.h>

int main() {
    int n,flag=0;
    
    scanf("%d",&n);
    
    if(n==0||n==1) {
        flag=1;
    }
    for(int i=2;i<=n/2;i++) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }
    
    if(flag==0) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}
