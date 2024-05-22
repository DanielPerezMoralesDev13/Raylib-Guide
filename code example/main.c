#include <raylib.h>



int main(void){
    const int ancho_ventana = 800;
    const int alto_ventana = 450;

    InitWindow(ancho_ventana, alto_ventana, "animacion");

    Vector2 posicion_bola = { (float) ancho_ventana / 2, (float) alto_ventana / 2 };

    SetTargetFPS(120);               
 
    while (!WindowShouldClose())   
    {
        
        if (IsKeyDown(KEY_RIGHT)) posicion_bola.x += 2.0f;
        if (IsKeyDown(KEY_LEFT)) posicion_bola.x -= 2.0f;
        if (IsKeyDown(KEY_UP)) posicion_bola.y -= 2.0f;
        if (IsKeyDown(KEY_DOWN)) posicion_bola.y += 2.0f;
       
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("mueve el balon con las direccionales", 10, 10, 20, DARKGRAY);

            DrawCircleV(posicion_bola, 50, GREEN);

        EndDrawing();

    }


    CloseWindow();        


    return 0;
}

// gcc -Wall -Wextra -pedantic -std=c11 -Werror -Wunused -Wuninitialized -Wshadow -Wformat -Wconversion -Wmissing-prototypes -Wmissing-declarations -Wcast-qual -Wpointer-arith -Wlogical-op -o main main.c /usr/local/lib/libraylib.a -lm

// gcc -Wall -Wextra -pedantic -std=c11 -Werror -Wunused -Wuninitialized -Wshadow -Wformat -Wconversion -Wmissing-prototypes -Wmissing-declarations -Wcast-qual -Wpointer-arith -Wlogical-op -o main main.c /usr/local/lib/libraylib.a -lm -lpthread -ldl -lrt -lX11