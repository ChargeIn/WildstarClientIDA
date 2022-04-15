#include "../winhttp.h"

//----- (000000014048C3D0) ----------------------------------------------------
__int64 __fastcall sub_14048C3D0(unsigned int** a1)
{
	unsigned int* v1; // r9
	__int64 v3; // rcx
	unsigned int v4; // r8d
	__int64 v5; // rax
	__int64 v6; // rdx
	_DWORD* v7; // rsi
	unsigned int v8; // ebx
	int v9; // eax
	__int64 v10; // r9
	int v11; // eax
	__int64 v12; // rcx
	int v13; // ecx
	unsigned int i; // edi
	__int64 v16; // [rsp+30h] [rbp+8h] BYREF

	v1 = *a1;
	v3 = *(_QWORD*)(qword_140C65C28 + 112);
	v4 = *v1;
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v4)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v3 || (v16 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v16 = v3;
	if (v16 == v3)
		return 0i64;
	v7 = *(_DWORD**)(v16 + 40);
	if (!v7)
		return 0i64;
	v8 = 0;
	v9 = sub_1406428D0((__int64)a1);
	if (v9 == 1 || v9 == 3 || v9 == 5)
	{
		for (i = 0; i < 0x20; ++i)
		{
			if (sub_14048C100(a1, i) && (unsigned int)sub_140642A00(v7, i))
				++v8;
		}
	}
	else
	{
		v11 = *(_DWORD*)(v10 + 4);
		if (v11 == 42)
		{
			if ((int)sub_1403CAC00(qword_140C65898, *(_DWORD*)(v10 + 36), &v16) >= 0 && *(float*)&v16 > 0.0)
			{
				v13 = -1;
				if ((int)*(float*)&v16 != -1)
					v13 = (int)*(float*)&v16;
				if (v13)
					v8 = v13;
			}
		}
		else if (v11 == 54)
		{
			v12 = *(_QWORD*)(qword_140C65898 + 120);
			if (v12)
				v8 = *(_DWORD*)(v12 + 56);
		}
		else
		{
			v8 = sub_140642B30((__int64)v7);
		}
	}
	if (a1[1])
	{
		if (!v8)
			return (unsigned int)sub_14048C3D0();
	}
	return v8;
}
// 14048C469: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C28: using guessed type __int64 qword_140C65C28;

