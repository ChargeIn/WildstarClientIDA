//----- (00000001405428D0) ----------------------------------------------------
void __fastcall sub_1405428D0(__int64 a1, __int64 a2, int a3)
{
	__int64 v6; // rax
	unsigned __int64 i; // rbp
	_DWORD* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 j; // rax
	__int64 k; // rax

	if (*(_DWORD*)(a2 + 20))
	{
		v6 = *(_QWORD*)(a1 + 312);
		for (i = 0i64; i < *(_QWORD*)(v6 + 104); ++i)
		{
			v8 = *(_DWORD**)(*(_QWORD*)(v6 + 96) + 8 * i);
			if (*v8 == *(_DWORD*)(a2 + 20))
			{
				v9 = *(_QWORD*)(a1 + 888);
				v10 = *(_QWORD*)(v9 + 16);
				if (v10 != v9)
				{
					do
					{
						if (*(_DWORD*)(v10 + 40) == *v8)
							sub_140543630(
								a1,
								4,
								a2,
								*(_DWORD*)(v10 + 44),
								a3,
								0,
								*(_DWORD*)(a1 + 340),
								(_DWORD*)(v10 + 52),
								*(float*)(v10 + 64),
								*(_DWORD*)(v10 + 68));
						v11 = *(_QWORD*)(v10 + 24);
						if (v11)
						{
							v10 = *(_QWORD*)(v10 + 24);
							for (j = *(_QWORD*)(v11 + 16); j; j = *(_QWORD*)(j + 16))
								v10 = j;
						}
						else
						{
							for (k = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
								v10 = k;
							if (*(_QWORD*)(v10 + 24) != k)
								v10 = k;
						}
					} while (v10 != *(_QWORD*)(a1 + 888));
				}
			}
			v6 = *(_QWORD*)(a1 + 312);
		}
	}
}

