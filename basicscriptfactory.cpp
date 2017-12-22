#include "basicscriptfactory.h"
#include "basicscript.h"
#include <iostream>

BasicScriptFactory::~BasicScriptFactory() noexcept
{

}

AudioScript* BasicScriptFactory::spawn()
{
    return new BasicScript();
}

const char* BasicScriptFactory::name()
{
    return "BS";
}

void BasicScriptFactory::setupGUI(AudioScriptUI &gui)
{
    Q_UNUSED(gui)
}
