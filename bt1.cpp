#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("Nhap so hang va so cot: ");
	scanf("%d%d",&a,&b);
	
	int**n=(int**)malloc(a*sizeof(int*));
	if(n==NULL){
		printf("Khong du bo nho!\n");
		return 1;
	}
	
	for(int i=0; i<a; i++){
		n[i]=(int*)malloc(b*sizeof(int));
		if(n[i]==NULL){
			printf("Khong du bo nho tai dong %d\n",i);
			return 1;
		}
	}
	
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			scanf("%d",&n[i][j]);
		}
	}
	
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			printf("%d\t",n[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<a; i++){
		free(n[i]);
	}
	
	free(n);
	return 0;
}
