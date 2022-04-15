//----- (00000001406DD780) ----------------------------------------------------
__int64 __fastcall sub_1406DD780(__int64 a1, int a2, int* a3)
{
	int v7; // eax
	__int64 v8; // rdi
	unsigned int v9; // edx
	unsigned int v10; // ecx
	_QWORD* v11; // rax

	if (!a2)
		return sub_1406D8E10(a1, 0, a3);
	if (a2 == 1)
	{
		if (*a3 >= *(_DWORD*)(a1 + 716) && *a3 < *(_DWORD*)(a1 + 724))
		{
			v7 = a3[1];
			if (v7 >= *(_DWORD*)(a1 + 720) && v7 < *(_DWORD*)(a1 + 728))
			{
				if (*(_BYTE*)(a1 + 1025))
				{
					v8 = qword_140C65898;
					if (sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 1028)))
					{
						v9 = *(_DWORD*)(v8 + 196);
						v10 = 0;
						if (v9)
						{
							v11 = *(_QWORD**)(v8 + 200);
							do
							{
								if (!*v11)
									break;
								++v10;
								++v11;
							} while (v10 < v9);
						}
					}
				}
			}
		}
		*(_BYTE*)(a1 + 1025) = 0;
	}
	return sub_1400D2550(a1, a2, a3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

