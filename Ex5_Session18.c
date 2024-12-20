#include<stdio.h>
#include<string.h> 
struct Student{
	    int id;
    	char fullName[50];
    	int age;
    	char phoneNumber[50]; 
    
    };
int main(){
	struct Student s[5];
	int n = 5, id = 1; 
	
	for(int i = 0; i < 5; i++){
		printf("Nhap thong tin sinh vien thu %d\n",i + 1);
		s[i].id = id++; 
		printf("Moi ban nhap vao ten sinh vien: ");
    	fgets(s[i].fullName,sizeof(s[i].fullName), stdin);
    	printf("Moi ban nhap vao tuoi sinh vien: ");
    	scanf("%d", &s[i].age);
    	fflush(stdin); 
    	printf("Moi ban nhap vao so dien thoai sinh vien: ");
    	fgets(s[i].phoneNumber, sizeof(s[i].phoneNumber),stdin); 
    
	}
	int idSua;
    printf("\nNhap ID sinh vien can sua: ");
    scanf("%d", &idSua);
    fflush(stdin); 

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].id == idSua) {
            found = 1;
            printf("Hay nhap thong tin moi cho sinh vien:\n");
            printf("Ten moi: ");
            fgets(s[i].fullName,sizeof(s[i].fullName), stdin);
            printf("Tuoi moi: ");
            scanf("%d", &s[i].age);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ID %d\n", idSua);
    }
 
	printf("\nThong tin sinh vien\n"); 
	for(int i =0; i < 5; i++){
		printf("Sinh vien thu %d la:\n", i +1); 
		printf("ID: %d\n", s[i].id); 
		printf("Ten sinh vien la: %s", s[i].fullName);
	    printf("Tuoi: %d\n", s[i].age);
	    printf("So dien thoai: %s\n", s[i].phoneNumber);
	} 
    
    return 0; 
}
