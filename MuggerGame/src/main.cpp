#include <Application.h>

#include <exception>
#include <iostream>

int main()
{
    try
    {
        MuggerEngine::Application application;

        application.Run();
    }
    catch (const std::exception& exception)
    {
        std::cerr
            << "Fatal error: "
            << exception.what()
            << '\n';

        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}