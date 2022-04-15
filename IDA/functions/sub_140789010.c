//----- (0000000140789010) ----------------------------------------------------
__int64 __fastcall sub_140789010(_QWORD* a1, __int64 a2, __int64 a3)
{
	_QWORD* v4; // rdx
	bool v5; // zf
	_QWORD* v7; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+2Ch] [rbp-1Ch]
	__int64 v14; // [rsp+34h] [rbp-14h]
	int v15; // [rsp+3Ch] [rbp-Ch]

	a1[3] = a2;
	v4 = (_QWORD*)(a2 + 1208);
	v5 = a1[1] == 0i64;
	a1[4] = a3;
	if (v5)
	{
		a1[1] = v4;
		v7 = a1 + 2;
		*v7 = *v4;
		*v4 = a1;
		if (*v7)
			*(_QWORD*)(*v7 + 8i64) = v7;
	}
	if ((*(int(__fastcall**)(_QWORD, const wchar_t*, _QWORD*, _QWORD))(*(_QWORD*)a1[4] + 40i64))(
		a1[4],
		L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_ClickVolume_000.m3",
		a1 + 6,
		0i64) >= 0)
	{
		v9 = a1[6];
		v11 = 150i64;
		v12 = 1065353216;
		v13 = 0i64;
		v14 = 0i64;
		v15 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v11);
		if (a2)
		{
			v10 = *(_QWORD*)(a2 + 1160);
			if (v10)
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v10 + 896i64))(v10, 71i64, a1[6]);
		}
		return 0i64;
	}
	else
	{
		a1[5] = 1i64;
		return 0i64;
	}
}
// 140B50180: using guessed type wchar_t aArtPropMffortu_1[54];

