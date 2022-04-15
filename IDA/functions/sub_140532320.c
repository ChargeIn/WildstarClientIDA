#include "../winhttp.h"

//----- (0000000140532320) ----------------------------------------------------
__int64 __fastcall sub_140532320(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	int v4; // eax
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]
	__int64 v14; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_8;
	if (v4 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v14))
	{
		v13 = 3;
		v3 = &v12;
		v12 = v14;
	LABEL_8:
		v5 = (int)*(double*)v3;
		goto LABEL_9;
	}
	v5 = 0;
LABEL_9:
	v6 = *(_QWORD*)(v2 + 1384);
	v7 = *(_QWORD*)(v6 + 16);
	if (v7 != v6)
	{
		do
		{
			sub_140774420(v7 + 48, v5);
			v8 = *(_QWORD*)(v7 + 24);
			if (v8)
			{
				v7 = *(_QWORD*)(v7 + 24);
				for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
					v7 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v7 = j;
				if (*(_QWORD*)(v7 + 24) != j)
					v7 = j;
			}
		} while (v7 != *(_QWORD*)(v2 + 1384));
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

