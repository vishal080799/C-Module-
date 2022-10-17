// WAP to print the same file on consol.
//

#include<stdio.h>
#include<stdlib.h>

void main ()
{

        FILE*fp1 = fopen("file.txt","r");
	char c;


	if(fp1 == NULL)
	{
	printf("File not found");
	exit(0);

	}
	

	 c = fgetc(fp1);

	 while ((c = fgetc(fp1)) != EOF)
	 {
		 printf("%c",c);
		 
	 }
	 fclose(fp1);
	 /*
	 
	fp1 = fopen("fileout.txt", "r");
        c = fgetc(fp1);
        while((c = fgetc(fp1)) != EOF)
        {
                fputc(c,fp1);

        }
        fclose(fp1);*/

	 
}



