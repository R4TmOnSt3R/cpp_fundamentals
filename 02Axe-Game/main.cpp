#include "raylib.h"
int main()
{

    // //Comparison Operators
    // bool equal{ 4 == 9 }; //false
 
    // bool notEqual{ 4 != 9 }; //true
    
    // bool less{ 4 < 9 }; //true
    
    // bool greater{ 4 > 9 }; //false
    
    // bool lessEqual{ 4 <= 9 }; //true
    
    // bool greaterEqual{ 4 >= 9 }; //false



    // float root_beer = 1.99;
    // double cheese_burger{5.99};   
    // bool shouldHaveLunch{};

    int width;
    width = 350;
    InitWindow(width, 200, "ratuls home"); 

    while (WindowShouldClose() != true) // this WindowShouldClose return a bool value
    {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
    

//     int some_variable = 0;

    return 0;
}