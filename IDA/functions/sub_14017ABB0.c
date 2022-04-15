#include "../winhttp.h"

//----- (000000014017ABB0) ----------------------------------------------------
__int64 __fastcall sub_14017ABB0(_QWORD* a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // r8
	__int64 result; // rax
	_DWORD* v9; // rdx
	bool v10; // zf

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = sub_14017AB00(a1, 1u);
	v7 = v6;
	if (!v6 || (*(_DWORD*)(v6 + 432) & 0x1000i64) == 0)
		return 0i64;
	v9 = (_DWORD*)a1[2];
	result = 1i64;
	v10 = *(_QWORD*)(v7 + 1208) == *(_QWORD*)(v7 + 1216);
	v9[2] = 1;
	LOBYTE(v1) = !v10;
	*v9 = v1;
	a1[2] += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

