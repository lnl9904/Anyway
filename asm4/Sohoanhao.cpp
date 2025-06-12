#include<stdio.h>
int main(){
    int n;
    int cnt = 1;
    int x = 0;
    
    printf("Nhap n: ");
    scanf("%d",&n);
    while(cnt < n){
    	if(n%cnt == 0){
    		x = x + cnt;  		
		}
		cnt++;		
	}
	if(x==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong phai so hoan hao",n);
	}
} 
