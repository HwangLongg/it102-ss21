#include<stdio.h>
int main(){
	FILE *fptr;
	int n;
	char text[100];
	fptr=fopen("bt05.txt","w");
	printf("Nhap so dong can nhap: ");
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		printf("Nhap noi dung dong:%d",i+1);
		fgets(text,100,stdin);
		fputs(text,fptr);
	}
	fclose(fptr);
	return 0;
}
