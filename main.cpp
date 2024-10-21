#include <iostream>
#include <SDL.h>

using namespace std;

void init() {

}
void update() {

}

int main(int argc, char** args) {
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* window = SDL_CreateWindow("Tetris", 100, 100, 800, 600, SDL_WINDOW_SHOWN);
	SDL_Surface* screen = SDL_GetWindowSurface(window);
	SDL_FillRect(screen, nullptr, SDL_MapRGB(screen->format, 255, 255, 255));
	SDL_UpdateWindowSurface(window);
	SDL_Delay(5000);
	while (true) {
		break;
	}
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
