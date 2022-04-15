#include "../winhttp.h"

//----- (00000001406FF820) ----------------------------------------------------
__int64 __fastcall sub_1406FF820(__int64 a1)
{
	__int64 v1; // r10
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	unsigned int v6; // eax
	__int64 v7; // r10
	unsigned int v8; // r8d
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rax
	unsigned __int64 v16; // [rsp+20h] [rbp-18h] BYREF
	int v17; // [rsp+28h] [rbp-10h]
	__int64 v18; // [rsp+48h] [rbp+10h]
	__int64 v19; // [rsp+48h] [rbp+10h]

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = sub_1400F26A0(v1 + 384, 1);
	v7 = *(_QWORD*)(qword_140C65898 + 32144);
	v8 = v6;
	v9 = *(_QWORD*)(v7 + 72);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < v8)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v18 = v10, v8 < *(_DWORD*)(v10 + 32)))
		v18 = *(_QWORD*)(v7 + 72);
	if (v18 != v9)
	{
		v12 = *(_QWORD*)(v7 + 40);
		v13 = v12;
		v14 = *(_QWORD*)(v12 + 8);
		while (v14)
		{
			if (*(_DWORD*)(v14 + 32) < v8)
			{
				v14 = *(_QWORD*)(v14 + 24);
			}
			else
			{
				v13 = v14;
				v14 = *(_QWORD*)(v14 + 16);
			}
		}
		if (v13 == v12 || (v19 = v13, v8 < *(_DWORD*)(v13 + 32)))
			v19 = *(_QWORD*)(v7 + 40);
		if (v19 != v12 && v19 != -40)
		{
			v16 = 0i64;
			v17 = 0;
			v16 = __PAIR64__(v8, *(_DWORD*)(v19 + 44));
			v17 = 2;
			sub_1403F4900(qword_140C65898, 0x15Du, (__int64)&v16);
		}
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

