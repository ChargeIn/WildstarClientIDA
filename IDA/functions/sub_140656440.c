#include "../winhttp.h"

//----- (0000000140656440) ----------------------------------------------------
__int64 __fastcall sub_140656440(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	bool v8; // zf
	__int64 v9; // rax
	__int64 result; // rax
	__int64 v11; // rcx
	__int64 v12; // r8
	__m128i v13; // xmm0

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		return 0i64;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	v4 = v3;
	if (!v3)
		return 0i64;
	v5 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v3 + 5632));
	if (v5)
		goto LABEL_12;
	v6 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 120) == v4)
	{
		v7 = sub_14039DF50(qword_140C65898);
		if (!v7 || (v5 = sub_1404695E0(v7)) == 0)
		{
			v6 = qword_140C65898;
			goto LABEL_8;
		}
	LABEL_12:
		v11 = *(_QWORD*)(v5 + 312);
		v12 = *(_QWORD*)(a1 + 16);
		result = 1i64;
		v13 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v11 + 112) + 44i64));
		*(_DWORD*)(v12 + 8) = 3;
		*(_QWORD*)v12 = *(_OWORD*)&_mm_cvtepi32_pd(v13);
		*(_QWORD*)(a1 + 16) += 16i64;
		return result;
	}
LABEL_8:
	v8 = *(_DWORD*)(v6 + 6864) == 0;
	v9 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v9 + 8) = 3;
	if (v8)
		*(_QWORD*)v9 = 0i64;
	else
		*(_QWORD*)v9 = 0x3FF0000000000000i64;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

