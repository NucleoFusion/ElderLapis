#include "raylib.h"
#include <iostream>

int main() {
  std ::cout << "Hello World" << std ::endl;

  InitWindow(400, 400, "LapisElder");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
  }
  CloseWindow();
  return 0;
}
