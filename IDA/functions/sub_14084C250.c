//----- (000000014084C250) ----------------------------------------------------
__int64 __fastcall sub_14084C250(__int64 a1, __int64 a2, int a3)
{
	unsigned int v7; // r8d
	unsigned int v8; // edi
	__int64 v9; // rsi
	__int64 v10; // rdx
	unsigned int v11; // eax
	__int64 v12; // r9
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // r9
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rdx

	if ((unsigned int)a3 > 4)
		return 2i64;
	v7 = 0;
	if (a2)
	{
		v8 = 0;
		v9 = 0i64;
		if (a3 >= 4)
		{
			v10 = a2 + 8;
			v11 = ((unsigned int)(a3 - 4) >> 2) + 1;
			v12 = v11;
			v8 = 4 * v11;
			v9 = 4i64 * v11;
			do
			{
				if (*(_DWORD*)(v10 - 8) && *(float*)(v10 - 4) > 0.0)
				{
					v13 = v7++;
					*(_QWORD*)(a1 + 8 * v13 + 24) = *(_QWORD*)(v10 - 8);
				}
				if (*(_DWORD*)v10 && *(float*)(v10 + 4) > 0.0)
				{
					v14 = v7++;
					*(_QWORD*)(a1 + 8 * v14 + 24) = *(_QWORD*)v10;
				}
				if (*(_DWORD*)(v10 + 8) && *(float*)(v10 + 12) > 0.0)
				{
					v15 = v7++;
					*(_QWORD*)(a1 + 8 * v15 + 24) = *(_QWORD*)(v10 + 8);
				}
				if (*(_DWORD*)(v10 + 16) && *(float*)(v10 + 20) > 0.0)
				{
					v16 = v7++;
					*(_QWORD*)(a1 + 8 * v16 + 24) = *(_QWORD*)(v10 + 16);
				}
				v10 += 32i64;
				--v12;
			} while (v12);
		}
		if (v8 < a3)
		{
			v17 = a2 + 8 * v9;
			v18 = a3 - v8;
			do
			{
				if (*(_DWORD*)v17 && *(float*)(v17 + 4) > 0.0)
				{
					v19 = v7++;
					*(_QWORD*)(a1 + 8 * v19 + 24) = *(_QWORD*)v17;
				}
				v17 += 8i64;
				--v18;
			} while (v18);
		}
	}
	if (v7 < 4)
	{
		v20 = a1 + 28 + 8i64 * v7;
		v21 = 4 - v7;
		do
		{
			*(_QWORD*)(v20 - 4) = 0i64;
			v20 += 8i64;
			--v21;
		} while (v21);
	}
	return 1i64;
}

