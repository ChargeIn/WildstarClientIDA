#include "../winhttp.h"

//----- (00000001407EFD48) ----------------------------------------------------
float __fastcall sub_1407EFD48(
	__int64 a1,
	__int16 a2,
	int a3,
	int a4,
	char a5,
	unsigned int a6,
	int a7,
	float a8,
	int a9)
{
	BOOL v13; // eax
	__int64 v14; // r9
	float v15; // xmm6_4
	__int64 v17; // [rsp+48h] [rbp-A1h] BYREF
	__int64 v18; // [rsp+50h] [rbp-99h] BYREF
	int v19; // [rsp+58h] [rbp-91h]
	_DWORD v20[16]; // [rsp+68h] [rbp-81h] BYREF
	unsigned int v21; // [rsp+A8h] [rbp-41h]

	v18 = sub_1407F65B0(8064, 65472);
	v19 = a3;
	LODWORD(v17) = a3;
	v13 = sub_1407EFB64(a5, v18);
	v15 = a8;
	if (!v13)
	{
		if (a9 == 2)
		{
			*(float*)&v20[12] = a8;
			v21 = v21 & 0xFFFFFFE0 | 1;
		}
		sub_1407F6460((ULONG_PTR)v20, &v18, a5, a2, &a7, &v17);
	}
	if (!dword_140C106B4 && a4)
		return sub_1407EFAFC(a4, a6, a1, v14, COERCE__INT64(v15), *(float*)&v17, v18);
	sub_1407F648C(a4);
	sub_1407F65B0(v18, 65472);
	return *(float*)&v17;
}
// 1407EFE32: variable 'v14' is possibly undefined
// 140C106B4: using guessed type int dword_140C106B4;

