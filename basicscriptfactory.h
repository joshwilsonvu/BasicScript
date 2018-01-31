#ifndef BASICSCRIPTFACTORY_H
#define BASICSCRIPTFACTORY_H

#include <AudioScript>

class BasicScriptFactory : public QObject, public AudioScriptFactory
{
    //AUDIOSCRIPTFACTORY // macro required in private section of implementation
    Q_OBJECT \
    Q_PLUGIN_METADATA(IID AUDIOSCRIPTFACTORY_IID) \
    Q_INTERFACES(AudioScriptFactory)

public:
    ~BasicScriptFactory() override;

    AudioScript* spawn() override;

    const char* name() override;

    const char* scriptInfo() override;
};

#endif // BASICSCRIPTFACTORY_H
