#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)

{
   FILE *fs,*ft;
   int ch;
   if (argc != 3) {

     printf("fichier manquant\n");
     return 1;
     }
     fs=fopen(argv[1],"r");
     if(fs==NULL)
     {
       printf("Can't find the source file");
       return 1;
     }
        ft=fopen(argv[2],"w");
        if(ft==NULL)
        {
              printf("Can't find the source file");
              fclose(fs);
              return 1;
         }

         while(1)
         {
            ch=fgetc(fs);
            if(feof(fs)) break;
            fputc(ch,ft);
          }
            ch=fgetc(fs);
            while(ch!=EOF)
            {
                 ch=fgetc(fs);
                 fputc(ch,ft);
            }
                 printf("\n Le contenue a ete copie avec succes");
            fclose(fs);
            fclose(ft);
            return 0;
}

