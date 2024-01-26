// MyGame.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//
#include"pch.h"

#include "framework.h"
#include "MyGame.h"

#include "GCore.h"

int main()
{
    //Memory Leakage Sieve
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    sf::Window window;
    
    //Core Initialize
    if (!(GCore::GetInst()->init(window, sf::Vector2u(1000, 720), "Game")))
    {
        MessageBox(nullptr, L"Engine Core Initialize Failed"
            , L"ERROR", MB_OK);

        return false;
    }


    // run the program as long as the window is open
    while (window.isOpen())
    {
        GCore::GetInst()->progress(window);

        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}