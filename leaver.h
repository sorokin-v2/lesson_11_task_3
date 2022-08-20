#pragma once
#include <iostream>

#ifdef Leaver_EXPORTS										//ИМЯ И РЕГИСТР ВАЖНЫ!!! в проекте библиотеки DLL Visual Studio автоматически определяет макрос <ИМЯПРОЕКТА>_EXPORTS
#define LEAVERLIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define LEAVERLIBRARYDYNAMIC_API __declspec(dllimport)
#endif

namespace Leaver
{
	class Leaver
	{

	public:
		LEAVERLIBRARYDYNAMIC_API std::string leave(const std::string);
	};
}

