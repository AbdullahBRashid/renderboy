#include "addUI.h"

#include "resetCameraUI.h"
#include "tracking.h"

void addUI(Vec3 cameraPosition, Rotation cameraRotation) {
    createTrackingUI(cameraPosition, cameraRotation);

    if (DrawResetCameraButton(100, 80)) {
        resetPosition();
        resetRotation();
    }
    
}