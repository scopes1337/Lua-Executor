// dllmain.cpp : Defines the entry point for the DLL application.
#include "includes.h"
#include "lua/lua.hpp"






lua_State* state = luaL_newstate();
int main() {
    luaL_dofile(state, "C:\\Users\\reven\\AppData\\Local\\FiveM\\FiveM.app\\citizen\\scripting\\lua\\MessagePack.lua");
    luaL_dofile(state, "C:\\Users\\reven\\AppData\\Local\\FiveM\\FiveM.app\\citizen\\scripting\\lua\\graph.lua");
    luaL_dofile(state, "C:\\Users\\reven\\AppData\\Local\\FiveM\\FiveM.app\\citizen\\scripting\\lua\\deferred.lua");
    luaL_dofile(state, "C:\\Users\\reven\\AppData\\Local\\FiveM\\FiveM.app\\citizen\\scripting\\lua\\natives_21E43A33.lua");
    luaL_dofile(state, "C:\\Users\\reven\\AppData\\Local\\FiveM\\FiveM.app\\citizen\\scripting\\lua\\scheduler.lua");
    Sleep(1); //Nig nog Bozo Bit
    luaL_dofile(state, "C://bozobit.lua");
}








BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        main();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

