#include<stdio.h>

int main(){
	struct Student{
    	char fullName[50];
    	int age;
    	char phoneNumber[50]; 
    
    };
	struct Student user={"Nguyen Tien Dung", 18, "0975117856"}; 
	printf("Ten sinh vien la: %s\n", user.fullName);
	printf("Tuoi: %d\n", user.age);
	printf("So dien thoai: %s\n",user.phoneNumber);
	
	return 0; 
} 
