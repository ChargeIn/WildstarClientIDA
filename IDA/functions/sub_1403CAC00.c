//----- (00000001403CAC00) ----------------------------------------------------
__int64 __fastcall sub_1403CAC00(__int64 a1, unsigned int a2, _DWORD* a3)
{
	__int64 v3; // r10
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 result; // rax
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // [rsp+8h] [rbp+8h]
	__int64 v12; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 7096);
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v3 || (v11 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v11 = *(_QWORD*)(a1 + 7096);
	if (v11 == v3)
	{
		v8 = *(_QWORD*)(a1 + 7064);
		v9 = v8;
		v10 = *(_QWORD*)(v8 + 8);
		while (v10)
		{
			if (*(_DWORD*)(v10 + 32) < a2)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v9 = v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		}
		if (v9 == v8 || (v12 = v9, a2 < *(_DWORD*)(v9 + 32)))
			v12 = v8;
		if (v12 == v8)
		{
			return 2147500037i64;
		}
		else
		{
			result = 0i64;
			*a3 = *(_DWORD*)(v12 + 36);
		}
	}
	else
	{
		result = 0i64;
		*a3 = *(_DWORD*)(v11 + 36);
	}
	return result;
}

