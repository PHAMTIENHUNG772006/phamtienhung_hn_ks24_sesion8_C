#include<stdio.h>
int main(){
	int number[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
	int max = number[0][0];
	
	for(int i=0;i<3;i++){
	     for(int j=0;j<4;j++){
	     if(number[i][j]>max){
	     	max = number[i][j];
		 	}	

	     }
	 }
	 printf("gia tri lon nhat trong mang la : %d", max);
	 return 0;
}
		 
	
