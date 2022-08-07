#include <iostream>
//bool is a data type that store only two values 0 or 1/true ot falsa
//8 bits in memory but can be packed more if memory constrained
//cout<<std::boolalpha after which printing bool var will give true or false. and not 0 and 1

int main()
{

    bool red_light {false};
    bool green_light{true};
    
    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }

    //sizeof()
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;


    //Printing out a bool
    //1 -->> true
    //0 -->> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
   
    return 0;
}
