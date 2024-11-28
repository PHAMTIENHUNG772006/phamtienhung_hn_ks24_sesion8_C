#include <stdio.h>
int main(){
	int sum;
	int number[3][3] = {{1,2,3},{4,5,6},{6,7,8}};
	for( int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if ( j == i ){
				printf ( "\t%d", number[i][j] );
				sum += number[i][j];
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
	printf("\n tong cac phan tu tren duong cheo chinh: %d ", sum);
	return 0;
}


