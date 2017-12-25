#include "basicscriptfactory.h"
#include "basicscript.h"
#include <iostream>

BasicScriptFactory::~BasicScriptFactory()
{

}

AudioScript* BasicScriptFactory::spawn()
{
    return new BasicScript();
}

const char* BasicScriptFactory::name()
{
    return "BasicScript";
}

const char* BasicScriptFactory::scriptInfo()
{
    return "A testing plugin for use during AudioScript development.";
}

void BasicScriptFactory::setupGUI(AudioScriptUI &gui)
{
    Q_UNUSED(gui)
}
