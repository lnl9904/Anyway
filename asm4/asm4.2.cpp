#include<stdio.h>
int main(){
    int n;
	printf("nhap n: ");
	if(scanf("%d",&n) !=1 || n <= 0){
		printf("Gia tri khong hop le \n");
	} 
	int m = n - 1 -((n-1)%6);
	if(m>0)
	printf("so lon nhat nho hon %d va chia het cho 2 va 3 la: %d\n", n, m);
	else
	printf("khong co so duong nho %d chia het cho 2 va 3\n",n);
	 
}
