#include<stdio.h>
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    int i =1;
    printf("Cac so le nho hon %d la: ", n);
    while (i < n) {
        printf("%d ", i);
        i += 2;
    }
    
    
}
