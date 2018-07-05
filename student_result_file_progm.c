#include<stdio.h>

int main()
{
    FILE *fp_math, *fp_bangla, *fp_english, *fp_result;
    char *math_file = "math.txt";
    char *bangla_file = "bangla.txt";
    char *english_file = "english.txt";
    char *result_file = "result.txt";

    char math[80],bangla[80],englih[80],result[80];
    int num1, num2, sum;

    fp_math = fopen(math_file,"r");
    fp_bangla = fopen(bangla_file,"r");
    fp_english = fopen(english_file,"r");
    fp_result = fopen(result_file,"w");


    fgets(math, 80, fp_math);
    fgets(bangla, 80, fp_math);
    fgets(englih, 80, fp_math);
    printf("Math: %s Bangla: %s English: %s\n",math,bangla,englih);

    /*sscanf(line, "%d %d", &num1,&num2);

    sum = num1 + num2;
    printf("%d %d %d\n",num1,num2,sum);
    fprintf(fp_out, "%d\n",sum);
    */
    fclose(fp_math);
    fclose(fp_bangla);
    fclose(fp_english);

    return 0;
}
