#include<stdio.h>
int main(){
    int n;
    int x = 0;
    int dv;
    printf("Nhap n: ");
    scanf("%d",&n);
    
    while(n>0){
    	dv = n%10;
    	x = x*10 + dv;
    	n = n/10;	
	}
	printf("so nghich dao cua cua n la %d",x);
} 
