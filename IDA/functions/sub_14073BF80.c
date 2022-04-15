#include "../winhttp.h"

//----- (000000014073BF80) ----------------------------------------------------
__int64 __fastcall sub_14073BF80(_QWORD* a1)
{
	int* v1; // rax
	int v2; // ebx
	__int64 v3; // rdi
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v9; // [rsp+38h] [rbp+10h]

	v1 = (int*)sub_140056AB0(a1, 0xFFFFFFFF);
	if (v1)
		v2 = *v1;
	else
		v2 = 16;
	v3 = qword_140C65B98;
	v4 = *(_QWORD*)(qword_140C65B98 + 72);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v9 = v5, v2 < *(_DWORD*)(v5 + 32)))
		v9 = *(_QWORD*)(qword_140C65B98 + 72);
	if (v4 != v9
		&& !*(_DWORD*)(v9 + 60)
		&& !(unsigned int)sub_1405BED30(qword_140C65B98, v2)
		&& !*(_QWORD*)(v3 + 208)
		&& !*(_DWORD*)(v3 + 172)
		&& !*(_DWORD*)(v3 + 180))
	{
		sub_1405C35D0(v7, v2);
	}
	return 0i64;
}
// 14073C028: variable 'v7' is possibly undefined
// 140C65B98: using guessed type __int64 qword_140C65B98;

