#include "../winhttp.h"

//----- (00000001404842A0) ----------------------------------------------------
__int64 __fastcall sub_1404842A0(unsigned __int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // rsi
	__int64 result; // rax
	__int64 v5; // rsi
	unsigned __int64 v6; // rdi
	_QWORD* v7; // rbx
	char v8[24]; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF
	int v10; // [rsp+48h] [rbp+10h] BYREF

	v10 = a2;
	v9 = a1;
	v3 = qword_140C65918;
	result = sub_14021FC40(a3);
	v9 = result;
	if (result)
	{
		v5 = *(_QWORD*)(v3 + 24);
		v6 = (*(__int64(__fastcall**)(int*))(v5 + 24))(&v10);
		result = v6 / *(_QWORD*)(v5 + 8);
		v7 = *(_QWORD**)(*(_QWORD*)(v5 + 16) + 8 * (v6 % *(_QWORD*)(v5 + 8)));
		if (v7)
		{
			while (1)
			{
				if (v6 == *v7)
				{
					result = (*(__int64(__fastcall**)(int*, _QWORD*))(v5 + 32))(&v10, v7 + 2);
					if ((_DWORD)result)
						break;
				}
				v7 = (_QWORD*)v7[1];
				if (!v7)
					return result;
			}
			if (v7 != (_QWORD*)-24i64)
				return sub_140007810(v7[3] + 376i64, (__int64)v8, &v9);
		}
	}
	return result;
}
// 140C65918: using guessed type __int64 qword_140C65918;
// 1404842A0: using guessed type char var_18[24];

