#include <stdio.h>
int main(){
	int size;
	do{
		
	printf("Nhap so luong phan tu cua mang");
	scanf("%d",&size);
	}while(size<=0);
	
	int player[size];
		
	for (int i=0;i<size;i++){
		printf("nhap pt vao mang:");
		scanf("%d",&player[i]);
	}
    int i = 1;
	int sole = player[0];
	int maxmang = ;
	while(i<size){
		if(player[i] %2 != 0){
			sole = player[i];
		}
		i++;
	} 
	if(sole){
	printf("so le cuoi cung la: %d",sole);	
	}else{
		printf("ko ton tai");
	}
	
}
