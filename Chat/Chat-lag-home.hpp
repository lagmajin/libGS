#pragma once

#ifdef _MSC_VER
#ifdef EXPORT
#define __DLL__ __declspec(dllexport)
#else
#define __DLL__ __declspec(dllimport)
#endif
#elif
#define __DLL__ 
#endif

namespace libgs{




























};
