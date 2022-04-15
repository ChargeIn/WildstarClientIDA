//----- (00000001406B9790) ----------------------------------------------------
__int64 __fastcall sub_1406B9790(_QWORD* a1, unsigned int a2)
{
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // r8
	__int64 v9; // [rsp+50h] [rbp+18h]

	v3 = *(_QWORD*)(qword_140C65A38 + 16);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v9 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v9 = *(_QWORD*)(qword_140C65A38 + 16);
	if (v9 == v3)
		return 0i64;
	v6 = *(_QWORD*)(v9 + 40);
	if (!v6)
		return 0i64;
	v7 = *(unsigned int*)(*(_QWORD*)(v6 + 8) + 8i64);
	if ((_DWORD)v7
		&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(qword_140C65898 + 120),
				v7,
				0i64,
				0i64,
				0))
	{
		return 0i64;
	}
	else
	{
		return sub_1404338E0(a1, v6);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65A38: using guessed type __int64 qword_140C65A38;

