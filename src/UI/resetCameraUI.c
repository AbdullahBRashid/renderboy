#include "stdio.h"
#include "raylib.h"

#include "resetCameraUI.h"

#include "raylib.h"

// Returns true if the button was clicked
bool DrawResetCameraButton(int x, int y) {
    Rectangle btnBounds = { x, y, 150, 40 }; // x, y, width, height
    
    Vector2 mousePos = GetMousePosition();
    bool isHovering = CheckCollisionPointRec(mousePos, btnBounds);
    bool isClicked = false;

    if (isHovering) {
        DrawRectangleRec(btnBounds, LIGHTGRAY); // Highlight when hovering
        
        if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) {
            isClicked = true;
        }
    } else {
        DrawRectangleRec(btnBounds, GRAY); // Normal state
    }
    
    DrawRectangleLinesEx(btnBounds, 2, DARKGRAY);

    const char* text = "Reset Camera";
    int fontSize = 20;
    int textWidth = MeasureText(text, fontSize);
    
    int textX = x + (btnBounds.width - textWidth) / 2;
    int textY = y + (btnBounds.height - fontSize) / 2;
    
    DrawText(text, textX, textY, fontSize, BLACK);

    return isClicked;
}