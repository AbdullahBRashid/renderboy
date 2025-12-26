#include "raylib.h"
#include <stdlib.h>
#include <stdio.h>

#include "tracking.h"

float radToDeg(float rad) {
    return rad * (180 / PI);
}

void createTrackingUI(const Vec3 cameraPosition, const Rotation cameraRotation) {

    char str[100];
    DrawFPS(100, 100);


    Color positionColor = RED;
    float fontSize = 20;
    int offsetX = 30, offsetY = 20;
    int floatPrecision = 2;
    // X postition
    snprintf(str, sizeof(str), "X: %.*f", floatPrecision, cameraPosition.x);
    DrawText(str, offsetX + 0, offsetY, fontSize, positionColor);

    // Y postition
    snprintf(str, sizeof(str), "Y: %.*f", floatPrecision, cameraPosition.y);
    DrawText(str, offsetX + 120, offsetY, fontSize, positionColor);

    // Z postition
    snprintf(str, sizeof(str), "Z: %.*f", floatPrecision, cameraPosition.z);
    DrawText(str, offsetX + 240, offsetY, fontSize, positionColor);

    // Yaw Angle
    snprintf(str, sizeof(str), "Yaw: %.*f", floatPrecision, radToDeg(cameraRotation.yaw));
    DrawText(str, offsetX + 340, offsetY, fontSize, positionColor);

    // Pitch Angle
    snprintf(str, sizeof(str), "Pitch: %.*f", floatPrecision, radToDeg(cameraRotation.pitch));
    DrawText(str, offsetX + 480, offsetY, fontSize, positionColor);

    // Roll Angle
    snprintf(str, sizeof(str), "Roll: %.*f", floatPrecision, radToDeg(cameraRotation.roll));
    DrawText(str, offsetX + 620, offsetY, fontSize, positionColor);
}