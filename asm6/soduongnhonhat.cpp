#include <stdio.h>
int main(){
	int size;		
	printf("Nhap so luong phan tu cua mang");
	scanf("%d",&size);

	
	int player[size];
		
	for (int i=0;i<size;i++){
		printf("nhap pt vao mang:");
		scanf("%d",&player[i]);
	}
    int i = 1;
	int min = player[0];
	while(i<size){
		if(player[i] < min && player[i] > 0){
			min = player[i];
		}
		i++;
	} 
	if(min>0){
		printf("so duong nho nhat la: %d",min);
	}else{
		printf("ko co so duong");
	}
	
}
