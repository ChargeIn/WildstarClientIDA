#include "../winhttp.h"

//----- (000000014088DE00) ----------------------------------------------------
void __fastcall sub_14088DE00(__int64 a1)
{
	_QWORD* v1; // rbx
	__int128 v3; // rax
	__int64 v4; // rcx
	int v5; // esi
	__int128 v6; // [rsp+20h] [rbp-28h]

	v1 = *(_QWORD**)(a1 + 64);
	*((_QWORD*)&v3 + 1) = 0i64;
	if (v1)
	{
		while (1)
		{
			*(_QWORD*)&v3 = *v1;
			v6 = v3;
			if (v1 == *(_QWORD**)(a1 + 64))
				*(_QWORD*)(a1 + 64) = v3;
			else
				**((_QWORD**)&v3 + 1) = v3;
			v4 = v1[1];
			v5 = dword_140C10F20;
			v1[1] = 0i64;
			if (v4)
				sub_14088B630();
			if (v1[1])
			{
				sub_14088B630();
				v1[1] = 0i64;
			}
			sub_140881720(v5, (__int64)v1);
			if (!*(_QWORD*)(a1 + 64))
				break;
			*((_QWORD*)&v3 + 1) = *((_QWORD*)&v6 + 1);
			v1 = (_QWORD*)v6;
		}
	}
}
// 14088B630: using guessed type __int64 sub_14088B630(void);
// 140C10F20: using guessed type int dword_140C10F20;

