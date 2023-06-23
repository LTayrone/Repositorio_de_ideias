#include<iostream>
#include <iomanip> 

using namespace std;
#define pi 3.14159

int main()
{
   double area, raio, A;
   cin >> raio;
  
   
   area = (raio * raio) * pi;
   
   std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;
   
}