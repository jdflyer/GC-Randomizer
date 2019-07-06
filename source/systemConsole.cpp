#include "systemConsole.h"
#include "defines.h"

#include <tp/JFWSystem.h>

namespace mod::systemconsole
{
	void setBackground(u32 rgba)
	{
		u32* ConsoleColor = reinterpret_cast<u32*>(sysConsolePtr->consoleColor);
		*ConsoleColor = rgba;
	}

	void setState(bool activeFlag, u32 totalLines)
	{
		tp::jfw_System::SystemConsole* Console = sysConsolePtr;
		Console->consoleEnabled = activeFlag;

		for (u32 i = 0; i < totalLines; i++)
		{
			Console->consoleLine[i].showLine = activeFlag;
		}
	}
}