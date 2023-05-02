//
// Created by Administrator on 2023/5/2.
//

#include "DemoClass.h"

DemoClass::~DemoClass() {
    agent->LogInfo("DemoClass", "DemoClass is deconstructed.");
}

std::string DemoClass::GetName() const{
    return "DemoClass";
}

std::string DemoClass::GetVersion() const{
    return "1.0.0";
}

std::string DemoClass::DispatcherCommand(std::string commandOriginal) {
    agent->LogInfo("DemoClass", "DemoClass is commanded by " + commandOriginal);
    return "over";
}

bool DemoClass::OnEnable() {
    agent->LogInfo("DemoClass", "DemoClass is OnEnable");
    return true;
}

bool DemoClass::OnDisable() {
    agent->LogInfo("DemoClass", "DemoClass is OnDisable");
    return true;
}

void DemoClass::OnLoaded() {
    agent->LogInfo("DemoClass", "DemoClass is OnLoaded");
}

void DemoClass::OnExiting() {
    agent->LogInfo("DemoClass", "DemoClass is OnExiting");
}

POCO_BEGIN_MANIFEST(NetifePlugins)
        POCO_EXPORT_CLASS(DemoClass)
POCO_END_MANIFEST
void pocoInitializeLibrary()
{

}
void pocoUninitializeLibrary()
{

}
