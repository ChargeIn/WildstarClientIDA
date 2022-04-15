//----- (0000000140403330) ----------------------------------------------------
__int64 __fastcall sub_140403330(__int64 a1, __int64 a2)
{
	__int64* v2; // rsi
	__int16* v4; // rbx
	__int64 v5; // rcx
	__int16* v6; // rax

	v2 = (__int64*)qword_140C658A0;
	if (*(_DWORD*)(a2 + 20))
	{
		v4 = sub_14034BDD0(a1, *(_DWORD*)(a2 + 16));
		v6 = sub_14034BDD0(v5, *(_DWORD*)(a2 + 20));
		sub_140003890(v2, *(_DWORD*)a2, *(_QWORD*)(a2 + 8), (int*)v6, 0, (int*)v4);
	}
	return 0i64;
}
// 14040335D: variable 'v5' is possibly undefined
// 140C658A0: using guessed type __int64 qword_140C658A0;

