#ifndef BASICSCRIPTFACTORY_H
#define BASICSCRIPTFACTORY_H

#include <AudioScript>

class BasicScriptFactory : public QObject, public AS::Factory
{
    AS_FACTORY // macro required in private section of implementation

public:
    ~BasicScriptFactory() override;

    AS::Script* spawn() override;

    const char* name() override;

    const char* info() override;
};

#endif // BASICSCRIPTFACTORY_H
