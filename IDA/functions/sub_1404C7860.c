#include "../winhttp.h"

//----- (00000001404C7860) ----------------------------------------------------
__int64 __fastcall sub_1404C7860(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r9
	unsigned __int64 v3; // r8
	_QWORD* v4; // rax
	_QWORD* v5; // rdx
	__int64 v6; // rdx
	int v7; // eax
	unsigned int v8; // ecx
	_QWORD* v10; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD**)(a1 + 56);
	v3 = *(_QWORD*)(a2 + 8);
	v4 = (_QWORD*)v2[1];
	v5 = v2;
	while (v4)
	{
		if (v4[4] < v3)
		{
			v4 = (_QWORD*)v4[3];
		}
		else
		{
			v5 = v4;
			v4 = (_QWORD*)v4[2];
		}
	}
	if (v5 == v2 || (v10 = v5, v3 < v5[4]))
		v10 = *(_QWORD**)(a1 + 56);
	if (v10 == v2)
		return 2147500037i64;
	v6 = v10[5];
	if (!v6)
		return 2147500037i64;
	v7 = sub_1404C78E0(a1, v6);
	v8 = -2147467259;
	if (v7)
		return 0;
	return v8;
}

