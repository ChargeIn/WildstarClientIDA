//----- (00000001404033A0) ----------------------------------------------------
__int64 __fastcall sub_1404033A0(__int64 a1, __int64 a2)
{
	_WORD* v2; // rax
	__int64* v3; // rdi
	__int16* v5; // rax

	v2 = *(_WORD**)(a2 + 24);
	v3 = (__int64*)qword_140C658A0;
	if (v2 && *v2)
	{
		v5 = sub_14034BDD0(a1, *(_DWORD*)(a2 + 16));
		sub_140003890(v3, *(_DWORD*)a2, *(_QWORD*)(a2 + 8), *(int**)(a2 + 24), 0, (int*)v5);
	}
	return 0i64;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

