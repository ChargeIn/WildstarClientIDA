#include "../winhttp.h"

//----- (00000001404B10F0) ----------------------------------------------------
__int64 __fastcall sub_1404B10F0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // r8
	_QWORD* v8; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	char v11[24]; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+48h] [rbp+10h] BYREF
	__int64 v13; // [rsp+58h] [rbp+20h]

	v12 = a2;
	result = qword_140C65898;
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	if (v5)
	{
		v6 = a1 + 96;
		if (a3)
		{
			sub_1400293C0(v6, (__int64)v11, &v12);
			v7 = *(_QWORD*)(a1 + 136);
			v8 = *(_QWORD**)(v7 + 8);
			v9 = v7;
			while (v8)
			{
				if (v8[4] < *(_QWORD*)(v5 + 424))
				{
					v8 = (_QWORD*)v8[3];
				}
				else
				{
					v9 = (__int64)v8;
					v8 = (_QWORD*)v8[2];
				}
			}
			if (v9 == v7 || (v10 = *(_QWORD*)(v9 + 32), v13 = v9, *(_QWORD*)(v5 + 424) < v10))
				v13 = v7;
			if (v13 == v7)
				return sub_1404B2680(a1);
			v6 = *(_QWORD*)(v13 + 40);
		}
		sub_1400EE810(v6, &v12);
		return sub_1404B2680(a1);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1404B10F0: using guessed type char var_18[24];

