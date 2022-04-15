//----- (0000000140049A80) ----------------------------------------------------
__int64 __fastcall sub_140049A80(
	__int64 a1,
	unsigned int a2,
	unsigned int a3,
	int a4,
	float a5,
	float a6,
	int a7,
	int a8)
{
	__int64 v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rdx
	unsigned int v15; // edi
	unsigned int v16; // r14d
	int v18; // ecx
	int v19; // ecx
	int v20; // eax
	__int64 v21; // rax
	int v22[6]; // [rsp+20h] [rbp-68h] BYREF
	__int64 v23; // [rsp+38h] [rbp-50h]

	v11 = a2;
	v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 328i64))(*(_QWORD*)(a1 + 24));
	v13 = v12;
	if ((unsigned int)v11 >= 4
		|| v12 && (_DWORD)v11 && !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v12 + 408i64))(v12, a3))
	{
		return 2147500037i64;
	}
	v14 = 3 * v11;
	*(_DWORD*)(a1 + 24 * v11 + 5112) = a7;
	*(_DWORD*)(a1 + 8 * v14 + 5104) = a3;
	*(float*)(a1 + 8 * v14 + 5120) = a5;
	*(_DWORD*)(a1 + 8 * v14 + 5108) = a4;
	*(_DWORD*)(a1 + 8 * v14 + 5124) = 0;
	*(_DWORD*)(a1 + 8 * v14 + 5116) = a8;
	if (!v13)
		return 0i64;
	v15 = 0;
	v16 = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
	if (a6 <= 0.0)
	{
	LABEL_18:
		v20 = 2;
		if (a5 == 0.0)
			v20 = 3;
		v22[5] = v20;
		v21 = *(_QWORD*)v13;
		*(float*)&v22[2] = a5;
		v22[0] = a3;
		v22[1] = v16;
		v22[3] = v15;
		v22[4] = a4;
		v23 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, int*))(v21 + 584))(v13, (unsigned int)v11, v22);
		return 0i64;
	}
	if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v13 + 408i64))(v13, a3))
	{
		v18 = *(_DWORD*)((*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v13 + 424i64))(v13, a3, v16) + 20);
		if (v18)
		{
			v19 = v18 - 1;
			v15 = (int)(float)((float)v19 * a6);
			if (v15 > v19)
				v15 = v19;
		}
		if ((dword_140C8B440 & 1) == 0)
		{
			dword_140C8B440 |= 1u;
			sub_1401AD620((__int64)&unk_140C8B450, L"PreGame offset");
		}
		sub_1401ADA40((__int64)&unk_140C8B450, v15);
		if ((dword_140C8B440 & 2) == 0)
		{
			dword_140C8B440 |= 2u;
			sub_1401AD510((__int64)&unk_140C8B570, L"PreGame startingPercent");
		}
		sub_1401AD8F0((__int64)&unk_140C8B570, a6);
		goto LABEL_18;
	}
	return 2147500037i64;
}
// 1409FEE78: using guessed type wchar_t aPregameStartin[24];
// 1409FEEA8: using guessed type wchar_t aPregameOffset[15];
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C8B440: using guessed type int dword_140C8B440;

