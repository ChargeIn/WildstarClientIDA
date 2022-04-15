//----- (000000014078C590) ----------------------------------------------------
__int64 __fastcall sub_14078C590(_QWORD* a1, int a2)
{
	_DWORD* v4; // rcx
	unsigned __int64 v5; // r8
	_DWORD* v6; // rdi
	__int64 v7; // rax
	const char* v8; // r9
	const char* v9; // rax
	unsigned __int64* v11; // rax
	unsigned __int64 v12; // r8

	sub_140056D60(a1, 2u);
	v4 = (_DWORD*)a1[3];
	v5 = a1[2];
	v6 = dword_140A12138;
	if ((unsigned __int64)v4 >= v5)
		goto LABEL_8;
	if (v4 == dword_140A12138 || v4[2] != 6)
	{
		if ((unsigned __int64)v4 < v5 && v4 != dword_140A12138)
		{
			v7 = (int)v4[2];
			if ((_DWORD)v7 != -1)
			{
				v8 = off_140A123B0[v7];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v8 = aNoValue;
	LABEL_9:
		v9 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aFunction_3, v8);
		sub_140056570(a1, 1u, v9);
	}
	if (a1[3] < a1[2])
		v6 = (_DWORD*)a1[3];
	if (v6[2] == 6 && *(_BYTE*)(*(_QWORD*)v6 + 10i64))
		return 0i64;
	v11 = (unsigned __int64*)(a2 ? sub_1400591E0((__int64)a1) : sub_140059280((__int64)a1));
	if (!v11)
		return 0i64;
	v12 = -1i64;
	do
		++v12;
	while (*((_BYTE*)v11 + v12));
	sub_140058710((__int64)a1, v11, v12);
	sub_140058350((__int64)a1, -1 - a2);
	return (unsigned int)(a2 + 1);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

