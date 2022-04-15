//----- (000000014048DDE0) ----------------------------------------------------
__int64 __fastcall sub_14048DDE0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // r10
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 result; // rax
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rax
	char v12[24]; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 16);
	v6 = *(_QWORD*)(v3 + 8);
	v7 = v3;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v3 || (v13 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v13 = v3;
	result = v13;
	if (v13 != v3 && *(_QWORD*)(v13 + 40) && a3 <= 3)
	{
		v9 = *(_QWORD*)(a1 + 208);
		v10 = v9;
		v11 = *(_QWORD*)(v9 + 8);
		while (v11)
		{
			if (*(_DWORD*)(v11 + 32) < a2)
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v10 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		}
		if (v10 == v9 || (v13 = v10, a2 < *(_DWORD*)(v10 + 32)))
			v13 = v9;
		result = v13;
		if (v13 == v9)
		{
			v13 = __PAIR64__(a3, a2);
			return sub_140032F50(a1 + 200, (__int64)v12, &v13);
		}
		else
		{
			*(_DWORD*)(v13 + 36) = a3;
		}
	}
	return result;
}
// 14048DDE0: using guessed type char var_18[24];

