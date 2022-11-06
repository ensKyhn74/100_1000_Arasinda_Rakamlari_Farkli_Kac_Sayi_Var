#include <stdio.h>
// 100 ile 1000 arasinda rakamlari birbirinden farklı kaç tane sayı var?

int main() 

{
 
 int a,b,c; // a: yüzler , b: onlar , c: birler
  
  int sayac = 0;
  
  int i;

  for(i = 100 ; i < 1000 ; i++)
  {                 // 102 için       // 987 için
    a = i / 100;  // a = 1            // a = 9
    b = (i / 10) % 10; // b = 0       // b = 8
    c = i % 10; // c = 2              // c = 7

    if(a!=b && a!=c && b!=c)
    {
     sayac++;
    }
  }
    
  printf("100 ile 1000 arasinda rakamlari birbirinden farkli %d adet sayi var.",sayac); // 648
   
  return 0;

}