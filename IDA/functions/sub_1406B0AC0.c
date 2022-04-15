//----- (00000001406B0AC0) ----------------------------------------------------
__int64 __fastcall sub_1406B0AC0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	_DWORD* v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && qword_140C659F0)
	{
		v4 = *(_QWORD*)(v2 + 16);
		if (v4)
			v5 = sub_1404B6E50(v3, v4);
		else
			v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8));
		v6 = (_DWORD*)v5;
		if (v5)
		{
			v7 = sub_140056AB0(a1, 2u);
			if (v7)
			{
				v9 = sub_1404C9B90(v8, *(_DWORD*)(v7 + 8));
				sub_1404B84D0(v10, v9, v6);
			}
		}
	}
	return 0i64;
}
// 1406B0AF6: variable 'v3' is possibly undefined
// 1406B0B29: variable 'v8' is possibly undefined
// 1406B0B34: variable 'v10' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

