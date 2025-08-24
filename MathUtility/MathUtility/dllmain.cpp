#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

//Libraries
#include <iostream>
#include <Windows.h>

//Headers
#include "MathUtility.h"

/*
    MathUtility:
    Developer: jmckinney7 | Joshua McKinney
    Date: 8/23/2025

    Summary:
    This project is a very basic dynamic-link libary that allows you to add, subtract, multiply, divide, and mod in various languages.
    I've worked on other dll projects that are more extensive than this project, but haven't done one in a while due to my busy schedule.
    This is me *dipping my feet in the water* again. So, use it or mutate it.
*/

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

