#pragma once

#include <vector>
#include "./Graphics.h"
#include "./Physics/Body.h"

class Application {
    private:
        bool running = false;
        std::vector<Body*> bodies; 
        Vec2 pushForce =  Vec2(0, 0);
        Vec2 mouseCursor = Vec2(0, 0);
        bool leftMouseButtonDown = false;
        Vec2 anchor = Vec2(0, 0);
        float springRestLength = 15;
        const int NUM_OF_BODIES = 15; 

        SDL_Rect liquid;

    public:
        Application() = default;
        ~Application() = default;
        bool IsRunning();
        void Setup();
        void Input();
        void Update();
        void Render();
        void Destroy();
};

