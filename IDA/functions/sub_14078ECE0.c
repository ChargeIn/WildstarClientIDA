//----- (000000014078ECE0) ----------------------------------------------------
__int64 __fastcall sub_14078ECE0(_QWORD* a1)
{
	_DWORD* v1; // rax
	bool v3; // cf
	_DWORD* v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rbp
	__int64 v7; // r14
	_DWORD* v8; // rax
	__int64 v9; // rcx
	const char* v10; // r9
	const char* v11; // rax
	int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rsi
	_DWORD* v15; // rax
	__int64 v16; // rax
	bool v17; // sf
	__int64 v18; // rbx
	__int64 v19; // rax

	v1 = (_DWORD*)a1[3];
	v3 = (unsigned __int64)v1 < a1[2];
	v4 = dword_140A12138;
	if (v3)
		v4 = v1;
	v5 = 0i64;
	if (v4[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v4))
		{
		LABEL_10:
			v8 = (_DWORD*)a1[3];
			if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || (v9 = (int)v8[2], (_DWORD)v9 == -1))
				v10 = aNoValue;
			else
				v10 = off_140A123B0[v9];
			v11 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aString_0, v10);
			sub_140056570(a1, 1u, v11);
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = dword_140A12138;
		if (a1[3] < a1[2])
			v4 = (_DWORD*)a1[3];
	}
	v6 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	v7 = *(_QWORD*)v4 + 32i64;
	if (*(_QWORD*)v4 == -32i64)
		goto LABEL_10;
	v12 = sub_140056D60(a1, 2u);
	v13 = v12;
	if (v12 < 0)
		v13 = v6 + v12 + 1i64;
	v14 = 0i64;
	if (v13 >= 0)
		v14 = v13;
	v15 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v15 >= a1[2] || v15 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		LODWORD(v16) = -1;
	else
		LODWORD(v16) = sub_140056D60(a1, 3u);
	v16 = (int)v16;
	v17 = (__int64)(int)v16 < 0;
	if ((int)v16 < 0i64)
	{
		v16 = v6 + (int)v16 + 1i64;
		v17 = v16 < 0;
	}
	if (!v17)
		v5 = v16;
	if (v14 < 1)
		v14 = 1i64;
	if (v5 > v6)
		v5 = v6;
	if (v14 > v5)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v18 = a1[2];
		v19 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_140C65C3F, 0i64);
		*(_DWORD*)(v18 + 8) = 4;
		*(_QWORD*)v18 = v19;
		a1[2] += 16i64;
	}
	else
	{
		sub_140058710((__int64)a1, (unsigned __int64*)(v7 + v14 - 1), v5 - v14 + 1);
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

