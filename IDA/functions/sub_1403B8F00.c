#include "../winhttp.h"

//----- (00000001403B8F00) ----------------------------------------------------
__int64 __fastcall sub_1403B8F00(__int64 a1, int* a2)
{
	__int64 v2; // rsi
	__int64 v4; // r14
	unsigned int v5; // ecx
	unsigned __int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rbp
	unsigned int* v9; // r8
	unsigned int v10; // ecx
	unsigned int v11; // edx
	unsigned int v13; // r8d
	__int64* v14; // rax
	unsigned __int64 v15; // rcx
	__int64 v16; // r9
	unsigned __int64 v17; // rax
	unsigned int v18; // edx
	__int64 v19; // rax
	int v20; // edx
	__int64 v21; // [rsp+40h] [rbp+8h] BYREF

	v21 = a1;
	v2 = qword_140C65898;
	v4 = qword_140C65898;
	if (*a2 >= 300)
		return 12i64;
	v5 = a2[1];
	if (v5 == -1)
		return 12i64;
	v6 = 0i64;
	if (!*a2 && v5 >= 0x1F)
		return 12i64;
	v7 = sub_1403AC780(qword_140C65898 + 160, a2);
	v8 = v7;
	if (!v7)
		return 12i64;
	v9 = *(unsigned int**)(v7 + 64);
	v10 = v9[95];
	if (v10 - 1 > 5)
	{
		if (v10 != 20)
			return 12i64;
		v11 = 6;
	}
	else
	{
		v11 = v10 - 1;
		if (v10 - 1 >= 7)
			return 12i64;
	}
	if (v10 - 1 > 5)
	{
		if (v10 == 20)
			goto LABEL_14;
		return 6i64;
	}
	if (v10 - 1 >= 7)
		return 6i64;
LABEL_14:
	v13 = *v9;
	v14 = (__int64*)(*(_QWORD*)(v2 + 1384) + 16i64 * v11);
	v15 = v14[1];
	if (v15)
	{
		v16 = *v14;
		do
		{
			v17 = v6 + ((v15 - v6) >> 1);
			v18 = *(_DWORD*)(v16 + 4 * v17);
			if (v13 < v18)
			{
				v15 = v6 + ((v15 - v6) >> 1);
			}
			else
			{
				if (v18 >= v13)
					return 1i64;
				v6 = v17 + 1;
			}
		} while (v6 < v15);
	}
	if ((dword_140DC2270 & 1) != 0)
	{
		v20 = dword_140DC2274;
	}
	else
	{
		dword_140DC2270 |= 1u;
		v19 = sub_140200220(0x4B4u);
		if (v19)
		{
			v20 = *(_DWORD*)(v19 + 4);
			v2 = qword_140C65898;
			dword_140DC2274 = v20;
		}
		else
		{
			v2 = qword_140C65898;
			v20 = 75;
			dword_140DC2274 = 75;
		}
	}
	if (*(_QWORD*)(v2 + 5624) < (unsigned __int64)(unsigned int)(v20 * *(_DWORD*)(*(_QWORD*)(v8 + 64) + 20i64)))
		return 7i64;
	v21 = *(_QWORD*)a2;
	sub_1403F4900(v4, 0x90Fu, (__int64)&v21);
	return 10i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2270: using guessed type int dword_140DC2270;
// 140DC2274: using guessed type int dword_140DC2274;

