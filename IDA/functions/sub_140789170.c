//----- (0000000140789170) ----------------------------------------------------
__int64 __fastcall sub_140789170(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	_QWORD* v5; // rdx
	bool v6; // zf
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
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
		v9 = a1 + 16;
		*(_QWORD*)v9 = *v5;
		*v5 = a1;
		if (*(_QWORD*)v9)
			*(_QWORD*)(*(_QWORD*)v9 + 8i64) = v9;
	}
	if ((*(int(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(a1 + 32) + 40i64))(
		*(_QWORD*)(a1 + 32),
		L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_Tutorial_Arrow_000.m3",
		a1 + 56,
		0i64) >= 0)
	{
		(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
			*(_QWORD*)(a1 + 56),
			sub_140789280,
			a1);
		v10 = *(_QWORD*)(a1 + 56);
		v13 = 1118i64;
		v14 = 1065353216;
		v15 = 0i64;
		v16 = 0i64;
		v17 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v10 + 584i64))(v10, 0i64, &v13);
		if (a2)
		{
			v11 = *(_QWORD*)(a2 + 1160);
			if (v11)
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v11 + 896i64))(v11, a4, *(_QWORD*)(a1 + 56));
		}
	}
	else
	{
		*(_QWORD*)(a1 + 40) = 1i64;
	}
	return 0i64;
}
// 140B501F0: using guessed type wchar_t aArtPropMffortu_2[57];

