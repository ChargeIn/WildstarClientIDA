//----- (0000000140570990) ----------------------------------------------------
__int64 __fastcall sub_140570990(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
	__int64 v4; // rbp
	_QWORD** v7; // rbx
	__int64 v8; // r9
	__int64 v9; // rbp
	int v10; // edx
	__int64 v12; // [rsp+40h] [rbp+8h] BYREF

	v12 = a1;
	v4 = qword_140C65970;
	if (!qword_140C65970)
		return 0i64;
	if (*(_DWORD*)(qword_140C65970 + 8))
		return 0i64;
	if (!a2)
		return 0i64;
	if (!*(_QWORD*)(a2 + 24))
		return 0i64;
	v7 = (_QWORD**)sub_140574200(qword_140C65970, a2, 5, a4, &v12);
	if (!v7)
	{
		v7 = (_QWORD**)sub_140574200(v4, a2, 6, v8, &v12);
		if (!v7)
			return 0i64;
	}
	if (((unsigned int(__fastcall*)(_QWORD**))(*v7)[7])(v7)
		|| *(_DWORD*)(*v7[6] + 8i64)
		|| ((unsigned int(__fastcall*)(_QWORD**))(*v7)[11])(v7) != 1)
	{
		return 0i64;
	}
	v9 = v12;
	v10 = *(_DWORD*)(v12 + 16);
	if (v10)
	{
		if (*(_DWORD*)(*v7[6] + 12i64) == 5
			&& v10 == 2
			&& ((unsigned int(__fastcall*)(_QWORD**))(*v7)[9])(v7) >= *(_DWORD*)(v9 + 12)
			|| *(_DWORD*)(a2 + 13816) == -1
			|| ((unsigned int(__fastcall*)(_QWORD**))(*v7)[10])(v7))
		{
			return 0i64;
		}
	}
	if (a3)
		*a3 = v7;
	return 1i64;
}
// 140570A11: variable 'v8' is possibly undefined
// 140C65970: using guessed type __int64 qword_140C65970;

