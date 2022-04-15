#include "../winhttp.h"

//----- (000000014005A5E0) ----------------------------------------------------
char* __fastcall sub_14005A5E0(__int64 a1, __int64 a2, int a3, __int64* a4)
{
	_DWORD* v4; // r10
	__int64 v7; // rdi
	int v8; // edx
	__int64 v9; // r10
	__int64 v10; // rbp
	int v11; // r9d
	int v12; // r8d
	__int64 v13; // rcx
	__int64 v14; // r11
	int* v15; // rax
	__int64 v16; // rcx
	char* result; // rax
	unsigned int v18; // eax
	int v19; // eax
	__int64 v20; // rcx
	__int64 v21; // rax
	unsigned __int64 v22; // rcx
	int v23; // eax
	__int64 v24; // rcx
	__int64 v25; // rax
	unsigned __int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // r8

	v4 = *(_DWORD**)(a2 + 8);
	if (*(_BYTE*)(*(_QWORD*)v4 + 10i64))
		return 0i64;
	v7 = *(_QWORD*)(*(_QWORD*)v4 + 32i64);
	if (v4[2] == 6)
	{
		if (a2 == *(_QWORD*)(a1 + 40))
			*(_QWORD*)(a2 + 24) = *(_QWORD*)(a1 + 48);
		v8 = ((__int64)(*(_QWORD*)(a2 + 24) - *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 32i64) + 24i64)) >> 2) - 1;
	}
	else
	{
		v8 = -1;
	}
	v9 = *(int*)(v7 + 92);
	v10 = 0i64;
	v11 = a3 + 1;
	v12 = 0;
	v13 = 0i64;
	if (v9 > 0)
	{
		v14 = *(_QWORD*)(v7 + 48);
		v15 = (int*)(v14 + 12);
		while (*(v15 - 1) <= v8)
		{
			if (v8 < *v15 && !--v11)
			{
				v16 = *(_QWORD*)(v14 + 16i64 * v12) + 32i64;
				goto LABEL_14;
			}
			++v13;
			++v12;
			v15 += 4;
			if (v13 >= v9)
				break;
		}
	}
	v16 = 0i64;
LABEL_14:
	*a4 = v16;
	if (v16)
		return aLocal;
	v18 = sub_14005A040(v7, v8, a3);
	if ((v18 & 0x3F) != 0)
	{
		if ((v18 & 0x3F) == 4)
		{
			v28 = *(_QWORD*)(v7 + 56);
			if (v28)
			{
				v29 = *(_QWORD*)(v28 + 8i64 * (v18 >> 23));
				result = aUpvalue;
				*a4 = v29 + 32;
			}
			else
			{
				result = aUpvalue;
				*a4 = (__int64)asc_140C1DD44;
			}
			return result;
		}
		if ((v18 & 0x3F) == 5)
		{
			v27 = *(_QWORD*)(*(_QWORD*)(v7 + 16) + 16i64 * (v18 >> 14));
			result = aGlobal;
			*a4 = v27 + 32;
			return result;
		}
		if ((v18 & 0x3F) != 6)
		{
			if ((v18 & 0x3F) == 11)
			{
				v19 = (v18 >> 14) & 0x1FF;
				if ((v19 & 0x100) != 0
					&& (v20 = v19,
						v21 = *(_QWORD*)(v7 + 16),
						v22 = 2 * (v20 & 0xFFFFFFFFFFFFFEFFui64),
						*(_DWORD*)(v21 + 8 * v22 + 8) == 4))
				{
					*a4 = *(_QWORD*)(v21 + 8 * v22) + 32i64;
					return aMethod_0;
				}
				else
				{
					*a4 = (__int64)asc_140C1DCCC;
					return aMethod_0;
				}
			}
			return 0i64;
		}
		v23 = (v18 >> 14) & 0x1FF;
		if ((v23 & 0x100) != 0
			&& (v24 = v23,
				v25 = *(_QWORD*)(v7 + 16),
				v26 = 2 * (v24 & 0xFFFFFFFFFFFFFEFFui64),
				*(_DWORD*)(v25 + 8 * v26 + 8) == 4))
		{
			*a4 = *(_QWORD*)(v25 + 8 * v26) + 32i64;
			return aField;
		}
		else
		{
			*a4 = (__int64)asc_140C1DCCC;
			return aField;
		}
	}
	else
	{
		v30 = v18 >> 23;
		if ((int)v30 >= (unsigned __int8)(v18 >> 6))
			return 0i64;
		if (*(_DWORD*)(*(_QWORD*)(a2 + 8) + 8i64) == 6)
			return (char*)sub_14005A5E0(a1, a2, v30, a4);
		return (char*)v10;
	}
}

