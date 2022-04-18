#include "../winhttp.h"

//----- (0000000140611F20) ----------------------------------------------------
__int64 __fastcall sub_140611F20(__int64 a1, __int64 a2)
{
	unsigned int i; // ebp
	__int64 v5; // rsi
	__int64 v6; // r14
	unsigned __int64 v7; // rdi
	_QWORD* v8; // rbx
	__int64* v9; // rbx
	__int64 v10; // rbx
	__int64* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rax
	unsigned int v17; // [rsp+78h] [rbp+10h] BYREF

	for (i = 0; i < *(_DWORD*)(a2 + 4); ++i)
	{
		v5 = qword_140C65C28;
		v6 = *(_QWORD*)(a2 + 8) + 24i64 * i;
		v17 = *(_DWORD*)v6;
		v7 = (*(__int64(__fastcall**)(unsigned int*))(qword_140C65C28 + 56))(&v17);
		v8 = *(_QWORD**)(*(_QWORD*)(v5 + 48) + 8 * (v7 % *(_QWORD*)(v5 + 40)));
		if (!v8)
			break;
		while (v7 != *v8 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v5 + 64))(&v17, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				return 0i64;
		}
		v9 = v8 + 3;
		if (!v9)
			break;
		v10 = *v9;
		if (!v10)
			break;
		sub_140643F00(
			qword_140C65C28,
			*(_DWORD*)v6,
			*(_DWORD*)(v6 + 4),
			*(_DWORD*)(v6 + 8),
			*(_QWORD*)(v6 + 16),
			0,
			*(_DWORD*)a2);
		v11 = (__int64*)sub_140643E20(qword_140C65C28, *(_DWORD*)v6);
		if (!v11
			|| (v13 = *v11, (*(_BYTE*)(v13 + 12) & 2) != 0)
			|| (v14 = sub_140644D30(v12, *(_DWORD*)(v13 + 8)), v14 == 5)
			|| v14 == 46)
		{
			v15 = sub_140643E20(qword_140C65C28, *(_DWORD*)v6);
			if (v15 && (*(_BYTE*)(*(_QWORD*)v15 + 12i64) & 2) == 0)
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ProfessionAchievementUpdated", L"a", v10);
		}
		else
		{
			Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "AchievementUpdated", byte_1409E94AC, v10);
		}
	}
	return 0i64;
}
// 140612015: variable 'v12' is possibly undefined
// 1409E94AC: using guessed type _BYTE byte_1409E94AC[80];
// 1409EF424: using guessed type wchar_t aA_12[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C28: using guessed type __int64 qword_140C65C28;

