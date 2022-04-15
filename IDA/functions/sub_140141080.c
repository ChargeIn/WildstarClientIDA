#include "../winhttp.h"

//----- (0000000140141080) ----------------------------------------------------
void __fastcall sub_140141080(__int64 a1)
{
	_QWORD* v1; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	_QWORD* v5; // rax
	__int64 v6; // rcx

	v1 = *(_QWORD**)(a1 + 768);
	if ((_QWORD*)*v1 != v1)
	{
		sub_140140FF0(a1 + 704, (int*)(v1[1] + 16i64));
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 768) + 8i64);
		v4 = *(_QWORD*)v3;
		v5 = *(_QWORD**)(v3 + 8);
		*v5 = *(_QWORD*)v3;
		*(_QWORD*)(v4 + 8) = v5;
		v6 = *(_QWORD*)(v3 + 32);
		if (v6)
			sub_14018B900(v6, 0);
		sub_1401429A0(qword_140C63678, *(_DWORD*)(v3 + 16));
		sub_14018B900(v3, 0);
	}
}
// 140C63678: using guessed type __int64 qword_140C63678;

