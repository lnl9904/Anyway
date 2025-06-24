#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so luong phan tu: ");
		scanf("%d",&n);
	}while (n<= 0);
	
	int A[n];
	for (int i =0; i <n ; i++){
		printf("Nhap pt vao mang");
		scanf("%d",&A[i]);
	}
	int x;
	printf("Nhap so x:");
	scanf("%d",&x);
	int kc = 0;
	int gt = x;
	
	for ( int i = 0; i<n;i++){
		int h = A[i] - x;
		if (h < 0){
		h = -h;
		}
		if(h > kc){ 
			kc = h;
			gt = A[i];
		}	
	}
	
	printf("Vi tri xa nhat : %d",gt);
}
