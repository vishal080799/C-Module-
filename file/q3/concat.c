// concat two scorce.txt files in third .txt file 
//

#include<stdio.h>
#include<stdlib.h>

void main (int argc,char *argv[])
{
	FILE*fp1 = fopen(argv[1],"r");
	FILE*fp2 = fopen(argv[2],"r");

	FILE*fp3 = fopen(argv[3],"w");

	char c;

	if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{
		puts("File not found");
	
		exit(0);
	}

	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c,fp3);
	}

	while ((c = fgetc(fp2)) != EOF)
        {
                fputc(c,fp3);
        }
	//printf("CONCATED\n");

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	fp3 = fopen(argv[3], "r");
        c = fgetc(fp3);
        while((c = fgetc(fp3)) != EOF)
        {
                printf("%c", c);
           
	}
	fclose(fp3);

}




