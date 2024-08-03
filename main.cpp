#include "include/raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "include/raygui.h"

int main()
{
    int window_width{800};
    int window_height{400};
    InitWindow(window_width, window_height, "kallesi - raygui template");
    SetTargetFPS(60);

    bool showMessageBox = false;

    while (!WindowShouldClose())
    {

        BeginDrawing();

        ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));

        if (GuiButton((Rectangle){50, 50, 240, 60}, "#191#Show Message"))
        {
            showMessageBox = true;
        }

        if (showMessageBox)
        {
            int result = GuiMessageBox((Rectangle){170, 140, 500, 200}, "#191#Message Box", "Message", "Yes");

            if (result >= 0)
                showMessageBox = false;
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}