#include "../winhttp.h"

//----- (00000001404FF150) ----------------------------------------------------
_BOOL8 __fastcall sub_1404FF150(__int64 a1)
{
	__int64 v1; // rbx
	BOOL v2; // r8d
	__int64 v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64* v8; // rcx
	__int64 v9; // rcx
	unsigned __int64 i; // rdx
	__int64 v11; // rcx
	__int64 j; // rcx
	__int64 k; // rcx
	__int64 v15; // [rsp+10h] [rbp+8h] BYREF
	__int64 v16; // [rsp+18h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(a1 + 7064);
	v2 = 0;
	v4 = *(_QWORD*)(v1 + 16);
	if (v4 == v1)
		return 0i64;
	do
	{
		if (v2)
			break;
		v5 = *(_QWORD*)(a1 + 7248);
		v6 = v5;
		v7 = *(_QWORD*)(v5 + 8);
		while (v7)
		{
			if (*(_DWORD*)(v7 + 32) < *(_DWORD*)(v4 + 32))
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		}
		if (v6 == v5 || *(_DWORD*)(v4 + 32) < *(_DWORD*)(v6 + 32))
		{
			v16 = *(_QWORD*)(a1 + 7248);
			v8 = &v16;
		}
		else
		{
			v15 = v6;
			v8 = &v15;
		}
		v9 = *v8;
		if (v9 == v5 || *(_DWORD*)(v9 + 36) != *(_DWORD*)(v4 + 36))
		{
			for (i = 0i64; i < 0xC; i += 4i64)
			{
				if (v2)
					break;
				v2 = *(_DWORD*)(v4 + 32) == *(_DWORD*)((char*)&unk_140B0FB48 + i);
			}
		}
		v11 = *(_QWORD*)(v4 + 24);
		if (v11)
		{
			v4 = *(_QWORD*)(v4 + 24);
			for (j = *(_QWORD*)(v11 + 16); j; j = *(_QWORD*)(j + 16))
				v4 = j;
		}
		else
		{
			for (k = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
				v4 = k;
			if (*(_QWORD*)(v4 + 24) != k)
				v4 = k;
		}
	} while (v4 != v1);
	return v2;
}

