//----- (00000001406BB870) ----------------------------------------------------
__int64 __fastcall sub_1406BB870(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // r8
	unsigned int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__m128i v10; // xmm0
	__int64 v11; // rcx
	__int64 result; // rax
	__int64 v13; // [rsp+38h] [rbp+10h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_15;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_15;
	v4 = *(_QWORD*)(v3 + 8);
	if (!v4)
		goto LABEL_15;
	v5 = *(_QWORD*)(qword_140C65A38 + 160);
	v6 = **(_DWORD**)(v4 + 8);
	v7 = *(_QWORD*)(v5 + 8);
	v8 = v5;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v6)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == v5 || (v13 = v8, v6 < *(_DWORD*)(v8 + 32)))
		v13 = *(_QWORD*)(qword_140C65A38 + 160);
	if (v13 != v5 && (v9 = *(_QWORD*)(v13 + 40)) != 0)
	{
		v10 = _mm_cvtsi32_si128(*(_DWORD*)(v9 + 36));
		v11 = a1[2];
		result = 1i64;
		*(_DWORD*)(v11 + 8) = 3;
		*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
		a1[2] += 16i64;
	}
	else
	{
	LABEL_15:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65A38: using guessed type __int64 qword_140C65A38;

