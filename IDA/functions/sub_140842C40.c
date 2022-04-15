//----- (0000000140842C40) ----------------------------------------------------
void __fastcall sub_140842C40(__int64 a1, __int64 a2)
{
	__int64 i; // rbp
	unsigned int v5; // r8d
	_QWORD* v6; // r14
	__int64 v7; // rsi
	__int64 v8; // r12
	__int64 v9; // rdi
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rdx

	if ((*(_BYTE*)(a2 + 120) & 4) != 0 && *(_QWORD*)(a2 + 64))
	{
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
		for (i = 0i64; (unsigned int)i < *(_DWORD*)(a2 + 52); i = (unsigned int)(i + 1))
		{
			v5 = *(_DWORD*)(*(_QWORD*)(a2 + 64) + 12 * i);
			if (v5)
			{
				v6 = 0i64;
				v7 = v5 % 0xC1;
				v8 = 8 * v7;
				v9 = *(_QWORD*)(8 * v7 + a1 + 224);
				if (v9)
				{
					while (*(_DWORD*)(v9 + 8) != v5)
					{
						v6 = (_QWORD*)v9;
						v9 = *(_QWORD*)v9;
						if (!v9)
							goto LABEL_22;
					}
					if ((*(_DWORD*)(v9 + 56))-- == 1)
					{
						v11 = *(_QWORD*)(v9 + 16);
						if (v11)
						{
							sub_140881720(SHIDWORD(qword_140C61B18), v11);
							*(_QWORD*)(v9 + 16) = 0i64;
							*(_DWORD*)(v9 + 24) = 0;
						}
					}
					if (!*(_DWORD*)(v9 + 56))
					{
						v12 = *(_QWORD*)v9;
						if (!*(_QWORD*)v9)
						{
							do
								v7 = (unsigned int)(v7 + 1);
							while ((unsigned int)v7 < 0xC1 && !*(_QWORD*)(a1 + 8 * v7 + 224));
						}
						if (v6)
							*v6 = v12;
						else
							*(_QWORD*)(v8 + a1 + 224) = v12;
						v13 = *(_QWORD*)(v9 + 32);
						if (v13)
						{
							*(_QWORD*)(v9 + 40) = v13;
							sub_140881720(dword_140C10F20, v13);
							*(_QWORD*)(v9 + 32) = 0i64;
							*(_QWORD*)(v9 + 40) = 0i64;
							*(_DWORD*)(v9 + 48) = 0;
						}
						sub_140881720(*(_DWORD*)(a1 + 216), v9);
						--* (_DWORD*)(a1 + 1768);
					}
				}
			}
		LABEL_22:
			;
		}
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
		*(_BYTE*)(a2 + 120) &= ~4u;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B18: using guessed type __int64 qword_140C61B18;

