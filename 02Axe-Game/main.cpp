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
    int width{800};
    int height{450};
    InitWindow(width, height, "ratuls home"); 

    //circle coordinates
    int circle_x{200};
    int circle_y{200};

    int circle_radius{25};

    //circle edges
    int l_circle_x{circle_x - circle_radius};
    int r_circle_x{circle_x + circle_radius};
    int u_circle_y{circle_y - circle_radius};
    int b_circle_y{circle_y + circle_radius};


    //rectangle coordinates
    int axe_x{400};
    int axe_y{0};

    int axe_length{50};

    //axe edges
    int l_axe_x{axe_x};
    int r_axe_x{axe_x + axe_length};
    int u_axe_y{axe_y};
    int b_axe_y{axe_y + axe_length};



    int direction{10};

    //forcing down to window frame 
    SetTargetFPS(60);

    while (WindowShouldClose() != true) // this WindowShouldClose return a bool value
    {
        BeginDrawing();
        ClearBackground(WHITE);

        //game logic starts


        DrawCircle(circle_x, circle_y, circle_radius, BLUE);
        DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);

        //move the axe
        axe_y += direction;
        if(axe_y > height || axe_y < 0) 
        {
            direction = -direction;
        }

        if (IsKeyDown(KEY_D) && circle_x < width)
        {
            circle_x +=  10;
        }
        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }

        

        //game logic ends
        EndDrawing();
    }
    

//     int some_variable = 0;

    return 0;
}
