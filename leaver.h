#pragma once
#include <iostream>

#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVERLIBRARYDYNAMIC_EXPORTS __declspec(dllexport)
#else
#define LEAVERLIBRARYDYNAMIC_EXPORTS __declspec(dllimport)
#endif

namespace Leaver
{
	class Leaver
	{

	public:
		LEAVERLIBRARYDYNAMIC_EXPORTS std::string leave(const std::string);
	};
}

