#pragma once

#include <string>

struct GLFWwindow;

namespace MuggerEngine
{
    class Window
    {
    public:
        Window(
            int width,
            int height,
            const std::string& title
        );

        ~Window();

        Window(const Window&) = delete;
        Window& operator=(const Window&) = delete;

        void PollEvents();

        bool ShouldClose() const;

        int GetWidth() const;
        int GetHeight() const;

        GLFWwindow* GetNativeWindow() const;

    private:
        GLFWwindow* m_Window = nullptr;

        int m_Width = 0;
        int m_Height = 0;

        std::string m_Title;
    };
}