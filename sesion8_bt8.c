#include <stdio.h>
int main(){
	int sum = 0;
	int number[3][3] = {{1,2,3,4},{4,5,6,7},{6,7,8,9}};
	
	
	for( int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if ( j + i == 2 ){
				printf ( "\t%d", number[i][j] );
				sum += number[i][j];
			} else{
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n tong cac phan tu tren duong cheo phu la : %d ", sum);
	return 0;
    }
