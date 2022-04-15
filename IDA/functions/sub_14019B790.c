//----- (000000014019B790) ----------------------------------------------------
__int64 __fastcall sub_14019B790(__int64 a1, int a2, __int64 a3)
{
	unsigned __int64 v3; // rbx
	WCHAR* v6; // rax
	WCHAR* v8; // rax
	__int128 v9[2]; // [rsp+20h] [rbp-28h] BYREF
	WCHAR* v10; // [rsp+60h] [rbp+18h] BYREF

	v3 = *(_QWORD*)(a3 + 16);
	v10 = *(WCHAR**)(a3 + 8);
	if (!(unsigned int)sub_14019A560(&v10, v3, (float*)v9))
		return 0i64;
	v6 = v10;
	if ((unsigned __int64)v10 >= v3)
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
	v10 = v6 + 1;
	if (!(unsigned int)sub_14019A560(&v10, v3, (float*)v9 + 1))
		return 0i64;
	v8 = v10;
	if ((unsigned __int64)v10 >= v3)
		return 0i64;
	while (*v8 == 32 || *v8 == 9)
	{
		if ((unsigned __int64)++v8 >= v3)
			return 0i64;
	}
	if ((unsigned __int64)v8 < v3 && *v8 == 44 && (v10 = v8 + 1, (unsigned int)sub_14019A560(&v10, v3, (float*)v9 + 2)))
		return sub_14019D8A0(a1, a2, v9);
	else
		return 0i64;
}

