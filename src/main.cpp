#include "dificult.h"


int main(){
    int option;
    std::cout<<"1.Difcult without help and the hidden number is from 1 to 100 \n"<<"2.Easy with help and the hidden number is from 1 to 45\n"<<"3.Normal with help and the hiden number is from 1 to 100\n"<<"\n\n\nChose 1 of 3: ";
    scanf("%d",&option);


    switch (option)
    {
    case 1:
        hard();
        break;
    
    case 2:
        easy();
        break;

    case 3:
        normal();
        break;
    
    default:
        std::cout<<"The "<<option<<" not found\n\n"<<"Chose again";
        scanf("%d",&option);
        break;
    }
    return 0;
}