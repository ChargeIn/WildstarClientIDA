#include "../winhttp.h"

//----- (00000001403DE8C0) ----------------------------------------------------
__int64 __fastcall sub_1403DE8C0(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // rbp
	__int64 v5; // r15
	__int64 v6; // r14
	unsigned int v7; // ebx
	unsigned __int64 v8; // rdi
	__int64 v9; // rcx
	unsigned int v10; // eax
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // rcx
	_DWORD* v14; // rax
	unsigned __int64 v16[2]; // [rsp+20h] [rbp-38h] BYREF
	char v17[40]; // [rsp+30h] [rbp-28h] BYREF
	int v18; // [rsp+68h] [rbp+10h] BYREF

	v3 = qword_140C65898;
	v5 = a2;
	if (!a2 || !a3)
		return 2147500037i64;
	v6 = sub_1403D90D0(qword_140C65898, a3);
	if (!v6)
		return 2147500037i64;
	v7 = 0;
	v8 = sub_1403DEB80(v3, v5, a3);
	if (!v8)
	{
		v8 = (unsigned __int64)sub_14018B280(32i64, 0);
		if (v8)
		{
			v9 = *(_QWORD*)(v6 + 280);
			if (v9)
				v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
			else
				v10 = 0;
			*(_DWORD*)(v8 + 8) = 0;
			*(_QWORD*)(v8 + 24) = 0i64;
			*(_QWORD*)(v8 + 16) = 0i64;
			*(_QWORD*)v8 = v5 | ((unsigned __int64)v10 << 32);
		}
		else
		{
			v8 = 0i64;
		}
		v11 = *(_QWORD*)v8;
		v16[1] = v8;
		v16[0] = v11;
		sub_1400EEDD0(v3 + 28392, (__int64)v17, v16);
	}
	v12 = *(_QWORD*)(v8 + 24);
	v18 = a3;
	v13 = 0i64;
	if (v12)
	{
		v14 = *(_DWORD**)(v8 + 16);
		while (*v14 != a3)
		{
			++v13;
			++v14;
			if (v13 >= v12)
				goto LABEL_16;
		}
		return (unsigned int)-2147467259;
	}
	else
	{
	LABEL_16:
		sub_140003460((__int64*)(v8 + 16), &v18);
		*(_DWORD*)(v8 + 8) = sub_140625E00(v8);
	}
	return v7;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403DE8C0: using guessed type char var_28[40];

