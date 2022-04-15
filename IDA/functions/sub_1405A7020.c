#include "../winhttp.h"

//----- (00000001405A7020) ----------------------------------------------------
_BOOL8 __fastcall sub_1405A7020(__int64 a1, unsigned int a2)
{
	unsigned int v3; // edx
	__int64 v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // rcx
	__int64 v7; // r11
	__int64 v8; // r11
	int v9; // eax
	_DWORD* v10; // r10
	_BOOL8 result; // rax

	result = 0;
	if (!*(_DWORD*)(a1 + 29056))
	{
		v3 = sub_1403BAD30(a1, a2, *(_BYTE*)(a1 + 28140));
		if (v3)
		{
			if (sub_1407A16F0(v4, v3))
			{
				if (*(_QWORD*)(v7 + 120))
				{
					if (sub_1407A16F0(v6, v5))
					{
						v9 = sub_1405A76A0(v8, a2);
						if (*v10 + v9)
							return 1;
					}
				}
			}
		}
	}
	return result;
}
// 1405A7047: variable 'v4' is possibly undefined
// 1405A7051: variable 'v7' is possibly undefined
// 1405A7058: variable 'v6' is possibly undefined
// 1405A7058: variable 'v5' is possibly undefined
// 1405A706A: variable 'v8' is possibly undefined
// 1405A706F: variable 'v10' is possibly undefined

