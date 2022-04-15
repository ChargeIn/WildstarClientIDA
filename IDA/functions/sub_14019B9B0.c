//----- (000000014019B9B0) ----------------------------------------------------
__int64 __fastcall sub_14019B9B0(__int64 a1, int a2, __int64 a3)
{
	unsigned __int64 v3; // rbx
	WCHAR* v6; // rax
	WCHAR* v8; // rax
	WCHAR* v9; // rax
	__int128 v10[2]; // [rsp+20h] [rbp-28h] BYREF
	WCHAR* v11; // [rsp+60h] [rbp+18h] BYREF

	v3 = *(_QWORD*)(a3 + 16);
	v11 = *(WCHAR**)(a3 + 8);
	if (!(unsigned int)sub_14019A560(&v11, v3, (float*)v10))
		return 0i64;
	v6 = v11;
	if ((unsigned __int64)v11 >= v3)
		return 0i64;
	while (*v6 == 32 || *v6 == 9)
	{
		if ((unsigned __int64)++v6 >= v3)
			return 0i64;
	}
	if ((unsigned __int64)v6 >= v3)
		return 0i64;
	if (*v6 != 44)
		return 0i64;
	v11 = v6 + 1;
	if (!(unsigned int)sub_14019A560(&v11, v3, (float*)v10 + 1))
		return 0i64;
	v8 = v11;
	if ((unsigned __int64)v11 >= v3)
		return 0i64;
	while (*v8 == 32 || *v8 == 9)
	{
		if ((unsigned __int64)++v8 >= v3)
			return 0i64;
	}
	if ((unsigned __int64)v8 >= v3)
		return 0i64;
	if (*v8 != 44)
		return 0i64;
	v11 = v8 + 1;
	if (!(unsigned int)sub_14019A560(&v11, v3, (float*)v10 + 2))
		return 0i64;
	v9 = v11;
	if ((unsigned __int64)v11 >= v3)
		return 0i64;
	while (*v9 == 32 || *v9 == 9)
	{
		if ((unsigned __int64)++v9 >= v3)
			return 0i64;
	}
	if ((unsigned __int64)v9 < v3 && *v9 == 44 && (v11 = v9 + 1, (unsigned int)sub_14019A560(&v11, v3, (float*)v10 + 3)))
		return sub_14002C7C0(a1, a2, v10);
	else
		return 0i64;
}

