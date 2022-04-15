#include "../winhttp.h"

//----- (000000014078AAC0) ----------------------------------------------------
__int64 __fastcall sub_14078AAC0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
	_QWORD* v5; // rdx
	bool v6; // zf
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+2Ch] [rbp-1Ch]
	__int64 v16; // [rsp+34h] [rbp-14h]
	int v17; // [rsp+3Ch] [rbp-Ch]

	*(_QWORD*)(a1 + 24) = a2;
	v5 = (_QWORD*)(a2 + 1208);
	v6 = *(_QWORD*)(a1 + 8) == 0i64;
	*(_QWORD*)(a1 + 32) = a3;
	if (v6)
	{
		*(_QWORD*)(a1 + 8) = v5;
		v8 = a1 + 16;
		*(_QWORD*)v8 = *v5;
		*v5 = a1;
		if (*(_QWORD*)v8)
			*(_QWORD*)(*(_QWORD*)v8 + 8i64) = v8;
	}
	v9 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 48) = *a4;
	*(_QWORD*)(a1 + 56) = a4[1];
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64, _QWORD))(*(_QWORD*)v9 + 40i64))(
		v9,
		L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_CrystalBall_000.m3",
		a1 + 96,
		0i64) >= 0)
	{
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 96) + 648i64))(
			*(_QWORD*)(a1 + 96),
			sub_14078AC10,
			a1);
		v11 = *(_QWORD*)(a1 + 96);
		v13 = 1118i64;
		v16 = 2i64;
		v14 = 1065353216;
		v15 = 0i64;
		v17 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v11 + 584i64))(v11, 0i64, &v13);
		if (a2)
		{
			v12 = *(_QWORD*)(a2 + 1160);
			if (v12)
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v12 + 896i64))(v12, 22i64, *(_QWORD*)(a1 + 96));
		}
		return 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 40) = 1i64;
		return 0i64;
	}
}
// 140B50490: using guessed type wchar_t aArtPropMffortu_6[54];

