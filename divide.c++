#include <iostream>
using namespace std;

int main()
{
   int firstNumber, secondNumber, div;

   cout << "Enter two numbers to div\n";
    // taking input
   cin >> firstNumber >> secondNumber;

    // subtracting the two numbers
   div = firstNumber / secondNumber;

   // displaying the output
   cout <<"The div of two numbers is: " << div << endl;
   return 0;
}