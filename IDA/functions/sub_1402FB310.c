//----- (00000001402FB310) ----------------------------------------------------
__m256* __fastcall sub_1402FB310(__int64 a1, int a2, int a3)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v7; // r9
	__int64 v8; // rdx
	__int64 v9; // rsi
	void* v11; // rax
	int v12[6]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v13; // [rsp+50h] [rbp+8h] BYREF

	v3 = *(_QWORD*)a1;
	v4 = a2;
	v12[0] = -1;
	(*(void(__fastcall**)(__int64, int*, _QWORD))(v3 + 16))(a1, v12, 0i64);
	if ((_DWORD)v4
		&& (v7 = *(_QWORD*)(a1 + 64), (unsigned int)v4 < *(_DWORD*)(v7 + 624))
		&& (v8 = *(unsigned __int16*)(*(_QWORD*)(v7 + 632) + 2 * v4), (unsigned int)v8 < *(_DWORD*)(v7 + 608))
		&& (v9 = *(_QWORD*)(v7 + 616) + 4 * v8) != 0)
	{
		if (a3 || *(_DWORD*)(a1 + 1400) - *(_DWORD*)(*(_QWORD*)(a1 + 16) + 224i64) < 0)
			sub_140300DD0(a1, 8u);
		return (__m256*)(*(_QWORD*)(a1 + 824) + ((unsigned __int64)*(unsigned __int16*)(v9 + 2) << 6));
	}
	else
	{
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1))
			v11 = (void*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
		else
			v11 = &unk_1409E640C;
		v13 = 0x141DEB980i64;
		sub_1401A3130(6, 0, &v13, (unsigned int)v4, v11);
		return &ymmword_140C78390;
	}
}
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 1402FB310: using guessed type int var_18[6];

