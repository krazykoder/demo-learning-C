/* 
 * File:   libexport.h
 * Author: tali
 *
 * Created on May 25, 2015, 11:06 PM
 */

#ifndef LIBEXPORT_H
#define	LIBEXPORT_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef SAMPLE_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif
        

#ifdef __cplusplus
}
#endif

#endif	/* LIBEXPORT_H */

