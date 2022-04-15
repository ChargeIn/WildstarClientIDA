#include "../winhttp.h"

//----- (000000014043F470) ----------------------------------------------------
__int64 __fastcall sub_14043F470(_QWORD* a1, _DWORD* a2)
{
	__int64 v3; // rbx
	unsigned __int64 v5; // r12
	__int64 v6; // r15
	__int64 v7; // rax
	__int64* v8; // rdi

	v3 = 0i64;
	v5 = 8 * ((unsigned int)*a2 % (unsigned __int64)((__int64)(a1[3] - a1[2]) >> 3));
	v6 = *(_QWORD*)(v5 + a1[2]);
	if (!v6)
		return v3;
	v7 = *(_QWORD*)v6;
	v8 = *(__int64**)(v5 + a1[2]);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 8) == *a2)
		{
			*v8 = *(_QWORD*)v7;
			sub_14018B900(v7, 0);
			v7 = *v8;
			++v3;
			--a1[5];
		}
		else
		{
			v8 = (__int64*)v7;
			v7 = *(_QWORD*)v7;
		}
	}
	if (*(_DWORD*)(v6 + 8) != *a2)
		return v3;
	*(_QWORD*)(v5 + a1[2]) = *(_QWORD*)v6;
	sub_14018B900(v6, 0);
	--a1[5];
	return v3 + 1;
}

