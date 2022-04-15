#include "../winhttp.h"

//----- (00000001404C7710) ----------------------------------------------------
__int64 __fastcall sub_1404C7710(__int64 a1, unsigned __int64 a2)
{
	_QWORD* v2; // r9
	_QWORD* v3; // r8
	_QWORD* v4; // rax
	_QWORD* v6; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD**)(a1 + 56);
	v3 = v2;
	v4 = (_QWORD*)v2[1];
	while (v4)
	{
		if (v4[4] < a2)
		{
			v4 = (_QWORD*)v4[3];
		}
		else
		{
			v3 = v4;
			v4 = (_QWORD*)v4[2];
		}
	}
	if (v3 == v2 || (v6 = v3, a2 < v3[4]))
		v6 = *(_QWORD**)(a1 + 56);
	if (v6 == v2)
		return 0i64;
	else
		return v6[5];
}

