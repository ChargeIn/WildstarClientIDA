//----- (00000001408813B0) ----------------------------------------------------
void __fastcall sub_1408813B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	unsigned int v8; // edi
	int v9; // r14d
	unsigned int v10; // edx
	unsigned int v11; // r8d
	unsigned __int16 v12; // ax
	__int64 v13; // rax
	_QWORD* v14; // r9
	__int64 v15; // r8
	unsigned int v16; // ecx
	__int64 v17; // rcx

	if (*(_QWORD*)(a1 + 8) && (*(_BYTE*)(a2 + 8) & 4) != 0)
	{
		v8 = 0;
		v9 = *(unsigned __int16*)(a3 + 18);
		v10 = 0;
		*(_QWORD*)(a3 + 32) = 0i64;
		for (*(_WORD*)(a3 + 24) = 0; v10 < *(_DWORD*)a1; ++v10)
		{
			v11 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 16i64 * v10 + 4);
			if (v11 >= a4 && v11 < v9 + a4)
				++* (_WORD*)(a3 + 24);
		}
		v12 = *(_WORD*)(a3 + 24);
		if (v12)
		{
			v13 = sub_1408819F0(dword_140C10F28, 32i64 * v12);
			v14 = (_QWORD*)v13;
			*(_QWORD*)(a3 + 32) = v13;
			if (v13)
			{
				if (*(_DWORD*)a1)
				{
					v15 = v13 + 16;
					do
					{
						v16 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 16i64 * v8 + 4);
						if (v16 >= a4 && v16 < v9 + a4)
						{
							*v14 = a2;
							v14 += 4;
							v15 += 32i64;
							*(_DWORD*)(v15 - 40) = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 16i64 * v8 + 4) - a4;
							v17 = *(_QWORD*)(a1 + 8);
							*(_QWORD*)(v15 - 32) = *(_QWORD*)(v17 + 16i64 * v8);
							*(_QWORD*)(v15 - 24) = *(_QWORD*)(v17 + 16i64 * v8 + 8);
						}
						++v8;
					} while (v8 < *(_DWORD*)a1);
				}
			}
			else
			{
				*(_WORD*)(a3 + 24) = 0;
			}
		}
	}
}
// 140C10F28: using guessed type int dword_140C10F28;

