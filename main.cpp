#include <iostream>

using namespace std;

int main()
{
     setlocale (0, "Russian");
     long n, m, l, k, r, d;
     double q;
     cout << "Введите натуральное n\n";
     cin >> n;
     cout << "Введите натуральное m\n";
     cin >> m;
     if (n > 0 && m > 0)
     { l = n;
       k = m;
       if ( m > n)
       {
           r = n;
           n = m;
           m = r;
       }

       do
       {
               r = n/m;
               q = n-m*r;
               if (q != 0)
               {
                n = m;
                m = q;
               }
               else
               {
                   d = l*k/m;
               }

        }
       while (q != 0);
       cout << "HOK n и m = " << d;

     }
     else
     {
         cout << "Введены неверные числа";
     }

     return 0;
 }
