#include "../winhttp.h"

//----- (00000001403C0620) ----------------------------------------------------
__int64 __fastcall sub_1403C0620(__int64 a1, unsigned int a2, int a3)
{
	__int64 v4; // rax
	__int64 v5; // rbp
	__int64 v7; // rdi
	_DWORD* i; // rbx

	v4 = sub_140564F40(qword_140C65B70, a2, a3);
	v5 = v4;
	if (!v4)
		return 5i64;
	v7 = 0i64;
	for (i = (_DWORD*)(v4 + 28); !*i || (int)COERCE_FLOAT(sub_140466520(*(_QWORD*)(a1 + 120), *(i - 2))) >= *i; ++i)
	{
		if ((unsigned __int64)++v7 >= 2)
			return 0i64;
	}
	return sub_1403D3650(*(_QWORD*)(a1 + 120), *(_DWORD*)(v5 + 4 * v7 + 20));
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

