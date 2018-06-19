#include "basicscriptfactory.h"
#include "basicscript.h"
#include <iostream>

BasicScriptFactory::~BasicScriptFactory()
{

}

AS::Script* BasicScriptFactory::spawn()
{
    return new BasicScript();
}

const char* BasicScriptFactory::name()
{
    return "BasicScript";
}

const char* BasicScriptFactory::info()
{
    return "A testing plugin for use during AudioScript development.";
}
