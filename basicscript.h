#ifndef BASICSCRIPT_H
#define BASICSCRIPT_H

#include <AudioScript>

class BasicScript : public AudioScript
{
public:

    ~BasicScript() override;

    AudioScriptBuffer process(AudioScriptBuffer buffer) override;

    void reset() override;
};

#endif // BASICSCRIPT_H
