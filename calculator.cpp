#include <iostream>

int main(){
    char operation;
    double num1,num2;

    std::cout<<"Welcome to Calculator Home"<<std::endl;
    std::cout<<"Input first value :"<<"\n";
    std::cin>>num1;

    std::cout<<"Enter Operator (+,-,/,*) :";
    std::cin>>operation;

    std::cout<<"Input second value :"<<"\n";
    std::cin>>num2;

    switch(operation){
        case '+':
        std::cout<<num1<<"+"<<num2<<"="<<num1+num2<<std::endl;
        break;
        case '-':
        std::cout<<num1<<"-"<<num2<<"="<<num1-num2<<std::endl;
        break;
        case '*':
        std::cout<<num1<<'*'<<num2<<"="<<num1*num2<<std::endl;
        break;
        case '/':
        if(num2!=0){
            std::cout<<num1<<"/"<<num2<<"="<<num1/num2<<std::endl;

        }else{
            std::cout<<"Error! Dicision by zero";
        }
        break;
        default:
        std::cout<<"Error invalid input"<<std::endl;
        break;
    }
    
return 0;
}