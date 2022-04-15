#include "../winhttp.h"

//----- (00000001400D5220) ----------------------------------------------------
char __fastcall sub_1400D5220(__int64 a1)
{
	int v2; // r8d
	__int64 v3; // rdx
	char* v4; // rax
	_QWORD* v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int* v9; // r9
	unsigned __int64* v10; // rbx
	__int64 v11; // rax
	__int64* v12; // r14
	__int64 v13; // rsi
	__int64 v14; // rax
	__int64 v15; // r8
	_QWORD* v16; // rax
	__int64 v17; // rcx
	__int64* v18; // rax
	unsigned __int64 v19; // r8
	__int64* v20; // rsi
	__int64 v21; // rax
	unsigned int* v22; // r9
	__int64 v24; // [rsp+20h] [rbp-4038h] BYREF
	__int64 v25; // [rsp+28h] [rbp-4030h]
	__int64 v26[2048]; // [rsp+30h] [rbp-4028h] BYREF

	sub_1407E4830((int*)v26, 0i64, 0x4000ui64);
	v2 = 0;
	v3 = 0i64;
	do
	{
		v4 = (&off_140C56A80)[v3];
		++v2;
		v3 += 2i64;
		*(__int64*)((char*)&v24 + v3 * 8) = (__int64)v4;
		v26[v3 - 1] = (__int64)(&off_140C56A80)[v3 - 1];
	} while ((unsigned __int64)v2 < 0x97);
	v5 = *(_QWORD**)(a1 + 400);
	sub_1400569B0((__int64)v5, (unsigned __int64*)"Apollo.Window");
	v6 = v5[2];
	*(_QWORD*)v6 = *(_QWORD*)(v6 - 16);
	*(_DWORD*)(v6 + 8) = *(_DWORD*)(v6 - 8);
	v5[2] += 16i64;
	v7 = v5[2];
	v8 = sub_140062650((__int64)v5, (unsigned __int64*)"__index", 7ui64);
	v9 = (unsigned int*)(v5[2] - 16i64);
	v24 = v8;
	LODWORD(v25) = 4;
	sub_14005EA50((__int64)v5, (__int64*)(v7 - 32), (int*)&v24, v9);
	v5[2] -= 16i64;
	v10 = (unsigned __int64*)v26[0];
	v11 = v5[2];
	v12 = v26;
	if (v26[0])
	{
		do
		{
			v13 = v12[1];
			if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
				sub_14005E2C0((__int64)v5);
			v14 = v5[5];
			if (v14 == v5[10])
				v15 = v5[15];
			else
				v15 = *(_QWORD*)(**(_QWORD**)(v14 + 8) + 24i64);
			v16 = sub_140060AB0((__int64)v5, 0, v15);
			v16[4] = v13;
			v17 = v5[2];
			*(_QWORD*)v17 = v16;
			*(_DWORD*)(v17 + 8) = 6;
			v5[2] += 16i64;
			v18 = (__int64*)sub_1400580E0((__int64)v5, -2);
			v19 = -1i64;
			v20 = v18;
			do
				++v19;
			while (*((_BYTE*)v10 + v19));
			v21 = sub_140062650((__int64)v5, v10, v19);
			v22 = (unsigned int*)(v5[2] - 16i64);
			v24 = v21;
			LODWORD(v25) = 4;
			sub_14005EA50((__int64)v5, v20, (int*)&v24, v22);
			v5[2] -= 16i64;
			v10 = (unsigned __int64*)v12[2];
			v11 = v5[2];
			v12 += 2;
		} while (v10);
	}
	v5[2] = v11 - 16;
	return sub_1400F2440(a1 + 384, (__int64)"Window", (__int64)sub_1400D5450);
}
// 140C56A80: using guessed type char *off_140C56A80;

