//----- (000000014005ED70) ----------------------------------------------------
__int64 __fastcall sub_14005ED70(__int64 a1, _DWORD* a2, _DWORD* a3, int a4)
{
	int v5; // esi
	int v7; // r8d
	_QWORD* v9; // rax
	__int64 v10; // r11
	int v11; // r11d
	_DWORD* v12; // rax
	int v13; // ecx

	v5 = (int)a2;
	if (!*((_DWORD*)sub_1400623D0(a1, a2, a4) + 2))
		return 0xFFFFFFFFi64;
	v9 = sub_1400623D0(a1, a3, v7);
	if (!(unsigned int)sub_14005AC20(v10, (__int64)v9))
		return 0xFFFFFFFFi64;
	sub_14005E780(a1, *(_QWORD*)(a1 + 16), v11, v5, (__int64)a3);
	v12 = *(_DWORD**)(a1 + 16);
	v13 = v12[2];
	return v13 && (v13 != 1 || *v12);
}
// 14005EDAC: variable 'v7' is possibly undefined
// 14005EDB7: variable 'v10' is possibly undefined
// 14005EDD2: variable 'v11' is possibly undefined
// 14005E780: using guessed type __int64 __fastcall sub_14005E780(_DWORD, _DWORD, _DWORD, _DWORD, __int64);

