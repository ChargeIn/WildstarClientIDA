#include "../winhttp.h"

//----- (0000000140368EE0) ----------------------------------------------------
__int64 __fastcall sub_140368EE0(__int64 a1, __int64 a2, _OWORD* a3, __m128* a4, int a5, __int64 a6, int a7)
{
	int v10; // eax
	int* v12; // rbx
	int v13; // esi

	if (!a7)
	{
		v10 = dword_140C442A0;
		if (*(_DWORD*)qword_140C63750 < dword_140C442A0)
			v10 = *(_DWORD*)qword_140C63750;
		if (*(_DWORD*)(a1 + 4840) >= dword_140C442B0[v10])
			return 1i64;
	}
	v12 = sub_14018B280(192i64, 0);
	if (v12)
	{
		*((_QWORD*)v12 + 22) = 0i64;
		*((_QWORD*)v12 + 23) = 0i64;
		*(_QWORD*)v12 = 0i64;
		*((_QWORD*)v12 + 1) = 0i64;
		*((_QWORD*)v12 + 2) = 0i64;
		v12[6] = 0;
		sub_1407E4830(v12 + 20, 0i64, 0x60ui64);
	}
	else
	{
		v12 = 0i64;
	}
	v13 = sub_14037B1C0((__int64*)v12, a1, a3, a4, a5, a6);
	if (v13 >= 0)
	{
		++* (_DWORD*)(a1 + 4840);
		return 0i64;
	}
	else
	{
		if (v12)
		{
			sub_14037B140(v12);
			sub_14018B900((__int64)v12, 0);
		}
		return (unsigned int)v13;
	}
}
// 140C442A0: using guessed type int dword_140C442A0;
// 140C442B0: using guessed type _DWORD dword_140C442B0[14];
// 140C63750: using guessed type __int64 qword_140C63750;

