#include "../winhttp.h"

//----- (0000000140750BB0) ----------------------------------------------------
__int64 __fastcall sub_140750BB0(_QWORD* a1, int a2, int a3)
{
	__int64 v4; // rdx
	__int128 v7; // xmm0
	__int128 v8; // xmm1
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 result; // rax
	__int128 v12[2]; // [rsp+20h] [rbp-68h] BYREF
	_BYTE v13[40]; // [rsp+40h] [rbp-48h]

	v4 = a1[2];
	memset(v12, 0, sizeof(v12));
	*(_DWORD*)v13 = 0;
	*(_OWORD*)&v13[12] = 0x3F800000ui64;
	*(_QWORD*)&v13[4] = 0x3F800000FFFFFFFFi64;
	*(_QWORD*)&v13[28] = 0i64;
	*(_DWORD*)&v13[36] = 0;
	if (v4 == a1[3])
	{
		sub_140753D70(a1, v4, v12);
	}
	else
	{
		if (v4)
		{
			*(_OWORD*)v4 = v12[0];
			v7 = *(_OWORD*)v13;
			*(_OWORD*)(v4 + 16) = 0i64;
			v8 = *(_OWORD*)&v13[16];
			*(_OWORD*)(v4 + 32) = v7;
			*(_QWORD*)&v7 = *(_QWORD*)&v13[32];
			*(_OWORD*)(v4 + 48) = v8;
			*(_QWORD*)(v4 + 64) = v7;
		}
		a1[2] += 72i64;
	}
	v9 = a1[1];
	v10 = 9i64 * ((*((_DWORD*)a1 + 4) - (int)v9) / 72 - 1);
	*(_DWORD*)(v9 + 72i64 * ((*((_DWORD*)a1 + 4) - (int)v9) / 72 - 1)) = a3;
	result = a1[1];
	if (a2 <= 0)
	{
		*(_DWORD*)(result + 8 * v10 + 40) = 1065353216;
	}
	else
	{
		*(_DWORD*)(result + 8 * v10 + 64) = 1;
		result = a1[1];
		*(_DWORD*)(result + 8 * v10 + 40) = 0;
	}
	return result;
}

