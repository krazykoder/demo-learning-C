/* 
 * File:   SampleClass.h
 * Author: tali
 *
 * Created on May 25, 2015, 11:09 PM
 */

#ifndef SAMPLECLASS_H
#define	SAMPLECLASS_H

#define SAMPLE_DLL

#include <stdio.h>
#include "libexport.h"

class DLL_EXPORT SampleClass
{
    public : 
        SampleClass(){}
        virtual ~SampleClass(){}

        void TestFunc();
};


#endif	/* SAMPLECLASS_H */

