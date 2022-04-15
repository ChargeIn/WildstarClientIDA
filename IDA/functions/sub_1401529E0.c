#include "../winhttp.h"

//----- (00000001401529E0) ----------------------------------------------------
_QWORD* __fastcall sub_1401529E0(__int64 a1, _QWORD* a2, __int64 a3)
{
	_QWORD* v3; // rsi
	_QWORD* v5; // rbx
	_QWORD* v7; // rdi
	unsigned __int16* v8; // r12
	__int64 v9; // r15
	_QWORD* v11; // [rsp+50h] [rbp+8h]

	v3 = *(_QWORD**)(a1 + 8);
	v5 = (_QWORD*)v3[1];
	v7 = v3;
	if (v5)
	{
		v8 = *(unsigned __int16**)(a3 + 8);
		v9 = *(_QWORD*)(a3 + 16);
		do
		{
			if ((int)sub_1400454D0(v5[5], v5[6], v8, v9) < 0)
			{
				v5 = (_QWORD*)v5[3];
			}
			else
			{
				v7 = v5;
				v5 = (_QWORD*)v5[2];
			}
		} while (v5);
	}
	if (v7 == v3
		|| (v11 = v7, (int)sub_1400454D0(*(_QWORD*)(a3 + 8), *(_QWORD*)(a3 + 16), (unsigned __int16*)v7[5], v7[6]) < 0))
	{
		v11 = v3;
	}
	*a2 = v11;
	return a2;
}

