#include "../winhttp.h"

//----- (000000014080B1E0) ----------------------------------------------------
void sub_14080B1E0()
{
	if (!byte_140C60990)
	{
		InitializeCriticalSection(&CriticalSection);
		byte_140C60990 = 1;
	}
}
// 140C60990: using guessed type char byte_140C60990;

