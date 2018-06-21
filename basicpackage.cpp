#include "basicpackage.h"
#include "basicscript.h"


BasicPackage::BasicPackage()
{
    package("Basic");
    script("BasicScript").spawner = spawn<BasicScript>;
    script("BasicScript").description =
            "A testing plugin for use during AudioScriptDevelopment.";


}

BasicPackage::~BasicPackage()
{}
