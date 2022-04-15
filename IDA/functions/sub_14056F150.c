//----- (000000014056F150) ----------------------------------------------------
__int64 __fastcall sub_14056F150(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rdi
	__int64 v4; // r9
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // [rsp+30h] [rbp+8h]

	v2 = qword_140C65970;
	v4 = sub_14021F3C0(*a2);
	if (!v4)
		return 2147500037i64;
	v6 = *(_QWORD*)(v2 + 64);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < *(_DWORD*)(v4 + 32))
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v10 = v7, *(_DWORD*)(v4 + 32) < *(_DWORD*)(v7 + 32)))
		v10 = *(_QWORD*)(v2 + 64);
	if (v10 == v6)
		return 2147500037i64;
	if ((unsigned int)sub_14056DED0(*(_QWORD*)(v10 + 40), a2))
	{
		v9 = sub_140491C60(qword_140C65968, *a2);
		sub_14056B530(v9);
	}
	return 0i64;
}
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

