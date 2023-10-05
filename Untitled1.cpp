#include<stdio.h>
main(){
	char color;
	printf("nhap vao gia tri cua bien color:");
	scanf("%c",&color);
	if(color == 'r'|| color == 'R'){
		printf("red");
	} else if (color == 'g' || color == 'G'){
		printf("green");
	} else if (color == 'b' || color == 'B'){
		printf("blue");
	} else {
		printf("black");
	}
	return 0;
}
