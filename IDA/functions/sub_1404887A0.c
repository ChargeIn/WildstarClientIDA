//----- (00000001404887A0) ----------------------------------------------------
__int64 __fastcall sub_1404887A0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v4; // r8
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // r8
	__int64 v8; // rcx
	char v10[24]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v11; // [rsp+40h] [rbp+8h]
	__int64 v12; // [rsp+40h] [rbp+8h]
	unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

	v13 = a2;
	v2 = *(_QWORD*)(a1 + 48);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v11 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v11 = *(_QWORD*)(a1 + 48);
	if (v11 == v2)
	{
		v6 = *(_QWORD*)(a1 + 80);
		v7 = v6;
		v8 = *(_QWORD*)(v6 + 8);
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < a2)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v7 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v7 == v6 || (v12 = v7, a2 < *(_DWORD*)(v7 + 32)))
			v12 = v6;
		if (v12 == v6)
			return 2147500037i64;
	}
	sub_1400EE810(a1 + 72, &v13);
	sub_1400EE810(a1 + 40, &v13);
	sub_1400293C0(a1 + 8, (__int64)v10, (int*)&v13);
	return 0i64;
}
// 1404887A0: using guessed type char var_18[24];

