#include<stdio.h>
#include<string.h>
int main(){
	// Khai bao chuoi va bien
	char string[100];
	int count=0;
	int chr=0;
	int numbers=0;
	int kyTuDacBiet=0;
	char temp[]=" ";
	// Nhap gia tri tu nguoi dung
	printf("moi nhap chuoi: ");
	fgets(string,sizeof(string)/sizeof(char),stdin);
	int size=strlen(string);
	// Xu ly thong tin
	for(int i=0;i<size;i++){
		if(string[i]>= '0' && string[i]<='9'&& string[i]!=temp[0]){
			numbers++;
		} else if(string[i]>= 'a' && string[i]<='z'&& string[i]!=temp[0] || string[i]>= 'A' && string[i]<='Z'&& string[i]!=temp[0]){
        	chr++;
		} else {
			kyTuDacBiet++;
		}
	}
	kyTuDacBiet--;
	// In ra man hinh
	printf("co %d ki tu la chu cai trong chuoi.\n", chr);
	printf("co %d ki tu la so trong chuoi.\n", numbers);
	printf("co %d ki tu la ki tu dac biet trong chuoi.\n", kyTuDacBiet);
	return 0;
}

