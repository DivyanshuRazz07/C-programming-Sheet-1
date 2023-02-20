#include<stdio.h>
int main()
{
    float length,centimeter,kilometer;
    scanf("%f",&length);
    centimeter=length/100;
    kilometer=length/100000;
    printf("%f \n",centimeter);
    printf("%f",kilometer);
    return 0;
}
