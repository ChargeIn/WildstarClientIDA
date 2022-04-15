#include "../winhttp.h"

//----- (0000000140642C30) ----------------------------------------------------
__int64 __fastcall sub_140642C30(unsigned int* a1, unsigned int* a2)
{
	unsigned int v2; // r8d
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned int v6; // r8d
	__int64 v7; // r11
	__int64 v8; // r9
	__int64 v9; // rax
	unsigned int v10; // edx
	__int64 v11; // rcx
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	unsigned __int64 v14; // rdx
	__int64 v16; // [rsp+8h] [rbp+8h]
	__int64 v17; // [rsp+8h] [rbp+8h]

	v2 = *a1;
	v3 = *(_QWORD*)(qword_140C65C28 + 112);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v16 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v16 = *(_QWORD*)(qword_140C65C28 + 112);
	v6 = 0;
	v7 = *(_QWORD*)(qword_140C65C28 + 112);
	if (v16 == v3)
		v8 = 0i64;
	else
		v8 = *(_QWORD*)(v16 + 40);
	v9 = *(_QWORD*)(v7 + 8);
	v10 = *a2;
	v11 = *(_QWORD*)(qword_140C65C28 + 112);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v10)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v11 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v11 == v7 || (v17 = v11, v10 < *(_DWORD*)(v11 + 32)))
		v17 = *(_QWORD*)(qword_140C65C28 + 112);
	if (v17 == v7)
		v12 = 0i64;
	else
		v12 = *(_QWORD*)(v17 + 40);
	if (!v8 || !v12)
		return 0i64;
	v13 = *(_QWORD*)(v8 + 32);
	v14 = *(_QWORD*)(v12 + 32);
	if (v13 > v14)
		return 0xFFFFFFFFi64;
	LOBYTE(v6) = v13 != v14;
	return v6;
}
// 140C65C28: using guessed type __int64 qword_140C65C28;

