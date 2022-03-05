#include<stdio.h>
#include<math.h>

// Exercise 3 - Practice 1 Pish gest
int main(){

    double carprice; // car price
    double pishgest; // mgdar pol avliye
    double carmozd; // karmozd mahyane
    int agsat; // agsat 36/48/60

    printf("Enter the car price : ");
    scanf("%lf",&carprice);

    printf("Enter the pishgest : ");
    scanf("%lf",&pishgest);

    printf("Enter the carmozd (mahyane) : ");
    scanf("%lf",&carmozd);

    printf("Enter the agsat (36/48/60) : ");
    scanf("%d",&agsat);
    while (agsat != 36 && agsat != 48 && agsat != 60)
    {
    printf("Enter the agsat (36/48/60)(bayd yki az in 3 ta bashe) : ");
    scanf("%d",&agsat);
    }

    double payment = carprice + carmozd * agsat - pishgest;
    printf("geymat machin ba agsat : %lf\n",payment);
    printf("agsat mahyane : %lf" , payment / agsat);

    return 0;
}
