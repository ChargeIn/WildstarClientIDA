//----- (000000014087E070) ----------------------------------------------------
__int64 __fastcall sub_14087E070(unsigned int** a1, __int64* a2)
{
	int v2; // esi
	int v3; // ebp
	unsigned int v4; // ebx
	int i; // r8d
	__int64 result; // rax
	unsigned int v7; // r10d
	unsigned int* v8; // rdi
	__int64 v9; // r12
	__int64 v10; // r15
	unsigned int* v11; // rcx
	unsigned int v12; // r9d
	unsigned int v13; // r8d
	int v14; // edx
	int v15; // r8d
	int j; // edx
	unsigned int v17; // r11d
	__int64 v18; // rdx
	__int64 v19; // r8
	unsigned int v20; // eax
	__int64 v21; // r9
	unsigned int v22; // eax
	unsigned int* v23; // rcx
	unsigned int v24; // eax
	unsigned int* v25; // rcx
	unsigned int v26; // eax
	unsigned int* v27; // rcx
	__int64 v28; // r8

	v2 = *((_DWORD*)a1 + 2);
	v3 = *((unsigned __int16*)a2 + 9);
	v4 = 0;
	for (i = v2; i; i &= result)
	{
		result = (unsigned int)(i - 1);
		++v4;
	}
	v7 = 0;
	if (v4)
	{
		v8 = *a1;
		v9 = *a2;
		v10 = *((unsigned __int16*)a2 + 8);
		do
		{
			v11 = v8;
			v12 = v7;
			if ((v2 & 8) != 0)
			{
				v13 = 0;
				v14 = v2 & 7;
				if ((v2 & 7) != 0)
				{
					do
					{
						++v13;
						v14 &= v14 - 1;
					} while (v14);
				}
				if (v7 == v13)
				{
					v15 = 0;
					for (j = v2; j; j &= j - 1)
						++v15;
					v12 = v15 - 1;
				}
				else if (v7 > v13)
				{
					v12 = v7 - 1;
				}
			}
			v17 = 0;
			result = v10 * v12;
			v18 = v9 + 4 * result;
			if (v3 >= 4)
			{
				v19 = v4;
				v20 = ((unsigned int)(v3 - 4) >> 2) + 1;
				v21 = v20;
				v17 = 4 * v20;
				do
				{
					v22 = *v11;
					v23 = &v11[v19];
					v18 += 16i64;
					*(_DWORD*)(v18 - 16) = v22;
					v24 = *v23;
					v25 = &v23[v19];
					*(_DWORD*)(v18 - 12) = v24;
					v26 = *v25;
					v27 = &v25[v19];
					*(_DWORD*)(v18 - 8) = v26;
					result = *v27;
					v11 = &v27[v19];
					*(_DWORD*)(v18 - 4) = result;
					--v21;
				} while (v21);
			}
			if (v17 < v3)
			{
				v28 = v3 - v17;
				do
				{
					result = *v11;
					v11 += v4;
					v18 += 4i64;
					*(_DWORD*)(v18 - 4) = result;
					--v28;
				} while (v28);
			}
			++v7;
			++v8;
		} while (v7 < v4);
	}
	return result;
}

