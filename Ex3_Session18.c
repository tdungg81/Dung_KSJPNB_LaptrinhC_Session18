#include<stdio.h>
#include<string.h> 
struct Student{
    	char fullName[50];
    	int age;
    	char phoneNumber[50]; 
    
    };
int main(){
	struct Student s[5];
	
	for(int i = 0; i < 5; i++){
		printf("Nhap thong tin sinh vien thu %d\n",i + 1);
		printf("Moi ban nhap vao ten sinh vien: ");
    	fgets(s[i].fullName,sizeof(s[i].fullName), stdin);
    	printf("Moi ban nhap vao tuoi sinh vien: ");
    	scanf("%d", &s[i].age);
    	fflush(stdin); 
    	printf("Moi ban nhap vao so dien thoai sinh vien: ");
    	fgets(s[i].phoneNumber, sizeof(s[i].phoneNumber),stdin); 
	} 
	for(int i =0; i < 5; i++){
		printf("Sinh vien thu %d la:\n", i +1);
	 
		printf("Ten sinh vien la: %s", s[i].fullName);
	    printf("Tuoi: %d\n", s[i].age);
	    printf("So dien thoai: %s\n", s[i].phoneNumber);
	} 
    
    return 0; 
}
