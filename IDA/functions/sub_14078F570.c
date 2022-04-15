//----- (000000014078F570) ----------------------------------------------------
__int64 __fastcall sub_14078F570(_QWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // rdi
	bool v3; // cf
	_DWORD* v4; // rcx
	int v5; // esi
	__int64 v6; // r14
	char* v7; // rbp
	_DWORD* v8; // rax
	__int64 v9; // rcx
	const char* v10; // r9
	const char* v11; // rax
	int v12; // eax
	unsigned __int64* v13; // r8
	int v14; // ebx
	unsigned __int64 v15; // r8
	unsigned __int64* v17; // [rsp+20h] [rbp-248h] BYREF
	int v18; // [rsp+28h] [rbp-240h]
	_QWORD* v19; // [rsp+30h] [rbp-238h]
	unsigned __int64 v20[65]; // [rsp+38h] [rbp-230h] BYREF

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
	v7 = (char*)(*(_QWORD*)v4 + 32i64);
	if (*(_QWORD*)v4 == -32i64)
		goto LABEL_10;
	v12 = sub_140056D60(v2, 2u);
	v13 = v20;
	v19 = v2;
	v17 = v20;
	v18 = 0;
	v14 = v12;
	if (v12 > 0)
	{
		do
		{
			--v14;
			sub_1400576C0((__int64)&v17, v7, v6);
		} while (v14 > 0);
		v2 = v19;
		v5 = v18;
		v13 = v17;
	}
	v15 = (char*)v13 - (char*)v20;
	if (v15)
	{
		sub_140058710((__int64)v2, v20, v15);
		v2 = v19;
		v5 = ++v18;
		v17 = v20;
	}
	sub_1400590E0(v2, v5);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 14078F570: using guessed type unsigned __int64 var_230[65];

