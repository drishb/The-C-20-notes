#include <iostream>


int main(){
   
   int number1 = 15; // Decimal
   int number2 = 017; // Octal
   int number3 = 0x0F; // Hexadecimal
   int number4 = 0b00001111; // Binary
   // for octal add 0, hex add ox, bin add 0b before th number

   std::cout << "number1 : " << number1 << std::endl;
   std::cout << "number2 : " << number2 << std::endl;
   std::cout << "number3 : " << number3 << std::endl;
   std::cout << "number4 : " << number4 << std::endl;
   //the out put for all wil be 15 as these are different representations of the same number that is 15.
   
    return 0;
}
