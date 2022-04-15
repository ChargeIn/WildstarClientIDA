#include "../winhttp.h"

//----- (00000001404361D0) ----------------------------------------------------
__int64 __fastcall sub_1404361D0(__int64 a1)
{
	int v1; // edx
	int v3; // eax
	__int64 v4; // rax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax

	v1 = 0;
	if (*(_DWORD*)(qword_140C658C0 + 40) != 4)
	{
		v4 = *(_QWORD*)(qword_140C658C0 + 32);
		if (!v4)
		{
		LABEL_6:
			v3 = 1;
			goto LABEL_7;
		}
		while (*(_DWORD*)(v4 + 40) == 4)
		{
			v4 = *(_QWORD*)(v4 + 32);
			if (!v4)
				goto LABEL_6;
		}
	}
	v3 = 0;
LABEL_7:
	v5 = *(_DWORD**)(a1 + 16);
	v6 = v3 == 0;
	result = 1i64;
	LOBYTE(v1) = !v6;
	v5[2] = 1;
	*v5 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C658C0: using guessed type __int64 qword_140C658C0;

