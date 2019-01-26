#include <iostream>
#include <cmath>
using namespace std;


int main(){
  float number1;
  float number2;
  int choice;
  int input=0;
  cout << "Choose the operator by entering the number respective to operators \n 1. Addition\n 2. Subtraction\n 3. Multiplying\n 4. Division\n 5. Power\n 6. Square Root\n 7. ABS\n 8. Floor\n 9. Ceiling\n 10. Factorial"<<endl;
  do{
    cout << "Enter the number for operator now: ";
    cin >> choice;
    if ( choice<6 and choice>0){
      cout<<"Enter first number: ";
      cin>> number1;
      cout<< "Enter second number: ";
      cin>> number2;// this is condition; if user chooses operators from 1-5, will have to enter two numbers
    
    
      if ( choice == 1 ){
      
        cout << number1+number2 << endl;// This add two number
      }
      else if ( choice==2 ){
      
        cout << number1-number2 << endl; //The first number is subtracted from second number
      }
      else if ( choice==3 ){
      
        cout << number1*number2 << endl;// multiply two numbers 
      }
      else if ( choice==4 ){
      
        cout << number1/number2 << endl; // first number divide by second number
      }
      else if ( choice==5 ){
      
      cout << "This option give first integer power of second integer: " << 
      pow(number1,number2) << endl; //This option give first integer power of second integer
      }
    }
    else if ( choice>5|| choice<11){
      cout<< "Enter number: ";
      cin>> number1; // this is condiition; if user chooses operators from number 6-10 will only have enter one number
     
      if ( choice==6 ){
        cout<<"square root of "<< number1<< " is: "<< sqrt(number1)<<endl;// giving square root funtion of number entered
      }
      else if ( choice==7 ){
        cout<< "absolute value of "<< number1 <<" is: "<< 
        abs(number1) <<endl; // giving absolute value of number entered
      }
      else if ( choice==8 ){
        
        cout<< floor(number1)<<endl;// giving floor funtion of number entered
    }
      else if ( choice==9 ){
        
        cout<< ceil(number1) << endl;// giving ceiling funtion of number entered
    }
      else if ( choice ==10 ){
        float y=1;  // set an initial value
        if (number1>=0);  // secondly, set condotion so factorial only work on non-negative numbers
          for ( int i=0; i<number1; i++){ //using for loop, 'i' start with 0 and it adds 1 each cycle.
            y*=(number1-i); //number is subtract with i and leftover is multiply with y each cycle
          }
          cout <<y<<endl;// return the value of final cycle

    }
    }
  }while (input==0);        // This code line keep the calculate running
  return 0;
}
