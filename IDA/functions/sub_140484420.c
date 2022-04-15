#include "../winhttp.h"

//----- (0000000140484420) ----------------------------------------------------
__int64 __fastcall sub_140484420(_QWORD* a1, int a2, unsigned int a3, int a4)
{
	__int64 v4; // rbp
	__int64 result; // rax
	unsigned __int64 v7; // rdi
	__int64 v8; // rbp
	unsigned __int64 v9; // rsi
	_QWORD* v10; // rbx
	__int64 v11; // r10
	__int64 v12; // rdx
	_QWORD* v13; // rcx
	int* v14; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v15; // [rsp+28h] [rbp-30h] BYREF
	int v16; // [rsp+30h] [rbp-28h]
	_QWORD* v17; // [rsp+60h] [rbp+8h] BYREF
	int v18; // [rsp+68h] [rbp+10h] BYREF

	v18 = a2;
	v17 = a1;
	v4 = qword_140C65918;
	result = sub_140221180(a3);
	v7 = result;
	if (result)
	{
		v8 = *(_QWORD*)(v4 + 24);
		v9 = (*(__int64(__fastcall**)(int*))(v8 + 24))(&v18);
		result = v9 / *(_QWORD*)(v8 + 8);
		v10 = *(_QWORD**)(*(_QWORD*)(v8 + 16) + 8 * (v9 % *(_QWORD*)(v8 + 8)));
		if (v10)
		{
			while (1)
			{
				if (v9 == *v10)
				{
					result = (*(__int64(__fastcall**)(int*, _QWORD*))(v8 + 32))(&v18, v10 + 2);
					if ((_DWORD)result)
						break;
				}
				v10 = (_QWORD*)v10[1];
				if (!v10)
					return result;
			}
			result = (__int64)(v10 + 3);
			if (v10 != (_QWORD*)-24i64)
			{
				v11 = *(_QWORD*)result;
				v12 = *(_QWORD*)(*(_QWORD*)result + 448i64);
				result = v12;
				v13 = *(_QWORD**)(v12 + 8);
				while (v13)
				{
					if (v13[4] < v7)
					{
						v13 = (_QWORD*)v13[3];
					}
					else
					{
						result = (__int64)v13;
						v13 = (_QWORD*)v13[2];
					}
				}
				if (result == v12 || v7 < *(_QWORD*)(result + 32))
				{
					v15 = v7;
					v16 = 0;
					v17 = (_QWORD*)result;
					sub_1400EDD00(v11 + 440, &v14, &v17, &v15);
					result = (__int64)v14;
				}
				*(_DWORD*)(result + 40) = a4;
			}
		}
	}
	return result;
}
// 140C65918: using guessed type __int64 qword_140C65918;

