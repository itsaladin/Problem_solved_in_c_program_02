#include<stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";
    fp = fopen(filename,"w");

    fprintf(fp, "this is a file created by my program! ");
    fprintf(fp, "i am so happy.\n");
    fclose(fp);

    fp = fopen(filename,"w");
    fprintf(fp,"second line.\n");
    fclose(fp);

    return 0;
}
