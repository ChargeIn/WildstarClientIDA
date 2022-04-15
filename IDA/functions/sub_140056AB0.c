//----- (0000000140056AB0) ----------------------------------------------------
__int64 __fastcall sub_140056AB0(_QWORD* a1, unsigned int a2)
{
	_DWORD* v4; // rax
	int v5; // ecx
	__int64 v6; // rdi
	int* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rax
	_DWORD* v12; // r11
	__int64 v13; // r11

	v4 = sub_1400580E0((__int64)a1, a2);
	v5 = v4[2];
	if (v5 == 2)
	{
		v6 = *(_QWORD*)v4;
	}
	else
	{
		if (v5 != 7)
			goto LABEL_15;
		v6 = *(_QWORD*)v4 + 48i64;
	}
	if (!v6)
		goto LABEL_15;
	v7 = (int*)sub_1400580E0((__int64)a1, a2);
	v8 = v7[2];
	if ((_DWORD)v8 == 5 || (_DWORD)v8 == 7)
		v9 = *(_QWORD*)(*(_QWORD*)v7 + 16i64);
	else
		v9 = *(_QWORD*)(a1[4] + 8 * v8 + 224);
	if (!v9
		|| (v10 = a1[2],
			*(_QWORD*)v10 = v9,
			*(_DWORD*)(v10 + 8) = 5,
			a1[2] += 16i64,
			sub_140058890((__int64)a1, -10000),
			v11 = a1[2],
			v12 = (_DWORD*)(v11 - 32),
			(_DWORD*)(v11 - 16) == dword_140A12138)
		|| v12 == dword_140A12138
		|| !(unsigned int)sub_14005AC20(v11 - 16, (__int64)v12))
	{
	LABEL_15:
		sub_140056690(a1, a2);
	}
	a1[2] = v13;
	return v6;
}
// 140056B75: variable 'v13' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

