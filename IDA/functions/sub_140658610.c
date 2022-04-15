//----- (0000000140658610) ----------------------------------------------------
__int64 __fastcall sub_140658610(__int64 a1)
{
	int* v2; // rax
	_DWORD* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rcx
	__m128i v7; // xmm0

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2)
		v3 = (_DWORD*)sub_1403D90D0(qword_140C65898, *v2);
	else
		v3 = 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4 || !v3 || v3[32] != 17 || (~(v3[10] >> 3) & 1) == 0 || !(unsigned int)sub_14045A950(v4, v3[2]))
		goto LABEL_13;
	if (v3[1387] + 1 < 3)
	{
		v5 = sub_1402081A0(v3[1388]);
		if (v5)
		{
			v6 = *(_QWORD*)(a1 + 16);
			v7 = _mm_cvtsi32_si128(*(_DWORD*)(v5 + 4i64 * (int)v3[1387] + 16));
			*(_DWORD*)(v6 + 8) = 3;
			*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
			goto LABEL_14;
		}
	LABEL_13:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		goto LABEL_14;
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
LABEL_14:
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

