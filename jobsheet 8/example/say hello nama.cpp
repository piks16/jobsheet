#include<stdio.h>

void say_hello(char name[]){
	printf("hello %s\n", name);
}
int main(){
	say_hello("firman");
	say_hello("dolly");
	say_hello("hansen");
	return 0;
}
