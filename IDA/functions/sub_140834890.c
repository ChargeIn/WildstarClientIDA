//----- (0000000140834890) ----------------------------------------------------
char __fastcall sub_140834890(__int64 a1, __int64 a2)
{
	__int64 v5; // rax
	__int64 v6; // rbp
	__int64 v7; // r15
	__int64 v8; // rax
	_DWORD* v9; // rcx
	int v10; // r14d
	int v11; // edi
	_DWORD* i; // rax
	_DWORD* v13; // rax
	unsigned __int64 v14; // rsi
	_DWORD* v15; // rcx

	if (*(_DWORD*)a1 != 1)
		return 0;
	v5 = *(_QWORD*)(a1 + 8);
	if (*(_WORD*)(v5 + 6))
	{
		v6 = 0i64;
		v7 = *(unsigned __int16*)(v5 + 6);
		do
		{
			v8 = *(_QWORD*)(a1 + 8);
			v9 = *(_DWORD**)(a2 + 8);
			v10 = *(_DWORD*)(v8 + v6 + 4);
			v11 = *(_DWORD*)(v8 + v6);
			for (i = *(_DWORD**)a2; i != v9; i += 2)
			{
				if (*i == v11)
					break;
			}
			if (i == v9 || (v13 = i + 1) == 0i64)
			{
				v14 = (unsigned int)(((__int64)v9 - *(_QWORD*)a2) >> 3);
				if ((v14 < *(unsigned int*)(a2 + 16) || sub_140892EF0(a2, 8)) && v14 < *(unsigned int*)(a2 + 16))
				{
					v15 = *(_DWORD**)(a2 + 8);
					*(_QWORD*)(a2 + 8) = v15 + 2;
					if (v15)
					{
						*v15 = v11;
						v15[1] = v10;
					}
				}
			}
			else
			{
				*v13 = v10;
			}
			v6 += 12i64;
			--v7;
		} while (v7);
	}
	return 1;
}

