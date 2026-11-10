#include<stdio.h>
#include<string.h>
extern FILE *fp,*fs,*fo,*f1;

void header_File(char *s)
{
    char ch,b[100];
    int flag=0,i=0,fflag=0;

    fp=fopen(s,"r+");

    if(fp==0)
    {
        printf("File not present\n");
        return;
    }

    while((ch=fgetc(fp))!=-1)
    {
        if(ch=='<')
        {
            flag=1;
            continue;
        }
        else if(ch=='>')
        {
            char path[30]="/usr/include/";

            flag=0;
            b[i]='\0';
            i=0;

            strcat(path,b);

            fs=fopen(path,"r");

            if(fs==0)
            {
                printf("file not present\n");
            }
            else
            {
                if(fflag==0)
                {
                    fo=fopen("datafile.i","w");
                    fflag=1;
                }
                else if(fflag==1)
                    fo=fopen("datafile.i","a");

                while((ch=fgetc(fs))!=-1)
                    fputc(ch,fo);

                fclose(fo);
            }
        }

        if(flag==1)
        {
            b[i]=ch;
            i++;
        }
    }

    fclose(fs);
    fclose(fp);
}
