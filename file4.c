#include<stdio.h>
int main(){

FILE *file;
char ch[100];

file = fopen("test1.txt","w");

if (file == NULL)
{
    printf("file not opened\n");
}

else{
printf("enter character :");
gets(ch);
fputs(ch,file);


fclose(file);
}


file = fopen("test1.txt","r");

if (file == NULL)
{
    printf("file not opened\n");
}
else{
    printf("file is opened\n");
    while (!feof(file))
    {
        fgets(ch,100,file);
        printf("%s\n",ch);
    }
    


fclose(file);
}




getch();
}