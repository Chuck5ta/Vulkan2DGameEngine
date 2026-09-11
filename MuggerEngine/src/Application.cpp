#include <Application.h>

namespace MuggerEngine
{
    Application::Application()
        : m_Window(
            1280,
            720,
            "Mugger"
        )
    {}

    void Application::Run()
    {
        while (!m_Window.ShouldClose())
        {
            m_Window.PollEvents();

            // Update game here eventually.

            // Render frame here eventually.
        }
    }
}