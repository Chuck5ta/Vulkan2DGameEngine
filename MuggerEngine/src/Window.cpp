#include <Window.h>

#include <GLFW/glfw3.h>

#include <stdexcept>

namespace MuggerEngine
{
    Window::Window(
        int width,
        int height,
        const std::string& title
    )
        : m_Width(width),
        m_Height(height),
        m_Title(title)
    {
        if (!glfwInit())
        {
            throw std::runtime_error("Failed to initialise GLFW");
        }

        // We are using Vulkan, not OpenGL.
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

        m_Window = glfwCreateWindow(
            m_Width,
            m_Height,
            m_Title.c_str(),
            nullptr,
            nullptr
        );

        if (!m_Window)
        {
            glfwTerminate();

            throw std::runtime_error(
                "Failed to create GLFW window"
            );
        }
    }

    Window::~Window()
    {
        if (m_Window)
        {
            glfwDestroyWindow(m_Window);
            m_Window = nullptr;
        }

        glfwTerminate();
    }

    void Window::PollEvents()
    {
        glfwPollEvents();
    }

    bool Window::ShouldClose() const
    {
        return glfwWindowShouldClose(m_Window);
    }

    int Window::GetWidth() const
    {
        return m_Width;
    }

    int Window::GetHeight() const
    {
        return m_Height;
    }

    GLFWwindow* Window::GetNativeWindow() const
    {
        return m_Window;
    }
}