#include <iostream>

int main(){
    double celcius,farenheit;
    char choice;


    std::cout<<"Convert from (C) to Farenhiet (F) or vice versa";
    std::cout<<"Type C or F for choice of convertion "<<std::endl;
    std::cin>>choice;

    if(choice == 'C'|| choice == 'c'){
    std::cout<<"Enter temprature in Celsuis: ";
    std::cin>>celcius;
    farenheit=(celcius*9/5)+32;
    std::cout<<"Temprature in Farenhiet is "<<farenheit<<std::endl;
    }else if(choice=='F'|| choice == 'f'){
        std::cout<<"Enter Temprature in Rarengiet :";
        std::cin>>farenheit;
        celcius=(farenheit-32)*5/9;
        std::cout<<"Farenhiet in celcuis is "<<celcius<<std::endl;
    }else{
        std::cout<<"Invalid! Choice "<<std::endl;
    }
return 0;
}