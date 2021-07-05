#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
  int wybor;
  double a, b, c, x, delta;
  bool kontynuuj = true;
  while (kontynuuj)
  {
    puts("[1] Instrukcja.");
    puts("[2] Rozwiąż równanie 1. lub 2. stopnia.");
    puts("[3] Rozwiąż równanie 3. stopnia.");
    puts("[4] Rozwiąż równanie 4. stopnia.");
    puts("[5] Rozwiąż równanie 5. stopnia.");
    puts("[0] Wyjście.");
    printf("Opcja: ");
    scanf ("%d", &wybor);
    switch(wybor)
    {
      case 1:
      case 3:
      case 4:
      case 5:
        puts("Opcja niedostępna w wersji demonstracyjnej");
        printf("\n");
        break;
      case 2:
        printf("\n");
        puts("Podaj współczynniki równania kwadratowego postaci a*x*x + b*x + c = 0");
        printf("a = ");
        scanf("%lf", &a);
        printf("b = ");
        scanf("%lf", &b);
        printf("c = ");
        scanf("%lf", &c); 
        if(a==0)
        {
        x = -c / b;
        printf("x = %.3lf", x);
        printf("\n");
        }
        else
        {
          delta = b * b - 4 * a * c;

          if(delta < 0)
          {
          puts("Brak rozwiązań w dziedzinie liczb rzeczywistych");
          printf("\n");
          }
          else if(delta == 0)
          {
            x = -b/(2*a);
            printf("Rozwiązaniem równania jest x = %.3lf", x);
            printf("\n");
          }
          else
          {
            x = (-b + sqrt(delta))/(2*a);
            printf("Rozwiązaniami równania są: x1 = %.3lf, ", x);
            x = (-b - sqrt(delta))/(2*a);
            printf("x2 = %.3lf", x);
            printf("\n");
            printf("\n");
          }
        }
        break;
      case 0:
        kontynuuj = false;
        break;
      default:
        puts("Wybrano niewłaściwą opcję");
        printf("\n");
    }
  }
return 0;
}