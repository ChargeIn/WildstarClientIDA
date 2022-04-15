#include "../winhttp.h"

//----- (0000000140049D20) ----------------------------------------------------
__int64 __fastcall sub_140049D20(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	char** v7; // rbx
	char* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64* v14; // r10
	unsigned __int64 v15; // r8
	__int64* v16; // rsi
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v20; // [rsp+20h] [rbp-18h] BYREF
	int v21; // [rsp+28h] [rbp-10h]

	v1 = *(_QWORD**)(a1 + 400);
	sub_1400569B0((__int64)v1, (unsigned __int64*)"Client.ScreenModelActor");
	v2 = v1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	v1[2] += 16i64;
	v3 = v1[2];
	v4 = sub_140062650((__int64)v1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(v1[2] - 16i64);
	v20 = v4;
	v21 = 4;
	sub_14005EA50((__int64)v1, (__int64*)(v3 - 32), (int*)&v20, v5);
	v1[2] -= 16i64;
	v6 = v1[2];
	v7 = &off_140B55B30;
	if ("__gc")
	{
		do
		{
			v8 = v7[1];
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v9 = v1[5];
			if (v9 == v1[10])
				v10 = v1[15];
			else
				v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
			v11 = sub_140060AB0((__int64)v1, 0, v10);
			v11[4] = v8;
			v12 = v1[2];
			*(_QWORD*)v12 = v11;
			*(_DWORD*)(v12 + 8) = 6;
			v1[2] += 16i64;
			v13 = (__int64*)sub_1400580E0((__int64)v1, -2);
			v15 = -1i64;
			v16 = v13;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			v17 = sub_140062650((__int64)v1, v14, v15);
			v18 = (unsigned int*)(v1[2] - 16i64);
			v20 = v17;
			v21 = 4;
			sub_14005EA50((__int64)v1, v16, (int*)&v20, v18);
			v1[2] -= 16i64;
			v6 = v1[2];
			v7 += 2;
		} while (*v7);
	}
	v1[2] = v6;
	return 1i64;
}
// 140049E33: variable 'v14' is possibly undefined
// 140B55B30: using guessed type char *off_140B55B30;

