//----- (000000014054DBC0) ----------------------------------------------------
float __fastcall sub_14054DBC0(__int64 a1)
{
	_DWORD* v1; // r8
	int v2; // edx
	int v3; // edx
	unsigned int v4; // eax
	int v5; // r8d
	float result; // xmm0_4
	unsigned int v7; // edx
	int v8; // r8d
	int v9; // edx
	unsigned int v10; // eax
	int v11; // [rsp+20h] [rbp-18h]

	if (*(_DWORD*)(a1 + 128))
		return 1.0;
	v1 = *(_DWORD**)(a1 + 48);
	if ((v1[17] & 0x100) != 0 || !v1[10])
		return 1.0;
	v2 = *(_DWORD*)(a1 + 36);
	if (!v2)
	{
		v10 = v1[11];
		v8 = 100;
		if (v10 > 0x64)
			v8 = v10;
		v9 = dword_140C636A8 - *(_DWORD*)(a1 + 76);
		goto LABEL_15;
	}
	v3 = v2 - 1;
	if (!v3)
	{
		v7 = v1[11];
		if (v7 >= 0x64)
			return 1.0;
		v8 = 100 - v7;
		v9 = dword_140C636A8 + v7 - *(_DWORD*)(a1 + 76);
	LABEL_15:
		LODWORD(result) = sub_14054DCA0(a1, v9, 0.1, COERCE_DOUBLE(1065353216i64), v11, v8).m128_u32[0];
		return result;
	}
	if (v3 != 1)
		return 1.0;
	v4 = v1[12];
	v5 = 100;
	if (v4 > 0x64)
		v5 = v4;
	LODWORD(result) = sub_14054DCA0(
		a1,
		dword_140C636A8 - *(_DWORD*)(a1 + 76),
		1.0,
		COERCE_DOUBLE(1036831949i64),
		v11,
		v5).m128_u32[0];
	return result;
}
// 14054DC30: variable 'v11' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;

