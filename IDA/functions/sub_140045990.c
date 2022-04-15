//----- (0000000140045990) ----------------------------------------------------
LRESULT __fastcall sub_140045990(__int64 a1, HWND a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
	__int64 v7; // r8
	__int64 v8; // r10
	WPARAM v9; // r11

	if (!*(_DWORD*)(a1 + 168) && (_DWORD)a3 == 256 && a4 == 27)
	{
		sub_1400EA3E0(*(_QWORD*)(a1 + 72), "RealmBack", &unk_1409D0216);
		return 0i64;
	}
	else
	{
		sub_140047FC0(a1, a3, a3, a5);
		return sub_14003E1E0(v8, a2, v7, v9, a5);
	}
}
// 1400459F1: variable 'v8' is possibly undefined
// 1400459F1: variable 'v7' is possibly undefined
// 1400459F1: variable 'v9' is possibly undefined

