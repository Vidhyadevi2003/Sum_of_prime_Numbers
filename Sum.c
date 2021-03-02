#include<iostream>
using namespace std;
int main()
{
    int check(int n);
    int number,i;
    cout<<"Enter a Number:";
    cin>>number;
    for(i = 2; i <= number/2; ++i)
    {
      if (check(i)) 
      {
         if (check(number - i)) 
         {
            cout << number << " = " << i << " + " << number-i << endl;
         }
      }
   }
   return 0;
}
int check(int n)
{
    int i;
   int flag = 1;
   for(i = 2; i <= n/2; ++i) 
   {
      if(n% i == 0) 
      {
         flag = 0;
         break;
      }
   }
   return flag;

}
