#include<stdio.h>
#include<string.h>

FILE *fp, *fs, *fo, *f1;

void header_File(char *);
void comment_Removal(char *);
void macro_Replacement(char *);

int main(int argc,char **argv)
{
    if(argc!=2)
    {
        printf("Usage: ./a.out filename\n");
        return 1;
    }
    char ch;
    header_File(argv[1]);
    comment_Removal(argv[1]);
    macro_Replacement(argv[1]);
    return 0;
}
