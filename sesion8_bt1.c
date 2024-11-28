#include<stdio.h>
int main(){
	int number[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
	for(int i=0;i<3;i++){
	  for(int j=0;j<4;j++){
    printf(" gia tri cua mang thu %d = %d  \n", i+1,number[i][j]);
    }
      }
      return 0;
}
