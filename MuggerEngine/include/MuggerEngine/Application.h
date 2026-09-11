#pragma once

#include <Window.h>

namespace MuggerEngine
{
    class Application
    {
    public:
        Application();

        void Run();

    private:
        Window m_Window;
    };
}