#include <iostream>
#include <stdlib.h>
#include <time.h>



int main(){
    srand(time(NULL));
    int hidden = 10+rand()%91;
    int try_to;
    do {
        std::cout<<"Find the hidden number: ";
        std::cin>>try_to;

    }while (try_to != hidden);
    std::cout<<"You found the hidden number!\n";
    return 0;
}