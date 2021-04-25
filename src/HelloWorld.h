#ifndef MAYA_PLUGIN_TEMPLATE_HELLOWORLD_H
#define MAYA_PLUGIN_TEMPLATE_HELLOWORLD_H

#include <maya/MArgList.h>
#include <maya/MObject.h>
#include <maya/MGlobal.h>
#include <maya/MPxCommand.h>

class HelloWorld : public MPxCommand {
public:
    HelloWorld() {};

    virtual MStatus doIt(const MArgList &arg_list);

    static void *creator();
};

#endif //MAYA_PLUGIN_TEMPLATE_HELLOWORLD_H
