#include "../winhttp.h"

//----- (0000000140450AD0) ----------------------------------------------------
__int64 __fastcall sub_140450AD0(__int64 a1, __int64 a2, unsigned int* a3)
{
	unsigned int v3; // r9d
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // r11
	unsigned int v8; // r8d
	__int64 v9; // r10
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned int v12; // edx
	bool v13; // cc
	__int64 v15; // [rsp+18h] [rbp+18h]
	__int64 v16; // [rsp+18h] [rbp+18h]

	v3 = *a3;
	if (!*a3)
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v15 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v15 = v4;
	v7 = v4;
	if (v15 == v4)
		v8 = 0;
	else
		v8 = *(_DWORD*)(v15 + 36);
	v9 = *(_QWORD*)(*(_QWORD*)a2 + 24i64);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < v3)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v16 = v10, v3 < *(_DWORD*)(v10 + 32)))
		v16 = *(_QWORD*)(*(_QWORD*)a2 + 24i64);
	if (v16 == v7)
	{
		v13 = v8 == 0;
	}
	else
	{
		v12 = *(_DWORD*)(v16 + 36);
		v13 = v8 <= v12;
		if (v8 < v12)
			return 0xFFFFFFFFi64;
	}
	return !v13;
}

