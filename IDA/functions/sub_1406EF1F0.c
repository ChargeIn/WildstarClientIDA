//----- (00000001406EF1F0) ----------------------------------------------------
__int64 __fastcall sub_1406EF1F0(_QWORD* a1)
{
	int v1; // eax
	__int64 v2; // rcx

	if (qword_140C65970 && qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120) && *(_DWORD*)(qword_140C65970 + 8) == 2)
	{
		v1 = sub_140056E70(a1, 1);
		if (v1)
			sub_1405711B0(v2, v1);
		sub_1405712A0(v2);
	}
	return 0i64;
}
// 1406EF22B: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

