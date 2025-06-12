#include<stdio.h>
int main(){
    int n;
    printf("Nhap n (n >= 0): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Gia tri khong hop le!\n");
       
    }

    int f0 = 0;
    int f1 = 1;
    int fn = f0 + f1;
    
    
    while(fn <=n){
    	f0 = f1;
    	f1 = fn;
    	fn = f0 + f1;
    	
	}
	printf("So Fibonacci lon nhat nho hon %d trong day so la: %d",n,f1);
} 
