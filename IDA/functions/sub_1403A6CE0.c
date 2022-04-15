#include "../winhttp.h"

//----- (00000001403A6CE0) ----------------------------------------------------
__int64 __fastcall sub_1403A6CE0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	int v5; // r14d
	int v6; // esi
	__int64 v7; // rax
	unsigned __int64 v8; // rbp
	int v9; // edx
	__int64 v10; // rdx
	__int64 v11; // rcx
	int v12; // eax
	bool v13; // zf
	int v14; // eax
	int v15; // ecx
	unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

	v16 = a1;
	v2 = qword_140C65898;
	v3 = *(_QWORD*)(qword_140C65898 + 26392);
	if (!v3)
		return 2147500037i64;
	v5 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64);
	v6 = 0;
	if (v5 == *(_DWORD*)v3)
	{
		v7 = *(_QWORD*)(v3 + 40);
	}
	else if (v5 == *(_DWORD*)(v3 + 8))
	{
		v7 = *(_QWORD*)(v3 + 48);
	}
	else
	{
		v7 = 0i64;
	}
	v8 = a2;
	if (a2 != v7)
	{
		if ((unsigned __int64)a2 > *(_QWORD*)(qword_140C65898 + 5624)
			|| (unsigned int)sub_1403B5040(qword_140C65898) && v8 > *(_QWORD*)(v2 + 5744))
		{
			return 2147500037i64;
		}
		if (v5 == *(_DWORD*)v3)
		{
			v9 = *(_DWORD*)(v3 + 8);
		}
		else
		{
			v9 = 0;
			if (v5 == *(_DWORD*)(v3 + 8))
				v9 = *(_DWORD*)v3;
		}
		v10 = sub_1403D90D0(v2, v9);
		if (!v10)
			return 2147500037i64;
		v11 = *(_QWORD*)(v2 + 120);
		v12 = *(_DWORD*)(v11 + 128);
		if (v12 == 20 || (v13 = v12 == 23, v14 = 0, v13))
			v14 = *(_DWORD*)(v11 + 416);
		v15 = *(_DWORD*)(v10 + 128);
		if (v15 == 20 || v15 == 23)
			v6 = *(_DWORD*)(v10 + 416);
		if (v14 != v6)
			return 2147500037i64;
		v16 = v8;
		sub_1403F4900(v2, 0x197u, (__int64)&v16);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

