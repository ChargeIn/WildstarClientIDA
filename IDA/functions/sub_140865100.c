#include "../winhttp.h"

//----- (0000000140865100) ----------------------------------------------------
__int64 __fastcall sub_140865100(__int64 a1, __int64 a2, float* a3, char a4, __int64* a5, unsigned __int64 a6)
{
	float v6; // xmm0_4
	_DWORD* v9; // rbx
	_DWORD* i; // rax
	unsigned __int64 v12; // rsi
	unsigned int v13; // edx
	unsigned int v14; // edx
	double v15; // xmm0_8
	float v16; // xmm2_4
	__int128 v18; // [rsp+30h] [rbp-38h] BYREF
	int v19; // [rsp+70h] [rbp+8h] BYREF
	int v20; // [rsp+78h] [rbp+10h] BYREF
	char v21; // [rsp+88h] [rbp+20h] BYREF

	v9 = *(_DWORD**)(a1 + 32);
	for (i = *(_DWORD**)(a1 + 40); v9 != i; v9 += 10)
	{
		if (*v9 == *(_DWORD*)(a2 + 24))
			break;
	}
	v12 = a6;
	if ((a4 & 1) != 0 && (*(_BYTE*)(a1 + 56) & 1) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 0, a6);
		v6 = v6 + *a3;
		*a3 = v6;
	}
	if ((a4 & 2) != 0 && (*(_DWORD*)(a1 + 56) & 4) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 2, v12);
		v6 = v6 + a3[2];
		a3[2] = v6;
	}
	if ((a4 & 4) != 0 && (*(_DWORD*)(a1 + 56) & 8) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 3, v12);
		a3[3] = v6 + a3[3];
	}
	v13 = *(_DWORD*)(a1 + 72);
	if (v13 && *((_QWORD*)v9 + 3))
	{
		v21 = 1;
		if (sub_140836940(qword_140C61BB0, v13, v12, &v19, (bool*)&v21))
		{
			LODWORD(v15) = v19;
		}
		else
		{
			v14 = *(_DWORD*)(a1 + 72);
			v21 = 0;
			v15 = sub_1408362F0(qword_140C61BB0, v14, 0i64);
			v19 = LODWORD(v15);
		}
		v16 = sub_140835CA0(v9 + 6, *(float*)&v15, 0, &v20);
		if (v16 != 1.0 || v21)
		{
			*(_QWORD*)&v18 = a1;
			DWORD2(v18) = DWORD2(v18) & 0xFFFFFFFC | (v21 == 0);
			sub_14084F8A0(a5, &v18, v16);
		}
	}
	return 1i64;
}
// 14086515A: variable 'v6' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

