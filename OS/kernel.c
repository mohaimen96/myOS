#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"

kmain()
{
	clearScreen();
	print("It is my first kernel\n");
	while(1)
	{
		print("myOS> ");
		
		string ch = readStr();
		if(strEql(ch,"cmd"))
		{
			print("\nIt is cmd\n");
		}
		else if(strEql(ch,"clear"))
		{
			clearScreen();
		}
		else
		{
			print("\nCommand not found\n");
		}
		
		//print("\n");
	}
}
