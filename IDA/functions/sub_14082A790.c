#include "../winhttp.h"

//----- (000000014082A790) ----------------------------------------------------
__int64 __fastcall sub_14082A790(__int64 a1, char a2)
{
	_QWORD* v2; // rbx
	__int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rcx

	v2 = *(_QWORD**)a1;
	while (v2 != *(_QWORD**)(a1 + 8))
	{
		v5 = v2[1];
		if (a2 && *(_QWORD*)(v5 + 8))
		{
			v2 += 2;
		}
		else
		{
			v6 = *(_QWORD*)(v5 + 16);
			if (v6)
			{
				*(_QWORD*)(v5 + 24) = v6;
				sub_140881720(dword_140C10F20, v6);
				*(_QWORD*)(v5 + 16) = 0i64;
				*(_QWORD*)(v5 + 24) = 0i64;
				*(_DWORD*)(v5 + 32) = 0;
			}
			*(_QWORD*)(v5 + 8) = 0i64;
			sub_140881720(dword_140C10F20, v5);
			v7 = *(_QWORD*)(a1 + 8);
			if ((unsigned int)((v7 - *(_QWORD*)a1) >> 4) > 1)
			{
				*v2 = *(_QWORD*)(v7 - 16);
				v2[1] = *(_QWORD*)(v7 - 8);
			}
			*(_QWORD*)(a1 + 8) -= 16i64;
		}
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

