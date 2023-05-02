#include "library.h"

#include <iostream>
#include "include/plugins/v1/NetifePluginAgent.h"
#if defined(_WIN32)
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API
#endif
extern "C" void LIBRARY_API Test(NetifePluginAgent* agent);

void Test(NetifePluginAgent* agent) {
    agent->LogInfo("Test","Hello, This symbol has been hooked!!!");
}
