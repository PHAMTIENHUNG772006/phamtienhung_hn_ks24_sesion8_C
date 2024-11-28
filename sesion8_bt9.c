#include <stdio.h>
int main(){
	int number[]={1,2,3,4,5,6,7,8,3,5,5};
	int max;
	int maxfull;
	int lengthNumber= sizeof(number)/sizeof(number[0]);
	for(int i= 0;i < lengthNumber; i++){
		int count=0;
		for(int j= 0;j < lengthNumber; j++){
			if(number[i] == number[j]){
				count++;
			}
		}
		if(count>max){
			max=count;
			maxfull = number[i];
		}
	}
	printf("phan tu %d xuat hien %d nhieu nhat trong mang ", maxfull, max);
	return 0;
}
