#include "../winhttp.h"

//----- (0000000140196090) ----------------------------------------------------
int* __fastcall sub_140196090(__int64 a1, int* a2)
{
	__int64 v2; // r11
	__int64 v3; // r9
	__int64 v4; // rax
	int* v6; // rbx
	const void** i; // rax
	const void** v8; // rdx
	__int64 v9; // rcx
	const void**** v10; // [rsp+20h] [rbp-40h] BYREF
	const void*** v11; // [rsp+28h] [rbp-38h] BYREF
	__int64* v12; // [rsp+30h] [rbp-30h]
	int v13; // [rsp+38h] [rbp-28h] BYREF
	const void** v14; // [rsp+40h] [rbp-20h] BYREF
	__int64 v15[3]; // [rsp+48h] [rbp-18h] BYREF
	__int64 v16; // [rsp+70h] [rbp+10h] BYREF
	int* v17; // [rsp+80h] [rbp+20h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) - *a2 < 0)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 != v2 && *a2 - *(_DWORD*)(v4 + 32) >= 0)
		return (int*)(v4 + 40);
	v11 = (const void***)&v10;
	v10 = &v11;
	v13 = *a2;
	v15[0] = (__int64)&v14;
	v12 = 0i64;
	v14 = (const void**)v15;
	v15[1] = 0i64;
	v16 = v4;
	sub_1401962D0(a1, &v17, &v16, &v13);
	v6 = v17;
	sub_140196890(&v14);
	for (i = (const void**)v10; v10; i = (const void**)v10)
	{
		if (*i)
			*(_QWORD*)*i = i[1];
		v8 = (const void**)i[1];
		if (v8)
			*v8 = *i;
		*i = 0i64;
		i[1] = 0i64;
	}
	v9 = (__int64)v11;
	if (v11)
	{
		*v11 = (const void**)v12;
		v9 = (__int64)v11;
		i = (const void**)v10;
	}
	if (v12)
	{
		*v12 = v9;
		i = (const void**)v10;
	}
	v11 = 0i64;
	v12 = 0i64;
	if (i)
		sub_1401A4A00((const void***)&v10);
	return v6 + 10;
}

