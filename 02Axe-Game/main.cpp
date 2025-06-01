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

    //window dimensions
    int width{850};
    int height{500};
    InitWindow(width, height, "ratuls home"); 

    //circle coordinates
    int circle_x{220};
    int circle_y{220};

    //rectangle coordinates
    int axe_X{405};
    int axe_Y{0};

    int direction{10};

    //forcing down to window frame 
    SetTargetFPS(60);

    while (WindowShouldClose() != true) // this WindowShouldClose return a bool value
    {
        BeginDrawing();
        ClearBackground(WHITE);

        //game logic starts


        DrawCircle(circle_x, circle_y, 25, BLUE);
        DrawRectangle(axe_X, axe_Y, 50, 50, RED);

        //move the axe
        axe_Y += direction;
        if(axe_Y > 450 || axe_Y < 0)
        {
            direction = -direction;
        }

        if (IsKeyDown(KEY_D) && circle_x < 835)
        {
            circle_x +=  10;
        }
        if (IsKeyDown(KEY_A) && circle_x > 15)
        {
            circle_x -= 10;
        }

        

        //game logic ends
        EndDrawing();
    }
    

//     int some_variable = 0;

    return 0;
}