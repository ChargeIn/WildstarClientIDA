#include "../winhttp.h"

//----- (00000001400B5DF0) ----------------------------------------------------
int* __fastcall sub_1400B5DF0(__int64 a1, unsigned int a2, int* a3)
{
	__int64 v6; // rbp
	unsigned __int64 v7; // rdi
	_QWORD* v8; // rbx
	__int64 v9; // rdi
	int* v10; // rbx
	int* v11; // rax
	unsigned int v12; // edi
	unsigned int v13; // [rsp+48h] [rbp+10h] BYREF
	int* v14; // [rsp+58h] [rbp+20h] BYREF

	v13 = a2;
	if (!a2)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 88);
	v7 = (*(__int64(__fastcall**)(unsigned int*))(v6 + 24))(&v13);
	v8 = *(_QWORD**)(*(_QWORD*)(v6 + 16) + 8 * (v7 % *(_QWORD*)(v6 + 8)));
	if (!v8)
		return 0i64;
	while (v7 != *v8 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v6 + 32))(&v13, v8 + 2))
	{
		v8 = (_QWORD*)v8[1];
		if (!v8)
			return 0i64;
	}
	if (v8 == (_QWORD*)-24i64)
		return 0i64;
	v9 = v8[3];
	if (!*(_DWORD*)(a1 + 8) || (v9 & 1) == 0)
		return (int*)v8[3];
	if (a3)
	{
		v10 = a3;
	}
	else
	{
		v11 = sub_14018B280(496i64, 0);
		if (v11)
		{
			v10 = sub_1400B53E0(v11);
			v14 = v10;
			goto LABEL_18;
		}
		v10 = 0i64;
	}
	v14 = v10;
LABEL_18:
	if ((int)sub_1404445D0(a1, v10, v13) < 0)
	{
		if (!a3)
		{
			sub_14018B900((__int64)v10, 0);
			sub_1400B6120(*(_QWORD*)(a1 + 88), (__int64)&v13);
		}
		return 0i64;
	}
	v12 = (unsigned int)v9 >> 1;
	v10[114] = v12 & ((1 << *(_DWORD*)(a1 + 12)) - 1);
	v10[115] = v12 >> *(_DWORD*)(a1 + 12);
	if (!a3)
	{
		sub_1400B6120(*(_QWORD*)(a1 + 88), (__int64)&v13);
		sub_1400B6080(*(_QWORD*)(a1 + 88), (int*)&v13, &v14);
	}
	return v10;
}
// 1404445D0: using guessed type __int64 __fastcall sub_1404445D0(_QWORD, _QWORD, _QWORD);

