#include <iostream>

#include <SDL.h>
#include <SDL_main.h>

int
main(int argc, char **argv)
{
    std::cout << "Hello, World!" << std::endl;

    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", "Hello World", nullptr);

    return 0;
}
