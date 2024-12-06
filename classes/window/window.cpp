#include "window.h"
#include <raylib.h>

void window ::Init() {
  InitWindow(500, 500, "ElderLapis");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    ClearBackground(RAYWHITE);
  }

  CloseWindow();
}
