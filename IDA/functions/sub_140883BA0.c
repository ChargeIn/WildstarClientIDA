//----- (0000000140883BA0) ----------------------------------------------------
void __fastcall sub_140883BA0(__int64 a1, __int64 a2, char a3)
{
	char v5; // dl
	int v6; // ecx
	char v7; // dl
	int v8; // ecx
	unsigned int v9; // r8d
	_DWORD* v10; // r9
	__int64 v11; // rbp
	__int64 v12; // r8
	__int64 v13; // rsi
	__int64 v14; // rax

	if (a3)
	{
		v5 = *(_BYTE*)(a1 + 117);
		if ((v5 & 8) == 0)
		{
			v6 = *(_DWORD*)(a1 + 176);
			if ((v6 & 0xF) != 4)
			{
				v7 = v5 & 0xFB;
				v8 = v6 | 0x10;
				*(_BYTE*)(a1 + 117) = v7;
				*(_DWORD*)(a1 + 176) = v8;
				v9 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 24i64) - *(_DWORD*)(a2 + 16);
				if (v9 > *(_DWORD*)(*(_QWORD*)(a1 + 96) + 264i64))
				{
					v9 = *(_DWORD*)(*(_QWORD*)(a1 + 96) + 264i64);
					*(_DWORD*)(a1 + 176) = v8 & 0xFFFFFFEF;
				}
				if ((v7 & 2) == 0)
				{
					v10 = *(_DWORD**)(a1 + 40);
					if (v9 >= *(_QWORD*)v10 - (unsigned __int64)*(unsigned int*)(a2 + 16) - **(_QWORD**)(a2 + 8))
					{
						*(_DWORD*)(a1 + 176) |= 0x10u;
						*(_BYTE*)(a1 + 117) = v7 | 4;
						*(_DWORD*)(a1 + 152) += *v10 - *(_DWORD*)(*(_QWORD*)(a2 + 8) + 24i64) - **(_DWORD**)(a2 + 8);
					}
				}
			}
		}
	}
	v11 = *(_QWORD*)(a1 + 96);
	EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 24));
	v12 = *(_QWORD*)(a2 + 8);
	v13 = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a2 + 8) = 0i64;
	if (v12)
		sub_140889690(v13 + 168, a1 + 128, v12);
	v14 = *(_QWORD*)(v13 + 280);
	if (v14)
	{
		*(_QWORD*)a2 = v14;
		*(_QWORD*)(v13 + 280) = a2;
	}
	else
	{
		*(_QWORD*)(v13 + 280) = a2;
		*(_QWORD*)a2 = 0i64;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(v11 + 24));
}

