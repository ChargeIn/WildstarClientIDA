//----- (000000014002EAF0) ----------------------------------------------------
__int64 __fastcall sub_14002EAF0(_DWORD* a1, int a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	int v6; // edx
	int v7; // r8d
	unsigned int v8; // eax
	unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

	if ((unsigned int)a2 > 0x10)
		return 0i64;
	v4 = (int)a1[1216];
	if ((int)v4 >= 23)
		return 0i64;
	v5 = (__int64)&a1[69 * a2 + 3 * v4];
	if (!v5)
		return 0i64;
	if (!*(_DWORD*)(v5 + 8))
	{
		v6 = *(_DWORD*)(v5 + 4);
		if (!v6 || !(unsigned int)sub_1400068F0(*(_QWORD*)(qword_140C635F0 + 5584), v6))
			return 0i64;
	}
	v7 = a1[1215];
	v10 = 0;
	if (!(unsigned int)sub_1400322E0(v5, a2, v7, &v10))
		return 0i64;
	if (a1[1213] == 13)
		a1[1214] = 0;
	v8 = v10;
	a1[1213] = a2;
	a1[1212] = v8;
	sub_140030900((__int64)a1);
	sub_140030950((__int64)a1);
	return 1i64;
}
// 14002EB6E: variable 'v5' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;

