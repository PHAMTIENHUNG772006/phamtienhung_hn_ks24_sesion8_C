#include<stdio.h>

int main(){
	int sum = 0;
	int number[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
	printf("\n cac phna tu trong mang :\n");
	for (int i=0;i<3;i++){
	     for(int j=0;j<4;j++){
	        printf("\t %d",number[i][j]);
	        
		 	}	
  			printf("\n");
	     }
	     
	     for(int i=0;i<3;i++){
	     	for(int j=0;j<4;j++){
	     		if(i > 0 && j > 0 && i < 2 && j < 3){

	     		continue;
			 }
			 sum += number[i][j];
		 }
	 }
	 printf("\na tri lon nhat trong mang la : %d", sum);
	 return 0;
}
		 
	
