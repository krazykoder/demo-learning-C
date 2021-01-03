//This needs to go into the source file, not the header

#define SAMPLE_DLL
#include "SampleClass.h"


void SampleClass::TestFunc() {
    printf("This method is called from our DLL [Forgive Errors!!].\n");
    printf("TestFunc() Exiting...\n");
}
