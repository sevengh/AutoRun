#include <stdlib.h>
#include <windows.h>

run()
{
    for( ; ; )
    {
        system("hello-world.exe");
        Sleep(60000);
    }
}

int wmain()
{
    run();
    return 0;
}

int main()
{
    run();
    return 0;
}

