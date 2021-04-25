#include "plugin.h"

#include <iostream>


MStatus helloWorld::doIt( const MArgList& )
{
    cout.rdbuf(cerr.rdbuf());
    cout << "Hello World\n" << endl;
    return MS::kSuccess;
}
