#include "../winhttp.h"

//----- (000000014078FBE0) ----------------------------------------------------
__int64 __fastcall sub_14078FBE0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rcx
	const char* v5; // r9
	const char* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rdi
	int v11; // edx
	__int64 v13[3]; // [rsp+20h] [rbp-E0h] BYREF
	int v14; // [rsp+38h] [rbp-C8h]
	int v15; // [rsp+3Ch] [rbp-C4h]
	unsigned __int64* v16; // [rsp+40h] [rbp-C0h] BYREF
	int v17; // [rsp+48h] [rbp-B8h]
	_QWORD* v18; // [rsp+50h] [rbp-B0h]
	unsigned __int64 v19[65]; // [rsp+58h] [rbp-A8h] BYREF
	int v20[4]; // [rsp+260h] [rbp+160h] BYREF

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 6)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v4 = (int)v1[2];
			if ((_DWORD)v4 != -1)
			{
				v5 = off_140A123B0[v4];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v5 = aNoValue;
	LABEL_9:
		v6 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aFunction_3, v5);
		sub_140056570(a1, 1u, v6);
	}
	for (; a1[2] < (unsigned __int64)(a1[3] + 16i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	v7 = a1[3];
	v18 = a1;
	v8 = v7 + 16;
	v16 = v19;
	v17 = 0;
	a1[2] = v8;
	if (*(_DWORD*)(v8 - 8) != 6)
		goto LABEL_15;
	v9 = *(_QWORD*)(v8 - 16);
	if (*(_BYTE*)(v9 + 10))
		goto LABEL_15;
	v10 = *(_QWORD*)(v9 + 32);
	v14 = 0;
	v13[1] = (__int64)sub_14078FBC0;
	v13[2] = (__int64)&v16;
	v13[0] = (__int64)a1;
	v20[0] = dword_140C1E4D8;
	v20[1] = 67174481;
	v20[2] = 525320;
	v15 = sub_14078FBC0((__int64)a1, (char*)v20, 12i64, (__int64)&v16);
	sub_14005B740(v10, 0i64, v13);
	if (v15)
		LABEL_15:
	sub_140056830(a1, (unsigned __int64*)aUnableToDumpGi);
	if (v16 == v19)
	{
		v11 = v17;
	}
	else
	{
		sub_140058710((__int64)v18, v19, (char*)v16 - (char*)v19);
		v11 = v17 + 1;
		v16 = v19;
		++v17;
	}
	sub_1400590E0(v18, v11);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 140C1E4D8: using guessed type int dword_140C1E4D8;
// 14078FBE0: using guessed type unsigned __int64 var_228[65];

