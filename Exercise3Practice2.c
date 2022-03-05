#include<stdio.h>
#include<math.h>
#define initialHouseCost 67000
#define AnnualFuelCost 2300
#define TaxRate 0.025
double tax(double,double);

// Exercise3-Practice2//house price after 5 years
int main(){
      double housePrice = initialHouseCost + AnnualFuelCost * 5;
      housePrice = tax(housePrice,TaxRate);
      printf("House price after 5 year : %lf",housePrice);
      return 0;
}

double tax(double houseprice,double Taxrate){
  return houseprice * Taxrate * 5;
}

