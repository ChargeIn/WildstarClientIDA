//----- (0000000140488640) ----------------------------------------------------
__int64 __fastcall sub_140488640(_QWORD* a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // rdx
	char v8[24]; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
	__int64 v10; // [rsp+50h] [rbp+18h]

	v9 = a2;
	if (!sub_140488520(a1, a2))
		return 2147500037i64;
	v4 = a1[10];
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v10 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v10 = v4;
	if (v10 != v4)
		return 2147500037i64;
	sub_1400EE810((__int64)(a1 + 1), &v9);
	sub_1400293C0((__int64)(a1 + 5), (__int64)v8, (int*)&v9);
	return 0i64;
}
// 140488640: using guessed type char var_18[24];

