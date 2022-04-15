//----- (00000001406AF9F0) ----------------------------------------------------
__int64 __fastcall sub_1406AF9F0(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rbx
	int v8; // eax
	_DWORD* v10; // rcx
	int v11; // eax
	_QWORD* i; // rax
	_QWORD* v13; // [rsp+38h] [rbp+10h] BYREF

	v1 = 1;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3 || !qword_140C659F0)
		return 0i64;
	v5 = *(_QWORD*)(v3 + 16);
	v6 = v5 ? sub_1404B6E50(v4, v5) : sub_1404C9B90(v4, *(_DWORD*)(v3 + 8));
	v7 = v6;
	if (!v6)
		return 0i64;
	v8 = *(_DWORD*)(v6 + 672);
	if (v8 && v8 != *(_DWORD*)(v7 + 676))
	{
		sub_1403CC530(qword_140C65898, 0x67u);
		return 0i64;
	}
	if (!*(_DWORD*)(v7 + 304) || *(_QWORD*)(v7 + 88))
	{
		sub_1404B92A0(qword_140C659F0, *(_DWORD*)(v7 + 496), 0, 0);
		if ((*(int(__fastcall**)(__int64, _QWORD**))(*(_QWORD*)v7 + 208i64))(v7, &v13) >= 0)
		{
			for (i = v13; i; v13 = i)
			{
				sub_1406B0F90(i);
				i = (_QWORD*)v13[5];
			}
		}
		sub_1404B95D0(qword_140C659F0);
		return 0i64;
	}
	v10 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v10 = (_DWORD*)(a1[3] + 16i64);
	v11 = v10[2];
	if (!v11 || v11 == 1 && !*v10)
		v1 = 0;
	sub_1404B8B40((__int64)v10, *(_DWORD*)(v7 + 496), v1);
	return 0i64;
}
// 1406AFA35: variable 'v4' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

