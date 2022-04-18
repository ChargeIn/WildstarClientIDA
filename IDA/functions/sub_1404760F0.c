#include "../winhttp.h"

//----- (00000001404760F0) ----------------------------------------------------
__int64 __fastcall sub_1404760F0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64* v5; // rsi
	__int64 v6; // rdi
	_QWORD* v7; // rbx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	int* v11; // rax
	int v12; // ecx
	__int64* v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // r9
	__int64 v19; // [rsp+28h] [rbp-20h]

	v3 = *(_QWORD*)(a1 + 5864);
	if (v3 && !*(_QWORD*)(a1 + 6184))
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64(__fastcall*)(__int64*, __int64, __m128*), void(__fastcall*)(__int64*, __int64, __int64), __int64))(*(_QWORD*)v3 + 1016i64))(
			v3,
			1i64,
			25i64,
			sub_140476A20,
			sub_140476BC0,
			a1);
	v5 = (__int64*)(a1 + 6184);
	v6 = 0i64;
	while (*v5)
	{
		v7 = (_QWORD*)*v5;
		if (*v5)
		{
			v8 = v7[4];
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				v7[4] = 0i64;
			}
			v9 = (_QWORD*)v7[5];
			if (v9)
				*v9 = v7[6];
			v10 = v7[6];
			if (v10)
				*(_QWORD*)(v10 + 40) = v7[5];
			v7[5] = 0i64;
			v7[6] = 0i64;
			sub_14018B900((__int64)v7, 0);
		}
	}
	*(_QWORD*)(a1 + 6192) = 0i64;
	v11 = sub_14018B280(64i64, 0);
	if (v11)
	{
		v12 = dword_140C47540;
		if (*(_DWORD*)qword_140C63750 < dword_140C47540)
			v12 = *(_DWORD*)qword_140C63750;
		v6 = sub_140474D20((__int64)v11, a2, dword_140C636A8, *(float*)&dword_140C47550[v12]);
	}
	if (*v5)
	{
		if (!*(_QWORD*)(v6 + 40))
		{
			v13 = (__int64*)(*(_QWORD*)(a1 + 6192) + 48i64);
			*(_QWORD*)(v6 + 40) = v13;
			*(_QWORD*)(v6 + 48) = *v13;
			*v13 = v6;
			v14 = *(_QWORD*)(v6 + 48);
			if (v14)
				*(_QWORD*)(v14 + 40) = v6 + 48;
		}
	}
	else if (!*(_QWORD*)(v6 + 40))
	{
		*(_QWORD*)(v6 + 40) = v5;
		*(_QWORD*)(v6 + 48) = *v5;
		*v5 = v6;
		v15 = *(_QWORD*)(v6 + 48);
		if (v15)
			*(_QWORD*)(v15 + 40) = v6 + 48;
	}
	v16 = qword_140C65898;
	v17 = *(unsigned int*)(a1 + 8);
	*(_QWORD*)(a1 + 6192) = v6;
	LODWORD(v19) = 1;
	return Apollo_LUAEvent(*(_QWORD*)(v16 + 29504), "UnitTextBubbleCreate", "USbf", v17, L"###", v19, 0i64);
}
// 1404762AA: variable 'v19' is possibly undefined
// 140B080C0: using guessed type wchar_t asc_140B080C0[4];
// 140C47540: using guessed type int dword_140C47540;
// 140C47550: using guessed type _DWORD dword_140C47550[16];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

