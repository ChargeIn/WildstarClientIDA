//----- (00000001405C3C00) ----------------------------------------------------
__int64 __fastcall sub_1405C3C00(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rcx
	int v3; // eax
	int v4; // eax
	_BOOL8 v5; // r9

	v2 = qword_140C65B98;
	if (*a2)
	{
		v3 = *(_DWORD*)(qword_140C65B98 + 172);
		++* (_DWORD*)(qword_140C65B98 + 176);
		if (v3)
			*(_DWORD*)(v2 + 172) = v3 - 1;
	}
	else
	{
		v4 = *(_DWORD*)(qword_140C65B98 + 180);
		++* (_DWORD*)(qword_140C65B98 + 184);
		if (v4)
			*(_DWORD*)(v2 + 180) = v4 - 1;
	}
	v5 = !*(_DWORD*)(v2 + 172) && !*(_DWORD*)(v2 + 180);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchingGamePendingUpdate", "b", v5);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

