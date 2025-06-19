#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d",&n)
	}while(n<=0);
	
	int player[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap pt vao mang: ");
		scanf("%d",&player[i]);
	}
	
    int tm,kl=0;
	for (int i=0;i<n;i++){
		if(player[i]>0){
			tm = tm + player[i];
			if(tm>kl){
				kl = tm;
			}
		}else{
			tm = 0;
		}
	}
	printf("Tong chuoi so duong lien tiep dai nhat: %d",kl);
}
