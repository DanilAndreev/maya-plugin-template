#include "plugin.h"
#include "HelloWorld.h"

MStatus initializePlugin(MObject obj) {
    MStatus status;
    MFnPlugin plugin(obj, "Example", "1.0", "Any");

    // Register plugin command.
    status = plugin.registerCommand("helloWorld", HelloWorld::creator);
    CHECK_MSTATUS_AND_RETURN_IT(status);

    return status;
}

MStatus uninitializePlugin(MObject obj) {
    MStatus status;
    MFnPlugin plugin(obj);

    // Deregister plugin command.
    status = plugin.deregisterCommand("helloWorld");
    CHECK_MSTATUS_AND_RETURN_IT(status);
    return status;
}
