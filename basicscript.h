#ifndef BASICSCRIPT_H
#define BASICSCRIPT_H

#include <AudioScript>

class BasicScript : public AS::Script
{
public:

    ~BasicScript() override;

    AS::Buffer process(AS::Buffer buffer) override;

    void init() override;
};

#endif // BASICSCRIPT_H
