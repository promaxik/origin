 #include <iostream>
#include <string>

enum class Month{YANUARY=1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

int main(){
    do{
        int month{};
        std::cout<<"Введите номер месяца: ";
        std::cin>>month;
        std::cout<<std::endl;
        if (month==0){
            std::cout<<"До свидания"<<std::endl;
            break;
        }
        switch (static_cast<Month>(month)){
            case Month::YANUARY:
                std::cout<<"Январь"<<std::endl;
                break;
            case Month::FEBRUARY:
                std::cout<<"Февраль"<<std::endl;
                break;
            case Month::MARCH:
                std::cout<<"Март"<<std::endl;
                break;
            case Month::APRIL:
                std::cout<<"Апрель"<<std::endl;
                break;
            case Month::MAY:
                std::cout<<"Май"<<std::endl;
                break;
            case Month::JUNE:
                std::cout<<"Июнь"<<std::endl;
                break;
            case Month::JULY:
                std::cout<<"Июль"<<std::endl;
                break;
            case Month::AUGUST:
                std::cout<<"Август"<<std::endl;
                break;
            case Month::SEPTEMBER:
                std::cout<<"Сентябрь"<<std::endl;
                break;
            case Month::OCTOBER:
                std::cout<<"Октябрь"<<std::endl;
                break;
            case Month::NOVEMBER:
                std::cout<<"Ноябрь"<<std::endl;
                break;
            case Month::DECEMBER:
                std::cout<<"Декабрь"<<std::endl;
                break;
            default:
                std::cout<<"Неправильный номер!"<<std::endl;
                break;
            }
        }while(true);
    return 0;
}
