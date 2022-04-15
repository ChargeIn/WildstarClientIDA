//----- (00000001406AFC70) ----------------------------------------------------
__int64 __fastcall sub_1406AFC70(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx

	v1 = sub_140056AB0(a1, 1u);
	if (v1 && qword_140C659F0)
	{
		v3 = *(_QWORD*)(v1 + 16);
		v4 = v3 ? sub_1404B6E50(v2, v3) : sub_1404C9B90(v2, *(_DWORD*)(v1 + 8));
		if (v4)
		{
			if (*(_DWORD*)(v4 + 128) != 8)
			{
				sub_1404B9660(v5, *(_DWORD*)(v4 + 496));
				return 0i64;
			}
			sub_1404B97B0(v5, *(_QWORD*)(v4 + 88));
		}
	}
	return 0i64;
}
// 1406AFC9D: variable 'v2' is possibly undefined
// 1406AFCC0: variable 'v5' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

