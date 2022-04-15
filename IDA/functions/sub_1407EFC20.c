//----- (00000001407EFC20) ----------------------------------------------------
double __fastcall sub_1407EFC20(
	__int64 a1,
	__int16 a2,
	__int64 a3,
	int a4,
	char a5,
	unsigned int a6,
	__int64 a7,
	__int64 a8,
	int a9)
{
	BOOL v13; // eax
	__int64 v14; // r9
	__int64 v15; // xmm6_8
	__int64 v17; // [rsp+48h] [rbp-A1h] BYREF
	double v18[2]; // [rsp+50h] [rbp-99h] BYREF
	_QWORD v19[8]; // [rsp+68h] [rbp-81h] BYREF
	unsigned int v20; // [rsp+A8h] [rbp-41h]

	v17 = sub_1407F65B0(8064, 65472);
	*(_QWORD*)&v18[1] = a3;
	*(_QWORD*)&v18[0] = a3;
	v13 = sub_1407EFB64(a5, v17);
	v15 = a8;
	if (!v13)
	{
		if (a9 == 2)
		{
			v19[6] = a8;
			v20 = v20 & 0xFFFFFFE0 | 3;
		}
		sub_1407F6134((ULONG_PTR)v19, &v17, a5, a2, &a7, v18);
	}
	if (!dword_140C106B4 && a4)
		return sub_1407EFAFC(a4, a6, a1, v14, v15, v18[0], v17);
	sub_1407F648C(a4);
	sub_1407F65B0(v17, 65472);
	return v18[0];
}
// 1407EFD02: variable 'v14' is possibly undefined
// 140C106B4: using guessed type int dword_140C106B4;
// 1407EFC20: using guessed type double var_C8[2];

