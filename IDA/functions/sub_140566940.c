//----- (0000000140566940) ----------------------------------------------------
void __fastcall sub_140566940(__int64 a1, _QWORD* a2, unsigned __int64 a3)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned __int64 v6; // rsi
	__int64 v7; // r14
	unsigned __int64 v8; // rdi
	unsigned __int64 v9; // rbp
	unsigned __int64 i; // rcx
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // r8
	unsigned __int64 v13; // r10
	unsigned int v14; // ebx
	unsigned int v15; // r11d
	unsigned int v16; // r8d
	unsigned int v17; // r10d
	unsigned __int64 j; // r9
	unsigned __int64 v19; // rdi
	unsigned __int64 v20; // rcx
	unsigned __int64 v21; // rsi
	unsigned __int64 v22; // rax
	unsigned __int64 v23; // r8
	unsigned __int64 v24; // r10
	unsigned int v25; // ebx
	unsigned int v26; // r11d
	unsigned int v27; // r8d
	unsigned int v28; // r10d

	if (a3 == 2)
	{
		v4 = a2[1];
		v5 = *a2;
		if (*(_DWORD*)(*a2 + 12i64) > *(_DWORD*)(v4 + 12))
		{
			*a2 = v4;
			a2[1] = v5;
		}
	}
	else if (a3 > 1)
	{
		v6 = a3 >> 1;
		if (a3 >> 1)
		{
			v7 = 2 * v6 + 1;
			do
			{
				v8 = a2[--v6];
				v7 -= 2i64;
				v9 = v6;
				for (i = v7; i < a3; i = 2 * i + 1)
				{
					v11 = a2[i];
					v12 = i + 1;
					if (i + 1 < a3)
					{
						v13 = a2[v12];
						v14 = *(_DWORD*)(v11 + 12);
						v15 = *(_DWORD*)(v13 + 12);
						if (v15 >= v14 && (v15 > v14 || v13 > v11))
						{
							++i;
							v11 = a2[v12];
						}
					}
					v16 = *(_DWORD*)(v11 + 12);
					v17 = *(_DWORD*)(v8 + 12);
					if (v16 < v17 || v16 <= v17 && v11 <= v8)
						break;
					a2[v9] = v11;
					v9 = i;
				}
				a2[v9] = v8;
			} while (v6);
		}
		for (j = a3 - 1; j; --j)
		{
			v19 = a2[j];
			v20 = 1i64;
			v21 = 0i64;
			for (a2[j] = *a2; v20 < j; v20 = 2 * v20 + 1)
			{
				v22 = a2[v20];
				v23 = v20 + 1;
				if (v20 + 1 < j)
				{
					v24 = a2[v23];
					v25 = *(_DWORD*)(v22 + 12);
					v26 = *(_DWORD*)(v24 + 12);
					if (v26 >= v25 && (v26 > v25 || v24 > v22))
					{
						++v20;
						v22 = a2[v23];
					}
				}
				v27 = *(_DWORD*)(v22 + 12);
				v28 = *(_DWORD*)(v19 + 12);
				if (v27 < v28 || v27 <= v28 && v22 <= v19)
					break;
				a2[v21] = v22;
				v21 = v20;
			}
			a2[v21] = v19;
		}
	}
}

