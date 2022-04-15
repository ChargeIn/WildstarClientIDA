#include "../winhttp.h"

//----- (00000001400061E0) ----------------------------------------------------
void __fastcall sub_1400061E0(__int64 a1, _DWORD* a2)
{
	unsigned __int64 v2; // r9
	unsigned __int64 v3; // rax
	_DWORD* v6; // rcx
	_DWORD* v7; // r8
	_DWORD* v8; // rcx
	__int64 v9; // rax
	int v10; // r9d
	int v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	void(__fastcall * v13)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 144);
	v3 = 0i64;
	if (!v2)
		goto LABEL_7;
	v6 = *(_DWORD**)(a1 + 136);
	v7 = v6;
	while (*v7 != *a2)
	{
		++v3;
		v7 += 2;
		if (v3 >= v2)
			goto LABEL_7;
	}
	v8 = &v6[2 * v3];
	if (!v8)
	{
	LABEL_7:
		v8 = (_DWORD*)(*(_QWORD*)(a1 + 136) + 8 * sub_140007660((__int64*)(a1 + 136)));
		*v8 = *a2;
	}
	v8[1] = dword_140C636A8 + 1000 * a2[1];
	if (qword_140C65898)
	{
		v9 = *(_QWORD*)(qword_140C65898 + 29504) + 5896i64;
		if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5976i64))
		{
			v10 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5952i64);
			v13 = sub_1400A8020;
			v11 = 0;
			v12 = v9;
			v14 = 0i64;
			sub_140195960(v9 + 64, 0, (__int64)&v11, v10);
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

