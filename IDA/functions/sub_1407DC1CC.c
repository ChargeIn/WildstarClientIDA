#include "../winhttp.h"

//----- (00000001407DC1CC) ----------------------------------------------------
__int64 __fastcall sub_1407DC1CC(int a1)
{
	__int64 result; // rax

	if (a1 >= 0)
	{
		if (a1 <= 2)
		{
			result = (unsigned int)dword_140C5F550;
			dword_140C5F550 = a1;
			return result;
		}
		if (a1 == 3)
			return (unsigned int)dword_140C5F550;
	}
	*(_DWORD*)sub_1407DE1B0() = 22;
	sub_1407DC370();
	return 0xFFFFFFFFi64;
}
// 1407DE1B0: using guessed type __int64 sub_1407DE1B0(void);
// 140C5F550: using guessed type int dword_140C5F550;

