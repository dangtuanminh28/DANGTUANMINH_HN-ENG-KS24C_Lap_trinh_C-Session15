#include<stdio.h>
#include<string.h>
int main(){
	// Khai bao bien va chuoi
	char str[]="Banh trang";
	char result[100];
	char xoa;
	int n;
	// Nhap gia tri tu nguoi dung
	printf("Moi ban nhap 1 ky tu can xoa: ");
	scanf("%c",&xoa);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=xoa){
			result[n++]=str[i];
		}
	}
	result[n]='\0';
	// In ra ket qua
	printf("Chuoi sau khi xoa ky tu %c: %s",xoa ,result);
	return 0;
}
