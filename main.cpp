#include <iostream>
int main() {
    char op; 
    double number1;
    double number2;
    double result;
    
    std::cout<<"***Calculator***"<<std::endl;
    std::cout<<"ENTER operator(+ ,- ,* ,/ ) = ";
    std::cin>>op;
    std::cout<<"ENTER number1 = ";
    std::cin>>number1;
    std::cout<<"ENTER number2 = ";
    std::cin>>number2; 
  
    switch (op){
      
     case'+':
        result= number1 + number2;
        std::cout<<"RESULT: "<<result<< std::endl;
        break;
        
     case'-':
        result= number1 - number2 ;
        std::cout<<"RESULT: "<<result<<std::endl;
        break;
        
     case '*':
        result= number1 * number2;
        std::cout<<"RESULT: " <<result<<std::endl;
        break;
        
      case '/':
        if(number2==0)
        std::cout<<"Error denominator can't be zero"<<std::endl;
        
        else{result= number1 / number2;
        std::cout<<"RESULT: " <<result<<std::endl;
        }
        break; 
        
      default:
        std::cout<<"That is not a valid operator ";
        
        return 0;
    
    }
    }
