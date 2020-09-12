#include<stdio.h>#include<stdio.h>
int main(){
	int n;
	scanf_s("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("* ");
			if(j==n-1){
				printf("\n");
			}
		}
	}
	return 0;
}
