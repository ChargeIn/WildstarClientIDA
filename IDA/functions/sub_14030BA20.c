#include "../winhttp.h"

//----- (000000014030BA20) ----------------------------------------------------
__int64 __fastcall sub_14030BA20(unsigned __int64* a1, __int64 a2, _QWORD* a3)
{
	__int64 v3; // rax
	__int64 v7; // rcx
	__int64 result; // rax
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r10
	unsigned int* v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // r8
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rax
	__int64 v27; // rcx

	v3 = a3[3];
	if (v3 == -1)
	{
		a3[3] = 0i64;
	}
	else
	{
		v7 = v3 + a2;
		if (v3 + a2 < *a1 || v7 + 1 > a1[1])
			return 2147500037i64;
		a3[3] = v7;
	}
	result = sub_14030EF10(a1, a2, a3 + 4);
	if ((int)result < 0)
		return result;
	v9 = a3[5];
	if (v9 == -1)
	{
		a3[5] = 0i64;
	}
	else
	{
		v10 = v9 + a2;
		if (v9 + a2 < *a1)
			return 2147500037i64;
		if (v10 + 16 > a1[1])
			return 2147500037i64;
		a3[5] = v10;
		v11 = v10 + 16;
		v12 = (unsigned int*)(v10 + a1[2]);
		v13 = *((_QWORD*)v12 + 1);
		if (v13 + v11 < *a1)
			return 2147500037i64;
		v14 = *v12;
		if (v11 + v13 + 12 * v14 > a1[1])
			return 2147500037i64;
		v15 = 0i64;
		if ((_DWORD)v14)
			v15 = v13 + v11;
		*((_QWORD*)v12 + 1) = v15;
	}
	v16 = a3[6];
	if (v16 == -1)
	{
		a3[6] = 0i64;
	}
	else
	{
		v17 = v16 + a2;
		if (v16 + a2 < *a1 || v17 + 48 > a1[1])
			return 2147500037i64;
		a3[6] = v17;
		result = sub_14030B3E0(a1, v17 + 48, (unsigned int*)(v17 + a1[2]));
		if ((int)result < 0)
			return result;
	}
	v18 = a3[7];
	if (v18 == -1)
	{
		a3[7] = 0i64;
	}
	else
	{
		v19 = v18 + a2;
		if (v18 + a2 < *a1 || v19 + 72 > a1[1])
			return 2147500037i64;
		a3[7] = v19;
		result = sub_14030B4A0(a1, v19 + 80, (unsigned int*)(v19 + a1[2]));
		if ((int)result < 0)
			return result;
	}
	v20 = a3[8];
	if (v20 == -1)
	{
		a3[8] = 0i64;
	}
	else
	{
		v21 = v20 + a2;
		if (v20 + a2 < *a1 || v21 + 96 > a1[1])
			return 2147500037i64;
		a3[8] = v21;
		result = sub_14030B5C0(a1, v21 + 96, (unsigned int*)(v21 + a1[2]));
		if ((int)result < 0)
			return result;
	}
	v22 = a3[9];
	if (v22 == -1)
	{
		a3[9] = 0i64;
	}
	else
	{
		v23 = v22 + a2;
		if (v22 + a2 < *a1 || v23 + 48 > a1[1])
			return 2147500037i64;
		a3[9] = v23;
		result = sub_14030B3E0(a1, v23 + 48, (unsigned int*)(v23 + a1[2]));
		if ((int)result < 0)
			return result;
	}
	v24 = a3[10];
	if (v24 == -1)
	{
		a3[10] = 0i64;
	}
	else
	{
		v25 = v24 + a2;
		if (v24 + a2 < *a1 || v25 + 64 > a1[1])
			return 2147500037i64;
		a3[10] = v25;
		result = sub_14030B740(a1, v25 + 64, (unsigned int*)(v25 + a1[2]));
		if ((int)result < 0)
			return result;
	}
	v26 = a3[11];
	if (v26 == -1)
	{
		a3[11] = 0i64;
		return 0i64;
	}
	v27 = v26 + a2;
	if (v26 + a2 < *a1 || v27 + 144 > a1[1])
		return 2147500037i64;
	a3[11] = v27;
	result = sub_14030B7C0(a1, v27 + 144, (unsigned int*)(v27 + a1[2]));
	if ((int)result >= 0)
		return 0i64;
	return result;
}

