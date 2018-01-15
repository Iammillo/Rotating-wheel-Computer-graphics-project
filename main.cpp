//DDA Line Drawing algorithm

#include <SDL.h>
#include<iostream>
#include<cmath>
using namespace std;

SDL_Renderer *renderer;
SDL_Window *window;

void SDLinit()
{

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(600,600, 0, &window, &renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
}
void setPixel(int x, int y)
{
    SDL_RenderDrawPoint(renderer, x, 600-y);
}

void mainfunction()
{

}
int main(int argc, char* args[]) {

    mainfunction();
    SDL_RenderPresent(renderer);
    SDL_Event event;
    while (1) {
        if (SDL_PollEvent(&event) && event.type == SDL_QUIT)
            break;
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
