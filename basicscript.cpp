#include "basicscript.h"

BasicScript::~BasicScript()
{

}

AS::Buffer BasicScript::process(AS::Buffer buffer)
{
    return buffer.apply([] (AS::sample_t x) {
        return x * 0.5;
    });
}

void BasicScript::init()
{

}
