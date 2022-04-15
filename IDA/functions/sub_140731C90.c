#include "../winhttp.h"

//----- (0000000140731C90) ----------------------------------------------------
__int64 __fastcall sub_140731C90(__int64 a1)
{
	int v1; // r10d
	__int64 v3; // rax
	__int64 v4; // rdx
	_DWORD* v5; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = 0i64;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
			if (*(_DWORD*)(v4 + 16) == 7)
				break;
			if (++v3 >= (unsigned __int64)qword_140C7DE20)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		v4 = 0i64;
	}
	v5 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	LOBYTE(v1) = v4 != 0;
	v5[2] = 1;
	*v5 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

