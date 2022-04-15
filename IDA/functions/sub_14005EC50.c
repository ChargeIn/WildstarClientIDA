//----- (000000014005EC50) ----------------------------------------------------
__int64 __fastcall sub_14005EC50(__int64 a1, _DWORD* a2, _DWORD* a3, int a4, int a5)
{
	int v7; // edi
	_QWORD* v8; // rax
	int v9; // r8d
	__int64 v10; // r11

	v7 = (int)a2;
	v8 = sub_1400623D0(a1, a2, a5);
	if (!*((_DWORD*)v8 + 2))
	{
		v8 = sub_1400623D0(v10, a3, v9);
		if (!*((_DWORD*)v8 + 2))
			return 0i64;
	}
	sub_14005E780(v10, a4, (_DWORD)v8, v7, (__int64)a3);
	return 1i64;
}
// 14005EC81: variable 'v10' is possibly undefined
// 14005EC81: variable 'v9' is possibly undefined
// 14005E780: using guessed type __int64 __fastcall sub_14005E780(_DWORD, _DWORD, _DWORD, _DWORD, __int64);

