//----- (0000000140017900) ----------------------------------------------------
__int64 __fastcall sub_140017900(__int64 a1)
{
	int v2; // eax
	int v3; // edi
	int v4; // eax
	HWND v5; // rcx
	unsigned __int64* v6; // rax
	int v7; // edx
	int* v8; // r9
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // r10
	unsigned __int64 v11; // rbp
	unsigned __int64 v12; // rsi
	int v13; // r8d
	unsigned __int64 v14; // r14
	int v15; // eax
	int v16; // eax
	int v17; // edx
	int v18; // eax
	int v19; // r8d
	int v20; // ecx
	int v21; // ecx
	int v22; // eax
	int v23; // eax
	int v24; // ecx
	int v25; // eax
	int v26; // eax
	int v27; // ecx
	__int64 v28; // rcx
	int v29; // ecx
	int v30; // ecx
	__int64 result; // rax
	int v32; // ecx
	__int64 v33; // [rsp+20h] [rbp-58h]
	__int64 v34; // [rsp+38h] [rbp-40h]
	unsigned __int64 v35; // [rsp+40h] [rbp-38h]
	unsigned __int64 v36; // [rsp+50h] [rbp-28h]

	v2 = dword_140C3B190;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B190)
		v2 = *(_DWORD*)qword_140C63750;
	if (*((_BYTE*)&dword_140C3B1A0 + v2))
	{
		v4 = dword_140C3B150;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B150)
			v4 = *(_DWORD*)qword_140C63750;
		v3 = (*((_BYTE*)&dword_140C3B160 + v4) != 0) + 3;
	}
	else
	{
		v3 = 2;
	}
	if (*(_DWORD*)(a1 + 72) != 4)
	{
		v5 = *(HWND*)(a1 + 8);
		*(_DWORD*)(a1 + 128) = 44;
		GetWindowPlacement(v5, (WINDOWPLACEMENT*)(a1 + 128));
		*(_DWORD*)(a1 + 64) |= 0x4000u;
	}
	v6 = (unsigned __int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 24i64))(qword_140C65670);
	v7 = dword_140C3B290;
	v8 = (int*)qword_140C63750;
	v9 = v6[1];
	v10 = *v6;
	v11 = v6[2];
	v12 = v6[4];
	v13 = *(_DWORD*)qword_140C63750;
	v14 = v6[3];
	v15 = dword_140C3B290;
	LODWORD(v34) = v9;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B290)
		v15 = *(_DWORD*)qword_140C63750;
	HIDWORD(v35) = HIDWORD(v11);
	HIDWORD(v36) = HIDWORD(v12);
	if (*((int*)&xmmword_140C3B2A0 + 2 * v15) <= 0)
		goto LABEL_25;
	if (v13 < dword_140C3B290)
		v7 = *(_DWORD*)qword_140C63750;
	if (*((int*)&xmmword_140C3B2A0 + 2 * v7 + 1) <= 0)
	{
	LABEL_25:
		*(_DWORD*)(a1 + 156) = (unsigned int)v10 / 0xA;
		*(_DWORD*)(a1 + 160) = HIDWORD(v10) / 0xA;
		*(_DWORD*)(a1 + 164) = 9 * (int)v10 / 0xAu;
		*(_DWORD*)(a1 + 168) = 9 * HIDWORD(v10) / 0xAu;
	}
	else
	{
		v16 = dword_140C3B210;
		if (v13 < dword_140C3B210)
			v16 = *(_DWORD*)qword_140C63750;
		v17 = *((_DWORD*)&xmmword_140C3B220 + 2 * v16);
		*(_DWORD*)(a1 + 156) = v17;
		v18 = dword_140C3B210;
		if (*v8 < dword_140C3B210)
			v18 = *v8;
		v19 = *((_DWORD*)&xmmword_140C3B220 + 2 * v18 + 1);
		*(_DWORD*)(a1 + 160) = v19;
		v20 = dword_140C3B290;
		if (*v8 < dword_140C3B290)
			v20 = *v8;
		*(_DWORD*)(a1 + 164) = v17 + *((_DWORD*)&xmmword_140C3B2A0 + 2 * v20);
		v21 = dword_140C3B290;
		if (*v8 < dword_140C3B290)
			v21 = *v8;
		*(_DWORD*)(a1 + 168) = v19 + *((_DWORD*)&xmmword_140C3B2A0 + 2 * v21 + 1);
	}
	v22 = dword_140C3B350;
	if (*v8 < dword_140C3B350)
		v22 = *v8;
	if (*((_BYTE*)&dword_140C3B360 + v22))
	{
		*(_DWORD*)(a1 + 172) = 2;
	}
	else
	{
		v23 = dword_140C3B310;
		if (*v8 < dword_140C3B310)
			v23 = *v8;
		v24 = 9;
		if (*((_BYTE*)&dword_140C3B320 + v23))
			v24 = 3;
		*(_DWORD*)(a1 + 172) = v24;
	}
	v25 = dword_140C3B350;
	if (*v8 < dword_140C3B350)
		v25 = *v8;
	if (!*((_BYTE*)&dword_140C3B360 + v25))
		goto LABEL_42;
	v26 = dword_140C3B310;
	if (*v8 < dword_140C3B310)
		v26 = *v8;
	if (*((_BYTE*)&dword_140C3B320 + v26))
		*(_DWORD*)(a1 + 132) = 2;
	else
		LABEL_42:
	*(_DWORD*)(a1 + 132) = 0;
	HIDWORD(v34) = 27;
	if (v3 == 4)
	{
		v27 = dword_140C66CD0;
		if (*v8 < dword_140C66CD0)
			v27 = *v8;
		v28 = 3i64 * v27;
		LODWORD(v33) = dword_140C66CE0[v28];
		HIDWORD(v33) = dword_140C66CE4[v28];
		if (v33 != qword_140C77780 || dword_140C66CE8[v28] != dword_140C77788)
		{
			v10 = __PAIR64__(dword_140C66CE4[v28], dword_140C66CE0[v28]);
			LODWORD(v35) = dword_140C66CE8[v28];
			v11 = v35;
		}
	}
	v29 = dword_140C3B1D0;
	if (*v8 < dword_140C3B1D0)
		v29 = *v8;
	if (*((_BYTE*)&dword_140C3B1E0 + v29))
	{
		LODWORD(v36) = v12 | 4;
		v12 = v36;
	}
	v30 = *(_DWORD*)(a1 + 64);
	if ((v30 & 1) == 0)
		return 2147500037i64;
	*(_QWORD*)(a1 + 80) = v10;
	*(_DWORD*)(a1 + 68) = v3;
	*(_QWORD*)(a1 + 88) = v34;
	*(_QWORD*)(a1 + 96) = v11;
	*(_QWORD*)(a1 + 104) = v14;
	*(_QWORD*)(a1 + 112) = v12;
	if (v3 == 4)
	{
		*(_DWORD*)(a1 + 112) |= 2u;
	}
	else
	{
		*(_DWORD*)(a1 + 112) &= ~2u;
		*(_DWORD*)(a1 + 96) = 0;
	}
	v32 = v30 | 0x40;
	*(_DWORD*)(a1 + 64) = v32;
	if ((v32 & 4) != 0 || (result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1), (int)result >= 0))
	{
		*(_DWORD*)(a1 + 5804) = 0;
		return 0i64;
	}
	return result;
}
// 140C3B150: using guessed type int dword_140C3B150;
// 140C3B160: using guessed type int dword_140C3B160;
// 140C3B190: using guessed type int dword_140C3B190;
// 140C3B1A0: using guessed type int dword_140C3B1A0;
// 140C3B1D0: using guessed type int dword_140C3B1D0;
// 140C3B1E0: using guessed type int dword_140C3B1E0;
// 140C3B210: using guessed type int dword_140C3B210;
// 140C3B220: using guessed type __int128 xmmword_140C3B220;
// 140C3B290: using guessed type int dword_140C3B290;
// 140C3B2A0: using guessed type __int128 xmmword_140C3B2A0;
// 140C3B310: using guessed type int dword_140C3B310;
// 140C3B320: using guessed type int dword_140C3B320;
// 140C3B350: using guessed type int dword_140C3B350;
// 140C3B360: using guessed type int dword_140C3B360;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C66CD0: using guessed type int dword_140C66CD0;
// 140C66CE0: using guessed type int dword_140C66CE0[];
// 140C66CE4: using guessed type int dword_140C66CE4[];
// 140C66CE8: using guessed type int dword_140C66CE8[];
// 140C77780: using guessed type __int64 qword_140C77780;
// 140C77788: using guessed type int dword_140C77788;

