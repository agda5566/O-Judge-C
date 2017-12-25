#include<stdio.h>
#include<stdlib.h>

int main(){
	int year;//1number 
	
	while(scanf("%d",&year)!=EOF){
		if(year%4==0 && year%100!=0){
			printf("閏年\n");
		}
		else if(year%400==0){
			printf("閏年\n");
		}
		else{
			printf("平年\n");
		}
	}
	return 0;

}

