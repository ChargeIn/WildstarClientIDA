#include "../winhttp.h"

//----- (000000014078F0D0) ----------------------------------------------------
__int64 __fastcall sub_14078F0D0(_QWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // rdi
	bool v3; // cf
	_DWORD* v4; // rcx
	unsigned __int64 v5; // r14
	unsigned __int64 v6; // r15
	__int64 v7; // r12
	_DWORD* v8; // rax
	__int64 v9; // rcx
	const char* v10; // r9
	const char* v11; // rax
	unsigned __int64* v12; // rsi
	unsigned __int64 v13; // rsi
	__int64 v14; // rbx
	__int64 v15; // rax
	char v16; // al
	unsigned __int64 v17; // rsi
	__int64 v18; // rbx
	__int64 v19; // rax
	unsigned __int64* v21; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v22; // [rsp+30h] [rbp-D8h]
	_QWORD* v23; // [rsp+38h] [rbp-D0h]
	unsigned __int64 v24[64]; // [rsp+40h] [rbp-C8h] BYREF
	unsigned __int64 v25; // [rsp+240h] [rbp+138h] BYREF

	v1 = (_DWORD*)a1[3];
	v2 = a1;
	v3 = (unsigned __int64)v1 < a1[2];
	v4 = dword_140A12138;
	if (v3)
		v4 = v1;
	v5 = 0i64;
	if (v4[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)v2, (__int64)v4))
		{
		LABEL_10:
			v8 = (_DWORD*)v2[3];
			if ((unsigned __int64)v8 >= v2[2] || v8 == dword_140A12138 || (v9 = (int)v8[2], (_DWORD)v9 == -1))
				v10 = aNoValue;
			else
				v10 = off_140A123B0[v9];
			v11 = (const char*)sub_140058780((__int64)v2, (unsigned __int64*)"%s expected, got %s", aString_0, v10);
			sub_140056570(v2, 1u, v11);
		}
		if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
			sub_14005E2C0((__int64)v2);
		v4 = dword_140A12138;
		if (v2[3] < v2[2])
			v4 = (_DWORD*)v2[3];
	}
	v6 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	v7 = *(_QWORD*)v4 + 32i64;
	if (*(_QWORD*)v4 == -32i64)
		goto LABEL_10;
	v12 = v24;
	v23 = v2;
	LODWORD(v22) = 0;
	v21 = v24;
	if (v6)
	{
		do
		{
			if (v12 >= &v25)
			{
				v13 = (char*)v12 - (char*)v24;
				if (v13)
				{
					if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
						sub_14005E2C0((__int64)v2);
					v14 = v2[2];
					v15 = sub_140062650((__int64)v2, v24, v13);
					*(_DWORD*)(v14 + 8) = 4;
					*(_QWORD*)v14 = v15;
					v2[2] += 16i64;
					LODWORD(v22) = v22 + 1;
					v21 = v24;
					sub_1400575B0((__int64)&v21);
				}
			}
			v16 = sub_1407F69AC(*(unsigned __int8*)(v7 + v5++));
			*(_BYTE*)v21 = v16;
			v2 = v23;
			v12 = (unsigned __int64*)((char*)v21 + 1);
			v21 = (unsigned __int64*)((char*)v21 + 1);
		} while (v5 < v6);
		LODWORD(v5) = v22;
	}
	v17 = (char*)v12 - (char*)v24;
	if (v17)
	{
		if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
			sub_14005E2C0((__int64)v2);
		v18 = v2[2];
		v19 = sub_140062650((__int64)v2, v24, v17);
		*(_DWORD*)(v18 + 8) = 4;
		*(_QWORD*)v18 = v19;
		v2[2] += 16i64;
		v2 = v23;
		LODWORD(v5) = v22 + 1;
		v21 = v24;
		LODWORD(v22) = v22 + 1;
	}
	sub_1400590E0(v2, v5);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 14078F0D0: using guessed type unsigned __int64 var_38;

