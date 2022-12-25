#include "input.h"
#include "AccelAdapter.h"
#include <iostream>
#include <thread>
using namespace std;


void Game(Input *pInput){
    int count{5};

    while(count!=0){
        cout << "===========================\n";
        if(pInput->Up()){
            cout <<"Pitch up\n";
        }
        else if (pInput->Down()){
            cout <<"Pitch down\n";
        }
        else{
            cout << "Plane is level\n" ;
        }
        if(pInput->Left()) {
			std::cout << "Plane is turning left\n" ;
		}else if(pInput->Right()) {
			std::cout << "Plane is turning right\n" ;
		}else {
			std::cout << "Plane is flying straight\n" ;
		}
        std::cout << '\n' ;
        std::this_thread::sleep_for(1s);
        --count;
    }
}

int main(){
    AccelAdapter juego;
    Game(&juego);

    return 0;
}