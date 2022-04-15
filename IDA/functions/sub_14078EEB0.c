#include "../winhttp.h"

//----- (000000014078EEB0) ----------------------------------------------------
__int64 __fastcall sub_14078EEB0(_QWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // rdi
	bool v3; // cf
	_DWORD* v4; // rcx
	int v5; // ebx
	__int64 v6; // rsi
	__int64 v7; // r15
	_DWORD* v8; // rax
	__int64 v9; // rcx
	const char* v10; // r9
	const char* v11; // rax
	unsigned __int64* v12; // r8
	unsigned __int64 v13; // r14
	__int64 v14; // rbx
	__int64 v15; // rax
	unsigned __int64 v16; // r8
	unsigned __int64* v18; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v19; // [rsp+30h] [rbp-D8h]
	_QWORD* v20; // [rsp+38h] [rbp-D0h]
	unsigned __int64 v21[64]; // [rsp+40h] [rbp-C8h] BYREF
	unsigned __int64 v22; // [rsp+240h] [rbp+138h] BYREF

	v1 = (_DWORD*)a1[3];
	v2 = a1;
	v3 = (unsigned __int64)v1 < a1[2];
	v4 = dword_140A12138;
	if (v3)
		v4 = v1;
	v5 = 0;
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
	v12 = v21;
	v20 = v2;
	LODWORD(v19) = 0;
	v18 = v21;
	if (v6)
	{
		do
		{
			--v6;
			if (v12 >= &v22)
			{
				v13 = (char*)v12 - (char*)v21;
				if (v12 != v21)
				{
					if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
						sub_14005E2C0((__int64)v2);
					v14 = v2[2];
					v15 = sub_140062650((__int64)v2, v21, v13);
					*(_DWORD*)(v14 + 8) = 4;
					*(_QWORD*)v14 = v15;
					v2[2] += 16i64;
					LODWORD(v19) = v19 + 1;
					v18 = v21;
					sub_1400575B0((__int64)&v18);
					v12 = v18;
				}
			}
			*(_BYTE*)v12 = *(_BYTE*)(v7 + v6);
			v2 = v20;
			v12 = (unsigned __int64*)((char*)v18 + 1);
			v18 = (unsigned __int64*)((char*)v18 + 1);
		} while (v6);
		v5 = v19;
	}
	v16 = (char*)v12 - (char*)v21;
	if (v16)
	{
		sub_140058710((__int64)v2, v21, v16);
		v2 = v20;
		v5 = v19 + 1;
		LODWORD(v19) = v19 + 1;
		v18 = v21;
	}
	sub_1400590E0(v2, v5);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 14078EEB0: using guessed type unsigned __int64 var_28;

