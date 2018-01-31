#include "basicscript.h"

BasicScript::~BasicScript()
{

}

AudioScriptBuffer BasicScript::process(AudioScriptBuffer buffer)
{
    return buffer.apply([] (sample_t x) {
        return x * 0.5;
    });
}

void BasicScript::reset()
{

}
