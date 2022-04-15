#include "../winhttp.h"

//----- (00000001407893A0) ----------------------------------------------------
__int64 __fastcall sub_1407893A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5)
{
	_QWORD* v6; // rdx
	bool v7; // zf
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+28h] [rbp-20h]
	__int64 v17; // [rsp+30h] [rbp-18h]
	__int64 v18; // [rsp+38h] [rbp-10h]

	*(_QWORD*)(a1 + 24) = a2;
	v6 = (_QWORD*)(a2 + 1208);
	v7 = *(_QWORD*)(a1 + 8) == 0i64;
	*(_QWORD*)(a1 + 32) = a3;
	if (v7)
	{
		*(_QWORD*)(a1 + 8) = v6;
		v9 = a1 + 16;
		*(_QWORD*)v9 = *v6;
		*v6 = a1;
		if (*(_QWORD*)v9)
			*(_QWORD*)(*(_QWORD*)v9 + 8i64) = v9;
	}
	*(_QWORD*)(a1 + 48) = *a5;
	v10 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 56) = a5[1];
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64, _QWORD))(*(_QWORD*)v10 + 40i64))(
		v10,
		L"Art\\Prop\\MFFortunes\\Chest\\Raiders\\PRP_MFFortunes_Chest_Raiders_000.m3",
		a1 + 88,
		0i64) < 0)
		goto LABEL_9;
	(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64*, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 88) + 648i64))(
		*(_QWORD*)(a1 + 88),
		sub_1407896F0,
		a1);
	v11 = *(_QWORD*)(a1 + 88);
	v15 = 1213i64;
	v16 = 1065353216i64;
	v17 = 0i64;
	v18 = 0i64;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v11 + 584i64))(v11, 0i64, &v15);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 88) + 352i64))(*(_QWORD*)(a1 + 88), 1i64);
	if ((*(int(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(a1 + 32) + 40i64))(
		*(_QWORD*)(a1 + 32),
		L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_ClickVolume_000.m3",
		a1 + 96,
		0i64) < 0)
	{
	LABEL_9:
		*(_QWORD*)(a1 + 40) = 1i64;
	}
	else
	{
		v12 = *(_QWORD*)(a1 + 96);
		v15 = 150i64;
		v16 = 1065353216i64;
		v17 = 0i64;
		v18 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v12 + 584i64))(v12, 0i64, &v15);
		if (a2)
		{
			v13 = *(_QWORD*)(a2 + 1160);
			if (v13)
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v13 + 896i64))(v13, 23i64, *(_QWORD*)(a1 + 96));
		}
	}
	return 0i64;
}
// 140B502C0: using guessed type wchar_t aArtPropMffortu_4[54];
// 140B50330: using guessed type wchar_t aArtPropMffortu_3[70];

