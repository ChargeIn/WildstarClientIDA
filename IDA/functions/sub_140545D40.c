#include "../winhttp.h"

//----- (0000000140545D40) ----------------------------------------------------
char __fastcall sub_140545D40(__int64 a1, int a2, unsigned int* a3, int a4, __int128* a5, int* a6, int a7)
{
	__int64 v11; // rax
	int v12; // ebp
	int* v13; // rcx
	int* v14; // rdx
	__int64 v15; // rax
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	__int128 v18; // xmm0
	__int128 v19; // xmm1
	__int128 v20; // xmm0
	__int128 v21; // xmm1
	__int128 v22; // xmm0
	__int128 v23; // xmm1
	__int128 v24; // xmm1
	__int64 v25; // rax
	__int128 v26; // xmm0
	__int128 v27; // xmm1
	__int128 v28; // xmm0
	__int128 v29; // xmm1
	__int128 v30; // xmm0
	int v31; // eax
	__int64 v32; // rdx
	float v33; // xmm7_4
	__int64 v34; // rax
	float v35; // xmm6_4
	int v36; // eax
	__int64 v37; // rcx
	__int128 v39; // [rsp+80h] [rbp-148h] BYREF
	int v40[19]; // [rsp+90h] [rbp-138h] BYREF
	unsigned int v41; // [rsp+DCh] [rbp-ECh]
	int v42; // [rsp+E0h] [rbp-E8h]

	v39 = *a5;
	v11 = sub_1403D90D0(qword_140C65898, a4);
	if (v11)
	{
		v12 = 0;
		v39 = *(_OWORD*)(v11 + 4576);
	}
	else
	{
		v12 = a7;
	}
	v13 = v40;
	v14 = a6;
	if ((((unsigned __int8)v40 | (unsigned __int8)a6) & 0xF) != 0)
	{
		sub_1407DB590(v40, a6, 0xF8ui64);
	}
	else
	{
		v15 = 1i64;
		do
		{
			v16 = *(_OWORD*)v14;
			v17 = *((_OWORD*)v14 + 1);
			v13 += 32;
			v14 += 32;
			*((_OWORD*)v13 - 8) = v16;
			v18 = *((_OWORD*)v14 - 6);
			*((_OWORD*)v13 - 7) = v17;
			v19 = *((_OWORD*)v14 - 5);
			*((_OWORD*)v13 - 6) = v18;
			v20 = *((_OWORD*)v14 - 4);
			*((_OWORD*)v13 - 5) = v19;
			v21 = *((_OWORD*)v14 - 3);
			*((_OWORD*)v13 - 4) = v20;
			v22 = *((_OWORD*)v14 - 2);
			*((_OWORD*)v13 - 3) = v21;
			v23 = *((_OWORD*)v14 - 1);
			*((_OWORD*)v13 - 2) = v22;
			*((_OWORD*)v13 - 1) = v23;
			--v15;
		} while (v15);
		v24 = *((_OWORD*)v14 + 1);
		v25 = *((_QWORD*)v14 + 14);
		*(_OWORD*)v13 = *(_OWORD*)v14;
		v26 = *((_OWORD*)v14 + 2);
		*((_OWORD*)v13 + 1) = v24;
		v27 = *((_OWORD*)v14 + 3);
		*((_OWORD*)v13 + 2) = v26;
		v28 = *((_OWORD*)v14 + 4);
		*((_OWORD*)v13 + 3) = v27;
		v29 = *((_OWORD*)v14 + 5);
		*((_OWORD*)v13 + 4) = v28;
		v30 = *((_OWORD*)v14 + 6);
		*((_OWORD*)v13 + 5) = v29;
		*((_OWORD*)v13 + 6) = v30;
		*((_QWORD*)v13 + 14) = v25;
	}
	v31 = a6[1] - 1;
	if ((v31 & 0xFFFFFFFD) == 0)
		v42 |= 8u;
	if ((a6[20] & 0x800) == 0
		|| (v32 = *(_QWORD*)(qword_140C65898 + 120)) != 0
		&& ((v31 = a2 == *(_DWORD*)(v32 + 8)) != 0 || (LOBYTE(v31) = a4 == *(_DWORD*)(v32 + 8), v31)))
	{
		v33 = 1.0;
		v34 = sub_1403D90D0(qword_140C65898, a2);
		if (v34)
		{
			v35 = *(float*)(v34 + 3724);
			v33 = sub_14047A940((_QWORD*)v34) * v35;
		}
		if (v41)
			v36 = sub_140542E70(a1, 0, v41, 0);
		else
			v36 = 0;
		v31 = sub_1406008C0(
			(__int64)&ymmword_140C78390,
			(__int64)v40,
			0,
			*(_DWORD*)(a1 + 80),
			v36,
			a2,
			a3,
			(__int64)&ymmword_140C78390,
			a4,
			&v39,
			v33,
			0i64,
			0i64,
			(_QWORD*)(a1 + 456),
			0i64,
			v12);
		if (v31 >= 0)
		{
			sub_1403F9C60(v37, a1);
			LOBYTE(v31) = sub_140625A10(*(_QWORD*)(a1 + 456), *(float*)(a1 + 420));
		}
	}
	return v31;
}
// 140545EC0: conditional instruction was optimized away because rdx.8!=0
// 140545FB5: variable 'v37' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140545D40: using guessed type int var_138[19];

