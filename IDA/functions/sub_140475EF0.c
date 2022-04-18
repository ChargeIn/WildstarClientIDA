#include "../winhttp.h"

//----- (0000000140475EF0) ----------------------------------------------------
__int64 __fastcall sub_140475EF0(__int64 a1, int* a2, int a3, float a4)
{
	__int64 v5; // rcx
	__int64 v8; // rdi
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	int* v13; // r10
	int v14; // xmm0_4
	int v15; // eax
	__int64* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // r9
	__int64 v21; // [rsp+28h] [rbp-30h]

	v5 = *(_QWORD*)(a1 + 5864);
	if (v5 && !*(_QWORD*)(a1 + 6184))
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64(__fastcall*)(__int64*, __int64, __m128*), void(__fastcall*)(__int64*, __int64, __int64), __int64))(*(_QWORD*)v5 + 1016i64))(
			v5,
			1i64,
			25i64,
			sub_140476A20,
			sub_140476BC0,
			a1);
	v8 = 0i64;
	if (a3)
	{
		while (*(_QWORD*)(a1 + 6184))
		{
			v9 = *(_QWORD**)(a1 + 6184);
			if (v9)
			{
				v10 = v9[4];
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					v9[4] = 0i64;
				}
				v11 = (_QWORD*)v9[5];
				if (v11)
					*v11 = v9[6];
				v12 = v9[6];
				if (v12)
					*(_QWORD*)(v12 + 40) = v9[5];
				v9[5] = 0i64;
				v9[6] = 0i64;
				sub_14018B900((__int64)v9, 0);
			}
		}
		*(_QWORD*)(a1 + 6192) = 0i64;
	}
	v13 = sub_14018B280(64i64, 0);
	if (v13)
	{
		if (a4 <= 0.0)
		{
			v15 = dword_140C47540;
			if (*(_DWORD*)qword_140C63750 < dword_140C47540)
				v15 = *(_DWORD*)qword_140C63750;
			v14 = dword_140C47550[v15];
		}
		else
		{
			v14 = LODWORD(a4);
		}
		v8 = sub_140474BC0((__int64)v13, a2, *(_QWORD*)(qword_140C65898 + 31584), dword_140C636A8, v14);
	}
	v16 = (__int64*)(a1 + 6184);
	if (*(_QWORD*)(a1 + 6184))
	{
		if (*(_QWORD*)(v8 + 40))
			goto LABEL_29;
		v16 = (__int64*)(*(_QWORD*)(a1 + 6192) + 48i64);
	}
	else if (*(_QWORD*)(v8 + 40))
	{
		goto LABEL_29;
	}
	*(_QWORD*)(v8 + 40) = v16;
	*(_QWORD*)(v8 + 48) = *v16;
	*v16 = v8;
	v17 = *(_QWORD*)(v8 + 48);
	if (v17)
		*(_QWORD*)(v17 + 40) = v8 + 48;
LABEL_29:
	v18 = qword_140C65898;
	v19 = *(unsigned int*)(a1 + 8);
	*(_QWORD*)(a1 + 6192) = v8;
	LODWORD(v21) = a3;
	return Apollo_LUAEvent(*(_QWORD*)(v18 + 29504), "UnitTextBubbleCreate", "USbf", v19, a2, v21, a4);
}
// 1404760C3: variable 'v21' is possibly undefined
// 140C47540: using guessed type int dword_140C47540;
// 140C47550: using guessed type _DWORD dword_140C47550[16];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

