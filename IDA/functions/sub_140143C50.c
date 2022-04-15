#include "../winhttp.h"

//----- (0000000140143C50) ----------------------------------------------------
__int64 __fastcall sub_140143C50(_QWORD* a1)
{
	int* v1; // rdx
	unsigned __int64 v2; // r8
	_DWORD* v3; // rax
	int v5; // ecx
	__int64 v6; // rcx
	int* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	__int64 v13; // rax
	int v14; // ebx
	_DWORD* v15; // r11
	int v16; // eax
	__int64 result; // rax
	__int64 v18; // [rsp+20h] [rbp-18h] BYREF
	int v19; // [rsp+28h] [rbp-10h]

	v1 = (int*)a1[3];
	v2 = a1[2];
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 < v2)
		v3 = (_DWORD*)a1[3];
	v5 = v3[2];
	if (v5 == 2)
	{
		v6 = *(_QWORD*)v3;
	}
	else
	{
		if (v5 != 7)
			return 0i64;
		v6 = *(_QWORD*)v3 + 48i64;
	}
	if (!v6)
		return 0i64;
	v7 = dword_140A12138;
	if ((unsigned __int64)v1 < v2)
		v7 = v1;
	v8 = v7[2];
	if ((_DWORD)v8 == 5 || (_DWORD)v8 == 7)
		v9 = *(_QWORD*)(*(_QWORD*)v7 + 16i64);
	else
		v9 = *(_QWORD*)(a1[4] + 8 * v8 + 224);
	if (!v9)
		return 0i64;
	*(_QWORD*)v2 = v9;
	*(_DWORD*)(v2 + 8) = 5;
	a1[2] += 16i64;
	v10 = a1[4];
	v11 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo.ApolloColor", 0x12ui64);
	v12 = a1[2];
	v18 = v11;
	v19 = 4;
	sub_14005E8E0((__int64)a1, v10 + 160, (int*)&v18, v12);
	a1[2] += 16i64;
	v13 = a1[2];
	v14 = 0;
	v15 = (_DWORD*)(v13 - 32);
	if ((_DWORD*)(v13 - 16) == dword_140A12138 || v15 == dword_140A12138)
		v16 = 0;
	else
		v16 = sub_14005AC20(v13 - 16, v13 - 32);
	a1[2] = v15;
	v15[2] = 1;
	LOBYTE(v14) = v16 != 0;
	result = 1i64;
	*v15 = v14;
	a1[2] += 16i64;
	return result;
}
// 140143D50: variable 'v15' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

