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
	int kc = A[0]-x;
	if(kc < 0){
		kc = -kc;
	}
	
	int gt = A[0];	
	for ( int i = 0; i<n;i++){
		int h = A[i] - x;
		if (h < 0){
		h = -h;
		}
		if(h < kc){ 
			kc = h;
			gt = A[i];
		}	
	}
	
	printf("Vi tri gan nhat : %d",gt);
}
