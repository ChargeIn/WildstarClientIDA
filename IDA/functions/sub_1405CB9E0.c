//----- (00000001405CB9E0) ----------------------------------------------------
__int64 __fastcall sub_1405CB9E0(__int64 a1, __int64 a2, _DWORD* a3)
{
	int v4; // edx
	int v5; // eax
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // eax
	int v11[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v12; // [rsp+28h] [rbp-30h]
	int v13; // [rsp+30h] [rbp-28h]
	int v14; // [rsp+34h] [rbp-24h]
	__int64 v15; // [rsp+38h] [rbp-20h]
	int v16; // [rsp+40h] [rbp-18h]
	int v17; // [rsp+44h] [rbp-14h]
	int v18; // [rsp+48h] [rbp-10h]

	*(_QWORD*)a1 = a2;
	*(_DWORD*)(a1 + 8) = a3[5];
	sub_1407E4830(v11, 0i64, 0x2Cui64);
	v4 = a3[2];
	v17 = a3[5];
	v14 = a3[3];
	v5 = a3[4];
	v6 = 0;
	v11[1] = v4;
	v18 = 0;
	v11[0] = v5;
	v7 = sub_1403D90D0(qword_140C65898, v4);
	if (v7)
	{
		v12 = *(_QWORD*)(v7 + 4576);
		v13 = *(_DWORD*)(v7 + 4584);
	}
	else
	{
		v12 = 0i64;
		v13 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
	}
	v8 = sub_1403D90D0(qword_140C65898, a3[3]);
	if (v8)
	{
		v15 = *(_QWORD*)(v8 + 4576);
		v16 = *(_DWORD*)(v8 + 4584);
	}
	else
	{
		v15 = 0i64;
		v16 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
	}
	v9 = sub_140600E10(qword_140C65BB0, (unsigned int*)v11);
	if (v9 < 0)
		return (unsigned int)v9;
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BB0: using guessed type __int64 qword_140C65BB0;

