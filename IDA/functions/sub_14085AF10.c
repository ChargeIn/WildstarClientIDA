#include "../winhttp.h"

//----- (000000014085AF10) ----------------------------------------------------
char __fastcall sub_14085AF10(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // edx
	_DWORD* v4; // rax
	char v5; // cl

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
	}
	else
	{
	LABEL_5:
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1) != 12 && !*(_DWORD*)(a1 + 164))
		{
			v5 = *(_BYTE*)(a1 + 91);
			if ((v5 & 4) == 0 && a1 != qword_140C62458 && (v5 & 8) == 0)
				return 0;
		}
	}
	return 1;
}
// 140C62458: using guessed type __int64 qword_140C62458;

