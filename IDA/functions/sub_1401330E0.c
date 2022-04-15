#include "../winhttp.h"

//----- (00000001401330E0) ----------------------------------------------------
void __fastcall sub_1401330E0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // esi
	_BYTE* v4; // rdx
	__int64 v5; // r9
	bool v6; // zf
	unsigned int v7; // eax
	_BYTE* v8; // rdx
	__int64 v9; // rcx
	int v10; // eax
	int v11; // edx
	int v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v14)(); // [rsp+30h] [rbp-18h]
	__int64 v15; // [rsp+38h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 24);
	if (!v2 || !*(_DWORD*)(a1 + 72))
		return;
	if (qword_140C63728)
	{
		v3 = *(_DWORD*)(qword_140C63728 + 232) - *(_DWORD*)(a1 + 100);
		if (v3 < 0)
			v3 = 0;
	}
	else
	{
		v3 = 0;
	}
	v4 = *(_BYTE**)(a1 + 40);
	v5 = (unsigned int)(v3 + *(_DWORD*)(a1 + 68));
	*(_DWORD*)(a1 + 84) = 1;
	sub_1400EA3E0(v2, v4, "i", v5);
	v6 = *(_QWORD*)(a1 + 112) == 0i64;
	*(_DWORD*)(a1 + 84) = 0;
	if (!v6)
		return;
	if (!*(_DWORD*)(a1 + 76) || !*(_DWORD*)(a1 + 72))
	{
	LABEL_18:
		*(_DWORD*)(a1 + 72) = 0;
		return;
	}
	v6 = *(_DWORD*)(a1 + 80) == 0;
	v7 = *(_DWORD*)(a1 + 64);
	*(_DWORD*)(a1 + 68) = v7;
	if (v6)
	{
	LABEL_17:
		v11 = *(_DWORD*)(a1 + 68);
		v14 = sub_1401330E0;
		v12 = 0;
		v13 = a1;
		v15 = 0i64;
		sub_140195960(a1 + 96, v11, (__int64)&v12, 4);
		return;
	}
	*(_DWORD*)(a1 + 88) += v3;
	if (*(_DWORD*)(a1 + 88) < v7)
	{
	LABEL_16:
		v10 = *(_DWORD*)(a1 + 88);
		*(_DWORD*)(a1 + 88) = 0;
		*(_DWORD*)(a1 + 68) -= v10;
		goto LABEL_17;
	}
	while (1)
	{
		v8 = *(_BYTE**)(a1 + 40);
		v9 = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 88) -= *(_DWORD*)(a1 + 64);
		*(_DWORD*)(a1 + 84) = 1;
		sub_1400EA3E0(v9, v8, byte_1409D8A2C, 0i64);
		v6 = *(_QWORD*)(a1 + 112) == 0i64;
		*(_DWORD*)(a1 + 84) = 0;
		if (!v6)
			break;
		if (!*(_DWORD*)(a1 + 76) || !*(_DWORD*)(a1 + 72))
			goto LABEL_18;
		if (*(_DWORD*)(a1 + 88) < *(_DWORD*)(a1 + 64))
			goto LABEL_16;
	}
}
// 1409D8A2C: using guessed type _BYTE byte_1409D8A2C[80];
// 140C63728: using guessed type __int64 qword_140C63728;

