#include "../winhttp.h"

//----- (0000000140882830) ----------------------------------------------------
__int64 __fastcall sub_140882830(char* a1, _QWORD* a2, int a3)
{
	__int64 result; // rax
	__int64 v7; // rbx

	result = sub_1408819F0(dword_140C111C0, 48i64);
	v7 = result;
	if (result)
	{
		if ((unsigned int)sub_140883420(result, a1, a2, a3) == 1)
		{
			return v7;
		}
		else
		{
			if ((*(_BYTE*)(v7 + 44) & 1) != 0)
			{
				if (*(_QWORD*)v7)
					sub_140881720(dword_140C111C0, *(_QWORD*)v7);
			}
			sub_140881720(dword_140C111C0, v7);
			return 0i64;
		}
	}
	return result;
}
// 140C111C0: using guessed type int dword_140C111C0;

