//----- (000000014078EBE0) ----------------------------------------------------
__int64 __fastcall sub_14078EBE0(_QWORD* a1)
{
	_DWORD* v1; // rax
	bool v3; // cf
	_DWORD* v4; // rcx
	__int64 v5; // rdi
	_DWORD* v6; // rax
	__int64 v7; // rcx
	const char* v8; // r9
	const char* v9; // rax
	__int64 v10; // rcx
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	v3 = (unsigned __int64)v1 < a1[2];
	v4 = dword_140A12138;
	if (v3)
		v4 = v1;
	if (v4[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v4))
		{
		LABEL_10:
			v6 = (_DWORD*)a1[3];
			if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || (v7 = (int)v6[2], (_DWORD)v7 == -1))
				v8 = aNoValue;
			else
				v8 = off_140A123B0[v7];
			v9 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aString_0, v8);
			sub_140056570(a1, 1u, v9);
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = dword_140A12138;
		if (a1[3] < a1[2])
			v4 = (_DWORD*)a1[3];
	}
	v5 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	if (*(_QWORD*)v4 == -32i64)
		goto LABEL_10;
	v10 = a1[2];
	*(_DWORD*)(v10 + 8) = 3;
	result = 1i64;
	*(double*)v10 = (double)(int)v5;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

