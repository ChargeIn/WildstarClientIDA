//----- (0000000140366CD0) ----------------------------------------------------
void __fastcall sub_140366CD0(__int64 a1)
{
	unsigned int v2; // eax
	__int64 v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rcx
	unsigned int v6; // eax
	__int64 v7; // r8
	__int64 v8; // r10
	_QWORD* v9; // rax
	_QWORD* v10; // rdx
	__int64 v11; // rcx

	if (*(_QWORD*)(a1 + 2272))
	{
		v2 = *(_DWORD*)(a1 + 2204) * *(_DWORD*)(a1 + 2208);
		if (v2)
		{
			v3 = v2;
			v4 = 0i64;
			do
			{
				v5 = *(_QWORD*)(v4 + *(_QWORD*)(a1 + 2272));
				if (v5)
					sub_140382D50(v5);
				v4 += 8i64;
				--v3;
			} while (v3);
		}
	}
	if (*(_QWORD*)(a1 + 2448))
	{
		v6 = *(_DWORD*)(a1 + 2424) * *(_DWORD*)(a1 + 2428);
		if (v6)
		{
			v7 = 0i64;
			v8 = v6;
			do
			{
				v9 = *(_QWORD**)(v7 + *(_QWORD*)(a1 + 2448));
				if (v9 && !v9[18])
				{
					v10 = (_QWORD*)(*v9 + 2472i64);
					v9[18] = v10;
					v9[19] = *v10;
					*v10 = v9;
					v11 = v9[19];
					if (v11)
						*(_QWORD*)(v11 + 144) = v9 + 19;
					*(_DWORD*)(*v9 + 2480i64) = 0;
				}
				v7 += 8i64;
				--v8;
			} while (v8);
		}
	}
}

