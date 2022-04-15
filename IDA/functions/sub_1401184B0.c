//----- (00000001401184B0) ----------------------------------------------------
__int64 __fastcall sub_1401184B0(__int64 a1, int a2)
{
	_DWORD* v3; // rax
	int v4; // r10d
	int v5; // ecx
	__int64 v6; // rax
	int* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v14; // rax
	_DWORD* v15; // r11
	__int64 result; // rax
	__int64 v17; // r11
	__int64 v18; // [rsp+20h] [rbp-18h] BYREF
	int v19; // [rsp+28h] [rbp-10h]

	v3 = sub_1400580E0(a1, a2);
	v5 = v3[2];
	if (v5 == 2)
	{
		v6 = *(_QWORD*)v3;
	}
	else
	{
		if (v5 != 7)
			return 0i64;
		v6 = *(_QWORD*)v3 + 48i64;
	}
	if (!v6)
		return 0i64;
	v7 = (int*)sub_1400580E0(a1, v4);
	v8 = v7[2];
	if ((_DWORD)v8 == 5 || (_DWORD)v8 == 7)
		v9 = *(_QWORD*)(*(_QWORD*)v7 + 16i64);
	else
		v9 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v8 + 224);
	if (!v9)
		return 0i64;
	v10 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v10 = v9;
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v11 = *(_QWORD*)(a1 + 32);
	v12 = sub_140062650(a1, (unsigned __int64*)"CColor", 6ui64);
	v13 = *(_QWORD*)(a1 + 16);
	v18 = v12;
	v19 = 4;
	sub_14005E8E0(a1, v11 + 160, (int*)&v18, v13);
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = *(_QWORD*)(a1 + 16);
	v15 = (_DWORD*)(v14 - 32);
	if ((_DWORD*)(v14 - 16) == dword_140A12138 || v15 == dword_140A12138)
	{
		result = 0i64;
		*(_QWORD*)(a1 + 16) = v15;
	}
	else
	{
		result = sub_14005AC20(v14 - 16, (__int64)v15);
		*(_QWORD*)(a1 + 16) = v17;
	}
	return result;
}
// 1401184ED: variable 'v4' is possibly undefined
// 1401185A3: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

