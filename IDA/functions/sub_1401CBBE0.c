//----- (00000001401CBBE0) ----------------------------------------------------
__int64 __fastcall sub_1401CBBE0(int* a1, __int64* a2)
{
	__int64* v2; // rax
	__int64 v3; // rsi
	int v4; // ebx
	int v5; // r10d
	__int64 v6; // r9
	_WORD* v8; // rdi
	__int64 v9; // r12
	int v10; // edx
	__int64 v11; // r13
	__int64 i; // rcx
	__int64 k; // r11
	__int64 result; // rax
	__int64 v15; // rbp
	int* v16; // r14
	__int64 v17; // r11
	__int64 v18; // r15
	int v19; // ecx
	int v20; // r10d
	int v21; // edi
	int j; // ecx
	int v23; // edx
	__int64 v24; // r10
	unsigned __int16* v25; // rdi
	int v26; // ecx
	int v27; // [rsp+40h] [rbp+8h]

	v2 = (__int64*)a2[2];
	v3 = *a2;
	v4 = *((_DWORD*)a2 + 2);
	v5 = *((_DWORD*)v2 + 4);
	v6 = *((int*)v2 + 6);
	v8 = a1 + 738;
	v9 = *v2;
	v10 = 0;
	v11 = v2[1];
	for (i = 16i64; i; --i)
		*v8++ = 0;
	v27 = v5;
	*(_WORD*)(v3 + 4i64 * a1[a1[1320] + 746] + 2) = 0;
	LODWORD(k) = a1[1320] + 1;
	result = (int)k;
	if ((int)k < 573i64)
	{
		v15 = 573i64 - (int)k;
		v16 = &a1[(int)k + 746];
		do
		{
			v17 = *v16;
			v18 = 4 * v17;
			result = *(unsigned __int16*)(4 * v17 + v3 + 2);
			v19 = *(unsigned __int16*)(v3 + 4 * result + 2) + 1;
			if (v19 > (int)v6)
			{
				v19 = v6;
				++v10;
			}
			*(_WORD*)(v18 + v3 + 2) = v19;
			if ((int)v17 <= v4)
			{
				v20 = 0;
				++* ((_WORD*)a1 + v19 + 1476);
				if ((int)v17 >= v27)
					v20 = *(_DWORD*)(v11 + 4 * (v17 - v27));
				v21 = *(unsigned __int16*)(v18 + v3);
				result = (unsigned int)(v21 * (v20 + v19));
				a1[1472] += result;
				if (v9)
				{
					result = v21 * (v20 + (unsigned int)*(unsigned __int16*)(v18 + v9 + 2));
					a1[1473] += result;
				}
			}
			++v16;
			--v15;
		} while (v15);
		LODWORD(k) = 573;
	}
	if (v10)
	{
		do
		{
			for (j = v6 - 1; !*((_WORD*)a1 + j + 1476); --j)
				;
			result = j;
			v10 -= 2;
			--* ((_WORD*)a1 + j + 1476);
			*((_WORD*)a1 + j + 1477) += 2;
			--* ((_WORD*)a1 + v6 + 1476);
		} while (v10 > 0);
		for (k = (int)k; (_DWORD)v6; LODWORD(v6) = v6 - 1)
		{
			result = (int)v6;
			v23 = *((unsigned __int16*)a1 + (int)v6 + 1476);
			if (*((_WORD*)a1 + (int)v6 + 1476))
			{
				v24 = (__int64)&a1[k + 746];
				do
				{
					result = *(int*)(v24 - 4);
					v24 -= 4i64;
					--k;
					if ((int)result <= v4)
					{
						v25 = (unsigned __int16*)(v3 + 4 * result);
						result = v25[1];
						if ((_DWORD)result != (_DWORD)v6)
						{
							v26 = v6 - result;
							result = *v25;
							a1[1472] += result * v26;
							v25[1] = v6;
						}
						--v23;
					}
				} while (v23);
			}
		}
	}
	return result;
}

