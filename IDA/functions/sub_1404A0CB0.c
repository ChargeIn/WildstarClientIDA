//----- (00000001404A0CB0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A0CB0(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	int v6; // eax
	unsigned int v7; // eax
	__int64 v8; // rcx

	if (!qword_140C65980)
		return 0i64;
	if (!a2)
		return 0i64;
	v6 = *(_DWORD*)(a2 + 128);
	if (v6 != 20 && v6 != 23)
		return 0i64;
	v7 = sub_1405F68F0(a1, a4);
	return sub_1404A2090(v8, a3, v7, a5);
}
// 1404A0CEF: variable 'v8' is possibly undefined
// 140C65980: using guessed type __int64 qword_140C65980;
