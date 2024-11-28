#include<stdio.h>
int main(){
	int n, viTri = -1 ;
	    printf("hay nhap mot so de kiem tra mang : ");
     	scanf("%d", &n);
	int number[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
	for(int i=0;i<3;i++){
	     for(int j=0;j<4;j++){
            printf(" gia tri cua mang thu %d, cot %d = %d  \n", i+1,j+1,number[i][j]);
    if(n == number[i][j]){
    	viTri = 1;
		    printf("\nphan tu %d co trong mang tai vi tri [%d][%d]\n",n ,i+1 ,j+1);

    	}
            }
               }
            if(viTri == -1){
            	printf("phan tu %d khong nam trong mang", n);
			}
	
      return 0;
}
