#include <stdio.h>

int main(){
	int a,b,c,e;
	scanf("\n enter the value of a %d",a);
	scanf("\n enter the value of b %d",b);
	scanf("\n enter the value of c %d",c);
	scanf("\n enter the value of e %d",e);
	if(a>b and a>c and a>e ){
		printf("a is the largest of all");
	}else if(b>a and b>c and b>e){
		printf("b is the largestof all");
	}else if(c>a and c>b and c>e){
		printf("c is the largest of all");
	}else{
		printf("e is the largestof all");
	}
	return 0;
}
