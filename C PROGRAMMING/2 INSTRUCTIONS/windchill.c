#include<stdio.h>
#include<math.h>

int main()
{
float t,v,wcf;

printf("Enter the value of temperature and wind velocity\n");
scanf("%f %f",&t,&v);

wcf=35.74+0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
printf("The value of wind chill factor(wcf) is %f",wcf);


return 0;
}