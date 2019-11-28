#pragma once

//standard
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

//data type and those typedef
#include "minwindef.h"
#include <wchar.h>
#define TYPE_OF_SIZE_1 __int8
#define TYPE_OF_SIZE_2 __int16
#define TYPE_OF_SIZE_4 __int32

typedef signed TYPE_OF_SIZE_1    SInt8;
typedef signed TYPE_OF_SIZE_2    SInt16;
typedef signed TYPE_OF_SIZE_4    SInt32;
typedef unsigned TYPE_OF_SIZE_1    UInt8;
typedef unsigned TYPE_OF_SIZE_2    UInt16;
typedef unsigned TYPE_OF_SIZE_4    UInt32;


//common status
enum {
    kExitSuccess      = 0, // successful completion
    kExitFailed       = 1, // general failure
    kExitTerminated   = 2, // killed by signal
    kExitArgs         = 3, // bad arguments
    kExitConfig       = 4, // cannot read configuration
    kExitSubscription = 5  // subscription error
};

