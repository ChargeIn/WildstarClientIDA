#include "../winhttp.h"

//----- (00000001406D69A0) ----------------------------------------------------
__int64 __fastcall sub_1406D69A0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	int v4; // ecx
	__int64 v5; // rdx
	int v6; // ecx
	int v7; // ecx
	__m128i v8; // xmm0
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = sub_1400D6530(a1, 1);
	v3 = v2;
	if (!v2 || (*(_DWORD*)(v2 + 432) & 0x20000000) == 0)
		v3 = 0i64;
	v4 = 1;
	if (v3)
		v4 = *(_DWORD*)(v3 + 1100);
	v5 = qword_140C65898 + 160;
	if (v4)
	{
		v6 = v4 - 1;
		if (!v6)
			goto LABEL_12;
		v7 = v6 - 1;
		if (!v7)
		{
			v5 = qword_140C65898 + 208;
			goto LABEL_13;
		}
		if (v7 != 8)
		{
		LABEL_12:
			v5 = qword_140C65898 + 184;
			goto LABEL_13;
		}
		v5 = qword_140C65898 + 232;
	}
LABEL_13:
	v8 = _mm_cvtsi32_si128(*(_DWORD*)(v5 + 12));
	v9 = *(_QWORD*)(a1 + 16);
	result = 1i64;
	*(_DWORD*)(v9 + 8) = 3;
	*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

