//----- (0000000140480790) ----------------------------------------------------
__int64 __fastcall sub_140480790(__int64 a1, __int64 a2, int a3)
{
	int v6; // r14d
	__int64 i; // rsi
	int v8; // ebp
	__int64 v9; // rbx
	unsigned int j; // edi

	v6 = 0;
	for (i = 48i64; ; i += 4i64)
	{
		v8 = *(_DWORD*)(i + *(_QWORD*)(a1 + 8));
		if (a3 == v8)
		{
			v9 = *(_QWORD*)(a2 + 5576);
			for (j = 0; v9; v9 = *(_QWORD*)(v9 + 24))
			{
				if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 56) + 8i64))(*(_QWORD*)(v9 + 56)) == v8)
					j += *(_DWORD*)(v9 + 80);
			}
			if (j >= *(_DWORD*)(i + *(_QWORD*)(a1 + 8) + 12))
				break;
		}
		if ((unsigned int)++v6 >= 3)
			return 0i64;
	}
	return 1i64;
}

