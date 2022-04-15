#include "../winhttp.h"

//----- (0000000140835200) ----------------------------------------------------
__int64 __fastcall sub_140835200(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 result; // rax
	__int64 v4; // rdx
	int v5; // esi
	__int64 v6; // rdx
	__int64 v7; // rdx

	v1 = *(_QWORD**)(a1 + 48);
	result = v1 != 0i64;
	if (v1)
	{
		while (1)
		{
			if (v1 == *(_QWORD**)(a1 + 48))
				*(_QWORD*)(a1 + 48) = v1[1];
			else
				MEMORY[8] = v1[1];
			v4 = v1[2];
			v5 = dword_140C10F20;
			*v1 = &off_1409A2EB8;
			if (v4)
				sub_14083B060(qword_140C61B70, v4, (__int64)v1);
			sub_140881720(v5, (__int64)v1);
		}
	}
	v6 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 32) = v6;
	if (v6)
	{
		*(_QWORD*)(a1 + 32) = v6;
		result = sub_140881720(dword_140C10F20, v6);
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_DWORD*)(a1 + 40) = 0;
	}
	v7 = *(_QWORD*)(a1 + 56);
	if (v7)
	{
		*(_QWORD*)(a1 + 64) = v7;
		result = sub_140881720(dword_140C10F20, v7);
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 64) = 0i64;
		*(_DWORD*)(a1 + 72) = 0;
	}
	return result;
}
// 1409A2EB8: using guessed type __int64 (__fastcall *off_1409A2EB8)();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B70: using guessed type __int64 qword_140C61B70;

