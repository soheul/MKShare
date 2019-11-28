//#pragma warning pre
//stdpre에서는 STL과 그 외 다른 소스들에 대한 경고를 처리하기 위해 앞부분에 위치해 push

#if defined(_MSC_VER)
#pragma warning(disable: 4786)        // identifier truncated
#pragma warning(disable: 4514)        // unreferenced inline
#pragma warning(disable: 4710)        // not inlined
#pragma warning(disable: 4663)        // C++ change, template specialization
#pragma warning(disable: 4503)        // decorated name length too long
#pragma warning(push, 3)
#pragma warning(disable: 4018)        // signed/unsigned mismatch
#pragma warning(disable: 4284)
#pragma warning(disable: 4146)        // unary minus on unsigned value
#pragma warning(disable: 4127)        // conditional expression is constant
#pragma warning(disable: 4701)        // variable possibly used uninitialized
#endif
