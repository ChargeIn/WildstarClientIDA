#include "../winhttp.h"

//----- (00000001408715B0) ----------------------------------------------------
char __fastcall sub_1408715B0(__int64 a1, unsigned int a2)
{
	unsigned __int64 v2; // rdi
	__int64 v4; // rsi
	char result; // al
	__int64 v6; // rcx
	unsigned __int64 v7; // rdx
	__int64 v8; // rax

	v2 = a2;
	v4 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 24i64;
	if (a2 >= (unsigned int)v4)
	{
		if (a2 <= *(_DWORD*)(a1 + 16) || (result = sub_140870DF0(a1, a2 - v4)) != 0)
		{
			if ((unsigned int)v4 < v2)
			{
				v6 = 24i64 * (unsigned int)v4;
				v7 = v2 - (unsigned int)v4;
				do
				{
					v8 = v6 + *(_QWORD*)a1;
					if (v8)
					{
						*(_QWORD*)(v8 + 8) = 0i64;
						*(_QWORD*)v8 = 0i64;
						*(_DWORD*)(v8 + 16) = 0;
					}
					v6 += 24i64;
					--v7;
				} while (v7);
			}
			result = 1;
			*(_QWORD*)(a1 + 8) = *(_QWORD*)a1 + 24 * v2;
		}
	}
	else
	{
		*(_QWORD*)(a1 + 8) = *(_QWORD*)a1 + 24i64 * a2;
		return 1;
	}
	return result;
}

