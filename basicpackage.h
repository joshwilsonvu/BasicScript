#ifndef BASICPACKAGE_H
#define BASICPACKAGE_H

#include <AudioScript>

class BasicPackage : public QObject, public AS::Package
{
    // macros required in private section of implementation
    Q_OBJECT
    AS_PACKAGE

public:
    BasicPackage();

    ~BasicPackage() override;
};

#endif // BASICPACKAGE_H
