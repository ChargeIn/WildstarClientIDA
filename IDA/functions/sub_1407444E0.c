#include "../winhttp.h"

//----- (00000001407444E0) ----------------------------------------------------
__int64 __fastcall sub_1407444E0(_QWORD* a1)
{
	unsigned int v2; // ebx
	int v3; // eax
	int v4; // eax
	BOOL* v5; // rdx
	BOOL v6; // ecx
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u) - 1;
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140601DF0(qword_140C65898 + 27664, v2, (unsigned int)(v3 - 1));
	v5 = (BOOL*)a1[2];
	v5[2] = 1;
	v6 = v4 != 0;
	result = 1i64;
	*v5 = v6;
	a1[2] += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

