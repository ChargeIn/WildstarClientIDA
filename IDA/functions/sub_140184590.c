//----- (0000000140184590) ----------------------------------------------------
__int64 __fastcall sub_140184590(__int64 a1)
{
	_DWORD* v2; // rax
	int v3; // ecx
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // rax
	unsigned int v13; // r11d
	_DWORD* v14; // rbx
	int v15; // eax
	__int64 v17; // [rsp+20h] [rbp-18h] BYREF
	int v18; // [rsp+28h] [rbp-10h]

	v2 = sub_1400580E0(a1, 2);
	v3 = v2[2];
	if (v3 == 2)
	{
		v4 = *(_QWORD*)v2;
	}
	else
	{
		if (v3 != 7)
			return 0i64;
		v4 = *(_QWORD*)v2 + 48i64;
	}
	if (!v4)
		return 0i64;
	v5 = (int*)sub_1400580E0(a1, 2);
	v6 = v5[2];
	if ((_DWORD)v6 == 5 || (_DWORD)v6 == 7)
		v7 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
	else
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v6 + 224);
	if (!v7)
		return 0i64;
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v8 = v7;
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = *(_QWORD*)(a1 + 32);
	v10 = sub_140062650(a1, (unsigned __int64*)"Time", 4ui64);
	v11 = *(_QWORD*)(a1 + 16);
	v17 = v10;
	v18 = 4;
	sub_14005E8E0(a1, v9 + 160, (int*)&v17, v11);
	*(_QWORD*)(a1 + 16) += 16i64;
	v12 = *(_QWORD*)(a1 + 16);
	v13 = 0;
	v14 = (_DWORD*)(v12 - 32);
	if ((_DWORD*)(v12 - 16) == dword_140A12138 || v14 == dword_140A12138)
		v15 = 0;
	else
		v15 = sub_14005AC20(v12 - 16, (__int64)v14);
	*(_QWORD*)(a1 + 16) = v14;
	LOBYTE(v13) = v15 != 0;
	return v13;
}
// 140184699: variable 'v13' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

