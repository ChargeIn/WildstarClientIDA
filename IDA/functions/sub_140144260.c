#include "../winhttp.h"

//----- (0000000140144260) ----------------------------------------------------
__int64 __fastcall sub_140144260(_QWORD* a1)
{
	unsigned int* v2; // rax
	unsigned __int64 v4; // rax
	__int128* v5; // rax
	char* v6; // rax
	int v7; // r8d
	const char* v8; // rdx
	char v9; // r9
	const char* v10; // rdx
	char v11; // r9
	const char* v12; // rdx
	char v13; // r9
	const char* v14; // rdx
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // r9
	unsigned __int64 v18; // r8
	__int64 v19; // rax
	_DWORD* v20; // rcx
	__int64 v21; // rbx
	_DWORD* v22; // rax
	__int64 v23; // rbx
	float v24; // xmm0_4
	__int64 v25; // rax
	__int128 v26; // [rsp+20h] [rbp-18h] BYREF

	v2 = (unsigned int*)sub_140143AE0((__int64)a1, 1);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = *v2;
	if (v4 >= *(_QWORD*)(qword_140C63678 + 48))
		v5 = *(__int128**)(qword_140C63678 + 40);
	else
		v5 = (__int128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v4);
	v26 = *v5;
	v6 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v7 = *v6;
	if (v7 == 114)
	{
		v8 = "r";
		v9 = 114;
		while (v9)
		{
			v9 = v8[v6 - "r" + 1];
			if (v9 != *++v8)
				goto LABEL_10;
		}
		v24 = *(float*)&v26;
		goto LABEL_29;
	}
LABEL_10:
	if (v7 == 103)
	{
		v10 = "g";
		v11 = 103;
		while (v11)
		{
			v11 = (v10++)[v6 - "g" + 1];
			if (v11 != *v10)
				goto LABEL_14;
		}
		v24 = *((float*)&v26 + 1);
		goto LABEL_29;
	}
LABEL_14:
	if (v7 == 98)
	{
		v12 = "b";
		v13 = 98;
		while (v13)
		{
			v13 = (v12++)[v6 - "b" + 1];
			if (v13 != *v12)
				goto LABEL_18;
		}
		v24 = *((float*)&v26 + 2);
		goto LABEL_29;
	}
LABEL_18:
	if (v7 == 97)
	{
		v14 = "a";
		while ((_BYTE)v7)
		{
			LOBYTE(v7) = (v14++)[v6 - "a" + 1];
			if ((_BYTE)v7 != *v14)
				goto LABEL_22;
		}
		v24 = *((float*)&v26 + 3);
	LABEL_29:
		v25 = a1[2];
		*(double*)v25 = v24;
		*(_DWORD*)(v25 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
LABEL_22:
	v15 = a1[4];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo.ApolloColor", 0x12ui64);
	v17 = a1[2];
	*(_QWORD*)&v26 = v16;
	DWORD2(v26) = 4;
	sub_14005E8E0((__int64)a1, v15 + 160, (int*)&v26, v17);
	a1[2] += 16i64;
	v18 = a1[2];
	v19 = a1[3];
	v20 = dword_140A12138;
	v21 = v18 - v19;
	v22 = (_DWORD*)(v19 + 16);
	v23 = v21 >> 4;
	if ((unsigned __int64)v22 < v18)
		v20 = v22;
	*(_QWORD*)v18 = *(_QWORD*)v20;
	*(_DWORD*)(v18 + 8) = v20[2];
	a1[2] += 16i64;
	sub_14005E8E0((__int64)a1, a1[2] - 32i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
	sub_140058350((__int64)a1, v23);
	a1[2] -= 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63678: using guessed type __int64 qword_140C63678;

