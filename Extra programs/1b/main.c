#include<stdio.h>
int main()
{
char str[50],ch;
FILE *fp;
fp=fopen("file1.txt","w");
if(fp==EOF)
printf("Error in opening file\n");
printf("Enter the data to be added to file:\n");
gets(str);

fprintf(fp,"%s",str);
printf("Created new file and added data\n");
fclose(fp);
fp=fopen("file1.txt","r");
if(fp==EOF)
printf("Error in opening file\n");

while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
printf("\n");
return 0;
}