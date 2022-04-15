#include "../winhttp.h"

//----- (00000001406020B0) ----------------------------------------------------
__int64 __fastcall sub_1406020B0(__int64 a1, int a2, int a3)
{
	_QWORD* v3; // r9
	__int64 v5; // r10
	unsigned __int64 v6; // r10
	unsigned __int64 v7; // rax
	__int64 v8; // r11
	_DWORD* v9; // rcx
	int v10; // ecx
	int v11; // [rsp+30h] [rbp+8h] BYREF
	int v12; // [rsp+34h] [rbp+Ch]

	v3 = *(_QWORD**)(a1 + 64);
	if (!v3)
		return 0i64;
	if (v3[12])
		v5 = *(_QWORD*)(v3[11] + 8i64 * v3[13]);
	else
		v5 = 0i64;
	if ((*(_DWORD*)(v5 + 8) & 0x2000) == 0)
		return 0i64;
	v6 = v3[15];
	v7 = 0i64;
	if (v6)
	{
		v8 = v3[14];
		v9 = (_DWORD*)(v8 + 4);
		while (*v9 != a3)
		{
			++v7;
			v9 += 2;
			if (v7 >= v6)
				goto LABEL_12;
		}
		v10 = *(_DWORD*)(v8 + 8 * v7);
		if (v10)
		{
			if (a2)
			{
				if (v10 == a2)
					a3 = 0;
			}
			else
			{
				a2 = *(_DWORD*)(v8 + 8 * v7);
				a3 = 0;
			}
			goto LABEL_13;
		}
	}
LABEL_12:
	if (a2)
	{
	LABEL_13:
		v12 = a3;
		v11 = a2;
		sub_1403F4900(qword_140C65898, 0x432u, (__int64)&v11);
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

