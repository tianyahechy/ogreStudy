#pragma once
#ifdef __BORLAND__
#define __STD_ALGORITHM
#endif

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstdarg>
#include <cmath>
#include <vector>
#include <map>
#include <string>
#include <set>
#include <list>
#include <deque>

#ifdef EXT_HASH
#include <ext/hash_map>
#include <ext/hash_set>
#else
#include <unordered_set>
#include <unordered_map>
#endif

#include <algorithm>
#include <functional>
#include <limits>

#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>

#ifdef _BORLANDC_
namespace Ogre
{
	using namespace std;

}

#endif

extern "C"
{
#include <sys/types.h>
#include <sys/stat.h>
}

#if OGRE_PLATFORM == PLATFORM_WIN32
#undef min
#undef max
#endif

#if OGRE_PLATFORM == PLATFORM_LINUX || OGRE_PLATFORM == PLATFORM_APPLE
extern "C"
{
#include <unistd.h>
#include <dlfcn.h>
}
#endif