#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
int main(){
	// Khai bao chuoi 
	char str[100];
	// Nhap gia tri tu nguoi dung
	printf("Moi ban nhap chuoi: ");
	fgets(str,sizeof(str),stdin);
	int size=strlen(str);
	// Xu ly thong tin
	for(int i=0;i<size;i++) {
		if (str[i-1]==' ' && str[i]!=' ') {
			str[i]=toupper(str[i]);
		}
	}
		if(str[0]!=' '){
			str[0]=toupper(str[0]);
		}
	// In ra man hinh
	printf("%s", str);
	return 0;
}

