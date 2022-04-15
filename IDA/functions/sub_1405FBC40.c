#include "../winhttp.h"

//----- (00000001405FBC40) ----------------------------------------------------
__int64 __fastcall sub_1405FBC40(_QWORD* a1, unsigned int a2)
{
	__int64 v2; // r9
	unsigned __int64 v3; // r8
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64* v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 result; // rax
	__int64 v12; // rax
	unsigned int v13; // r9d
	unsigned int v14; // edx
	__int64 i; // r10
	int v16; // r8d
	__int64 v17; // [rsp+30h] [rbp+8h]
	__int64 v18; // [rsp+30h] [rbp+8h]

	v2 = a1[1];
	v3 = a2;
	v5 = *(_QWORD*)(v2 + 8);
	v6 = v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < (unsigned int)v3)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v2 || (v17 = v6, (unsigned int)v3 < *(_DWORD*)(v6 + 32)))
		v17 = a1[1];
	if (v17 != v2)
	{
		result = *(unsigned int*)(v17 + 48);
		if ((_DWORD)result != 1)
			return result;
		v12 = sub_1405A8A40((__int64)a1, v3);
		if (v12)
		{
			v13 = *(_DWORD*)(v12 + 16);
			v14 = 0;
			if (!v13)
				return 2i64;
			for (i = v12 + 24; ; i += 8i64)
			{
				if (*(_QWORD*)i)
				{
					if ((*(_DWORD*)(*(_QWORD*)i + 8i64) & 0x20) == 0)
					{
						if (v14 >= 6)
							break;
						v16 = 1 << (v14 + 2);
						if (!v16 || (v16 & *(_DWORD*)(v17 + 108)) == 0)
							break;
					}
				}
				if (++v14 >= v13)
					return 2i64;
			}
		}
		return 1i64;
	}
	v7 = *(__int64**)(a1[14] + 8 * (v3 % ((__int64)(a1[15] - a1[14]) >> 3)));
	if (v7)
	{
		while (*((_DWORD*)v7 + 2) != (_DWORD)v3)
		{
			v7 = (__int64*)*v7;
			if (!v7)
				goto LABEL_13;
		}
		return 3i64;
	}
	else
	{
	LABEL_13:
		v8 = a1[5];
		v9 = v8;
		v10 = *(_QWORD*)(v8 + 8);
		while (v10)
		{
			if (*(_DWORD*)(v10 + 32) < (unsigned int)v3)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v9 = v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		}
		if (v9 == v8 || (v18 = v9, (unsigned int)v3 < *(_DWORD*)(v9 + 32)))
			v18 = a1[5];
		if (v18 == v8)
			return 0i64;
		else
			return *(unsigned int*)(v18 + 36);
	}
}
// 1405FBD68: conditional instruction was optimized away because r9d.4!=0

