#include "../winhttp.h"

//----- (0000000140871750) ----------------------------------------------------
void __fastcall sub_140871750(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	int v4; // esi
	__int64 v5; // rdi
	int v6; // esi

	v2 = a1[1];
	if (v2)
	{
		sub_140862D70(v2);
		v3 = a1[1];
		v4 = dword_140C10F28;
		if (v3)
		{
			sub_140862B80(v3);
			sub_140881720(v4, v3);
		}
		a1[1] = 0i64;
	}
	if (*a1)
	{
		sub_140862D70(*a1);
		v5 = *a1;
		v6 = dword_140C10F28;
		if (*a1)
		{
			sub_140862B80(v5);
			sub_140881720(v6, v5);
		}
		*a1 = 0i64;
	}
}
// 140C10F28: using guessed type int dword_140C10F28;

