#include "../winhttp.h"

//----- (0000000140698E80) ----------------------------------------------------
__int64 __fastcall sub_140698E80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // r8
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 result; // rax
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	int v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+2Ch] [rbp-1Ch]
	int v15; // [rsp+34h] [rbp-14h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8)), (v6 = v5) != 0)
		&& (v7 = *(int*)(v5 + 772), v7 < 0xA)
		&& (v8 = v6 + 8 * (v7 + 4 * v7 + 3)) != 0)
	{
		v9 = *(_QWORD*)(v8 + 32);
		v13 = 1;
		v10 = v9 - *(_QWORD*)(v6 + 616);
		v14 = 0i64;
		v15 = 0;
		v12 = v10;
		if (v10 >= 0)
		{
			sub_140501210(a1, &v12);
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140698EB4: variable 'v3' is possibly undefined

