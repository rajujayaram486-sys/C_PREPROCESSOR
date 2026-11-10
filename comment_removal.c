#include<stdio.h>
#include<string.h>
extern FILE *fp, *fs, *fo, *f1;
void comment_Removal(char *s)
{
    f1=fopen("temp.i","w");
    fp=fopen(s,"r+");
    char ch,ch1,b[100];
    if(fp==0)
    {
        printf("File not present\n");
        return;
    }
    while((ch=fgetc(fp))!=-1)
    {
        if(ch=='/')
        {
            ch=fgetc(fp);
            if(ch=='/')
            { 
                while((ch=fgetc(fp))!='\n')
                    continue;
            }
            else if(ch=='*')
            {
                ch=fgetc(fp);
                while((ch=fgetc(fp))!='*')
                    continue;
                ch=fgetc(fp);
                if((ch=fgetc(fp))=='/')
                {
                    while((ch=fgetc(fp))!='\n')
                        continue;
                }
            }
        }
        fprintf(f1,"%c",ch);
    }
    fclose(fp);
    fclose(f1);
}
