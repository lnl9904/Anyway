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
    
    int s = 0,c = 0;
	 
	 for (int i = 0; i < size ; i++){
	 	if(player[i]%2 == 1){
	 		s = s + player[i];
	 		c++;
		 }
	 }
	 if(c>0){
	 	 float tbc = (float)s/c;
	 printf("tbc so le: %d",tbc);
	 }
	
}
