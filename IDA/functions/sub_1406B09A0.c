//----- (00000001406B09A0) ----------------------------------------------------
__int64 __fastcall sub_1406B09A0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // r10
	unsigned int v7; // edx

	v1 = sub_140056AB0(a1, 1u);
	if (v1 && qword_140C659F0)
	{
		v3 = *(_QWORD*)(v1 + 16);
		if (v3)
			v4 = sub_1404B6E50(v2, v3);
		else
			v4 = sub_1404C9B90(v2, *(_DWORD*)(v1 + 8));
		v6 = v4;
		if (v4)
		{
			v7 = *(_DWORD*)(v4 + 676);
			if (*(_DWORD*)(v4 + 672) != v7 && (!v7 || sub_1404CA4F0(v5, v7)))
			{
				*(_DWORD*)(v6 + 672) = v7;
				*(_DWORD*)(v6 + 248) = v7;
				sub_1404C6B10(v6);
			}
		}
	}
	return 0i64;
}
// 1406B09CD: variable 'v2' is possibly undefined
// 1406B09F6: variable 'v5' is possibly undefined
// 1406B0A03: variable 'v7' is possibly undefined
// 1406B0A03: variable 'v6' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

