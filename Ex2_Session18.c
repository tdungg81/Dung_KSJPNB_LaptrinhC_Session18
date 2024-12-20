#include<stdio.h>

int main(){
	struct Student{
    	char fullName[50];
    	int age;
    	char phoneNumber[50]; 
    
    };
    struct Student user;
    printf("Moi ban nhap vao thong tin cua sinh vien \n");
	printf("Moi ban nhap vao ten sinh vien: ");
	fgets(user.fullName,sizeof(user.fullName), stdin);
	printf("Moi ban nhap vao tuoi sinh vien: ");
	scanf("%d", &user.age);
	fflush(stdin); 
	printf("Moi ban nhap vao so dien thoai sinh vien: ");
	fgets(user.phoneNumber, sizeof(user.phoneNumber),stdin);
	
	
	return 0; 
}
