#include "../winhttp.h"

//----- (0000000140553030) ----------------------------------------------------
__int64 __fastcall sub_140553030(__int64 a1, int a2)
{
	unsigned int* v3; // rdx
	unsigned int v4; // eax
	int v6; // ecx
	__int16 v7; // dx

	if (!a2)
	{
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8)) == 2)
			return 1i64;
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 12i64) & 1) != 0)
		{
			v7 = -8193;
		LABEL_15:
			if (!(unsigned int)sub_140552550(a1, v7))
				return 1i64;
		}
		return 0i64;
	}
	v3 = *(unsigned int**)(a1 + 8);
	v4 = v3[3];
	if ((v4 & 0x10000) == 0)
	{
		if ((v4 & 8) == 0)
			return 0i64;
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v3) == 2)
			return 1i64;
		v6 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64);
		if ((v6 & 1) != 0 && (v6 & 4) != 0)
		{
			v7 = -513;
			goto LABEL_15;
		}
		return 0i64;
	}
	if (!*(_QWORD*)(a1 + 144))
		return 0i64;
	return sub_14043D1F0(a1, *v3, **(_DWORD**)(a1 + 136), 1);
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

