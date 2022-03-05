#include<stdio.h>
#include<math.h>


// Exercise4-Practice1//Store
int main(){
    double Purchase;
    char c[20];
      printf("Enter your Purchase amount : ");
      scanf("%lf",&Purchase);
      printf("Are you Student ? (y/n) : ");
      scanf("%s",&c);
      if(c[0] == 'y'){
       double res = Purchase / 100 * 20; // 20% Discount
       Purchase = Purchase - res;
      printf("Purchase : %lf" ,Purchase + (Purchase / 100 * 5)); // purchase + tax
      }
      else if (c[0] == 'n')
      {
      printf("Purchase : %lf" ,Purchase + (Purchase / 100 * 5));//purchase + tax
      }
      else{
           printf("Purchase : %lf" ,Purchase + (Purchase / 100 * 5)); // purchase + tax
      }

}