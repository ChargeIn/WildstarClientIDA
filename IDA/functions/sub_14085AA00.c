#include "../winhttp.h"

//----- (000000014085AA00) ----------------------------------------------------
__int64 __fastcall sub_14085AA00(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // edx
	_DWORD* v4; // rax
	char v5; // cl
	__int64 v6; // rax

	v1 = *(_QWORD*)(a1 + 48);
	if (v1)
	{
		v3 = 0;
		v4 = (_DWORD*)(v1 + 4);
		while (!*v4)
		{
			++v3;
			v4 += 2;
			if (v3 >= 4)
				goto LABEL_5;
		}
		goto LABEL_11;
	}
LABEL_5:
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1) == 12
		|| *(_DWORD*)(a1 + 164)
		|| (v5 = *(_BYTE*)(a1 + 91), (v5 & 4) != 0))
	{
	LABEL_11:
		v6 = qword_140C62458;
		goto LABEL_12;
	}
	v6 = qword_140C62458;
	if (a1 == qword_140C62458 || (v5 & 8) == 0)
		return sub_140852D20(a1);
LABEL_12:
	if (a1 == v6)
		return sub_140852D20(a1);
	return a1;
}
// 140C62458: using guessed type __int64 qword_140C62458;

