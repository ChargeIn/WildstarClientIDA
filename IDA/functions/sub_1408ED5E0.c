#include "../winhttp.h"

//----- (00000001408ED5E0) ----------------------------------------------------
__int64 __fastcall sub_1408ED5E0(_QWORD* a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
	__int64 v5; // r12
	__int64 v8; // r15
	int v9; // esi
	int v10; // eax
	unsigned int v11; // ecx
	unsigned int v12; // r8d
	__int64 v13; // rdx
	int v14; // edi
	int v15; // eax
	__int64 v16; // r12
	unsigned __int8 v17; // al
	int v18; // r13d
	unsigned __int8 v19; // al
	unsigned int v20; // ecx
	unsigned int v21; // r8d
	__int64 v22; // rdx
	__int64 v23; // rdi
	unsigned int v24; // ecx
	unsigned int v25; // r8d
	__int64 v26; // rdx
	__int64 i; // rdi
	int v29; // [rsp+20h] [rbp-38h]

	v5 = a2;
	*a1 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	v8 = a3;
	if ((unsigned int)sub_1408EC1C0(a4, 1))
		*(_DWORD*)a1 = sub_1408EC1C0(a4, 4) + 1;
	else
		*(_DWORD*)a1 = 1;
	v9 = 0;
	if (!(unsigned int)sub_1408EC1C0(a4, 1))
		goto LABEL_16;
	v10 = sub_1408EC1C0(a4, 8) + 1;
	*((_DWORD*)a1 + 6) = v10;
	if (2 * v10 && (v11 = (2 * v10 + 3) & 0xFFFFFFFC, v12 = v11 + *(_DWORD*)(a5 + 16), v12 <= *(_DWORD*)(a5 + 20)))
	{
		v13 = *(_QWORD*)(a5 + 8);
		*(_DWORD*)(a5 + 16) = v12;
		*(_QWORD*)(a5 + 8) = v13 + v11;
	}
	else
	{
		v13 = 0i64;
	}
	a1[4] = v13;
	v14 = 0;
	if (*((int*)a1 + 6) > 0)
	{
		v15 = sub_1408ED5C0(v8);
		v16 = 0i64;
		v29 = v15;
		while (1)
		{
			v17 = sub_1408EC1C0(a4, v15);
			*(_BYTE*)(v16 + a1[4]) = v17;
			v18 = v17;
			v19 = sub_1408EC1C0(a4, v29);
			*(_BYTE*)(v16 + a1[4] + 1) = v19;
			if (v18 == v19 || v18 >= (int)v8 || v19 >= (int)v8)
				break;
			v15 = v29;
			++v14;
			v16 += 2i64;
			if (v14 >= *((_DWORD*)a1 + 6))
			{
				v5 = a2;
				goto LABEL_16;
			}
		}
	}
	else
	{
	LABEL_16:
		if ((int)sub_1408EC1C0(a4, 2) <= 0)
		{
			if (*(int*)a1 <= 1
				|| (!(_DWORD)v8 || (v20 = (v8 + 3) & 0xFFFFFFFC, v21 = v20 + *(_DWORD*)(a5 + 16), v21 > *(_DWORD*)(a5 + 20))
					? (v22 = 0i64)
					: (v22 = *(_QWORD*)(a5 + 8), *(_DWORD*)(a5 + 16) = v21, *(_QWORD*)(a5 + 8) = v22 + v20),
					a1[1] = v22,
					v23 = 0i64,
					v8 <= 0))
			{
			LABEL_25:
				if (2 * *(_DWORD*)a1
					&& (v24 = (2 * *(_DWORD*)a1 + 3) & 0xFFFFFFFC, v25 = v24 + *(_DWORD*)(a5 + 16), v25 <= *(_DWORD*)(a5 + 20)))
				{
					v26 = *(_QWORD*)(a5 + 8);
					*(_DWORD*)(a5 + 16) = v25;
					*(_QWORD*)(a5 + 8) = v26 + v24;
				}
				else
				{
					v26 = 0i64;
				}
				a1[2] = v26;
				if (*(int*)a1 <= 0)
					return 0i64;
				for (i = 0i64; ; i += 2i64)
				{
					sub_1408EC1C0(a4, 8);
					*(_BYTE*)(i + a1[2]) = sub_1408EC1C0(a4, 8);
					if (*(char*)(i + a1[2]) >= *(_DWORD*)(v5 + 16))
						break;
					*(_BYTE*)(i + a1[2] + 1) = sub_1408EC1C0(a4, 8);
					if (*(char*)(i + a1[2] + 1) >= *(_DWORD*)(v5 + 20))
						break;
					if (++v9 >= *(_DWORD*)a1)
						return 0i64;
				}
			}
			else
			{
				while (1)
				{
					*(_BYTE*)(v23 + a1[1]) = sub_1408EC1C0(a4, 4);
					if (*(unsigned __int8*)(a1[1] + v23) >= *(int*)a1)
						break;
					if (++v23 >= v8)
						goto LABEL_25;
				}
			}
		}
	}
	return 0xFFFFFFFFi64;
}
// 1408ED6F3: conditional instruction was optimized away because r13d.4<100u
// 1408ED6FB: conditional instruction was optimized away because ecx.4<100u

