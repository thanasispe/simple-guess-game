//This file contains all the options
#include <iostream>
#include <stdlib.h>
#include <time.h>

void hard(){
    srand(time(NULL));
    int hidden = 10+rand()%91;
    int try_to;
    do {
        std::cout<<"Find the hidden number: ";
        std::cin>>try_to;

    }while (try_to != hidden);
    std::cout<<"You found the hidden number!\n";
}

void easy(){
    srand(time(NULL));
    int hidden = 1+rand()%45;
    int try_to;
    do{
        std::cout<<"Find the hidden number: ";
        std::cin >> try_to;

        if (try_to > hidden){
            std::cout<<"The hidden is lower than " <<try_to<<" try again: ";
            std::cin >> try_to;
        }
        else if (try_to < hidden){
            std::cout<<"The hidden is bigger than " <<try_to<<" try again: ";
            std::cin >> try_to;
        }
    }while (try_to!= hidden);
}

void normal(){
    srand(time(NULL));
    int hidden = 1+rand()%91;
    int try_to;
    do{
        std::cout<<"Find the hidden number: ";
        std::cin >> try_to;

        if (try_to > hidden){
            std::cout<<"The hidden is lower than " <<try_to<<" try again: ";
            std::cin >> try_to;
        }
        else if (try_to < hidden){
            std::cout<<"The hidden is bigger than " <<try_to<<" try again: ";
            std::cin >> try_to;
        }
    }while (try_to!= hidden);
    std::cout<<"You foud the hidden number!!\n";
}
 