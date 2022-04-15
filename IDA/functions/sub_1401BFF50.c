#include "../winhttp.h"

//----- (00000001401BFF50) ----------------------------------------------------
__int64 __fastcall sub_1401BFF50(__int64 a1)
{
	unsigned __int64 v1; // rdi
	_QWORD* v4; // rsi
	int v5; // ebx
	unsigned __int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rcx
	unsigned __int64 v9[2]; // [rsp+30h] [rbp-38h] BYREF
	unsigned __int64 v10[5]; // [rsp+40h] [rbp-28h] BYREF

	v1 = *(_QWORD*)(a1 + 96);
	if (!v1)
		return 1i64;
	v4 = (_QWORD*)(a1 + 88);
	v9[0] = 0i64;
	v9[1] = v1;
	sub_1401D3110(v10, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401C0360, v9, a1 + 88, 2);
	v5 = sub_1401BD3C0(*(unsigned int**)(a1 + 72), a1, v4, (__int64)v10, 0i64, v1);
	if (v5 >= 0)
	{
		v6 = 0i64;
		if (v4[1])
		{
			v7 = 0i64;
			do
			{
				v8 = *(_QWORD*)(v7 + *v4);
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				++v6;
				v7 += 56i64;
			} while (v6 < v4[1]);
		}
		v4[1] = 0i64;
		v5 = 0;
	}
	if (v10[0] < v10[1])
		sub_14018B900(v10[2] + 8 * v10[0], 0);
	return (unsigned int)v5;
}

