//----- (00000001403E5A80) ----------------------------------------------------
__int64 __fastcall sub_1403E5A80(volatile signed __int32* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx

	result = (unsigned int)_InterlockedDecrement(a1 + 2);
	if (!(_DWORD)result)
	{
		sub_140198F50((__int64)a1, (int*)L"reloadui");
		sub_140198F50(v3, (int*)L"getTargetAnimation");
		sub_140198F50(v4, (int*)L"playTargetAnimation");
		if (a1)
			(*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)a1 + 16i64))(a1, 1i64);
		return 0i64;
	}
	return result;
}
// 1403E5AA8: variable 'v3' is possibly undefined
// 1403E5AB4: variable 'v4' is possibly undefined
// 140AF7D48: using guessed type wchar_t aPlaytargetanim[20];
// 140AF8090: using guessed type wchar_t aReloadui_0[9];
// 140AF80A8: using guessed type wchar_t aGettargetanima[19];

