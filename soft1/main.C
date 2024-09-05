#include<stdio.h>
int main(){
float a,b,c;
printf("请输入三角形的三条边：\n");
scanf("%f,%f,%f",&a,&b,&c);
if(a+b>c&&b+c>a&&c+a>b) {
	if(a==b&&b==c){
		printf("该三角形是等边三角形\n");
	}
	else if(a==b||b==c||c==a){
			printf("该三角形是等腰三角形\n");
	}
	else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
		printf("该三角形是直角三角形\n"); 
	}
		else{
			printf("该三角形是普通三角形\n");
		} 
    }
    else{
        printf("非三角形\n");
	}
	return 0; 
}
