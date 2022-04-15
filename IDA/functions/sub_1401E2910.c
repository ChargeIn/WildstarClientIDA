//----- (00000001401E2910) ----------------------------------------------------
__int64 __fastcall sub_1401E2910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rsi
	unsigned int v6; // ebx
	__int64 v7; // r10
	int v8; // r8d
	int* v9; // rdx
	int v10; // ecx
	__int64 v11; // rax
	int* v12; // rcx
	int v13; // edx
	__int64 v14; // rax
	unsigned int v15; // r8d
	char* v16; // rcx
	int* v17; // rdx
	__int64 v18; // r10
	__int64 v19; // rax
	unsigned int v20; // edi
	__int64 v21; // rdx
	int* v22; // rsi
	__int64 v23; // rdi
	int v25; // [rsp+20h] [rbp-138h] BYREF
	char v26; // [rsp+24h] [rbp-134h] BYREF

	v4 = 0i64;
	v6 = 0;
	if (*(_DWORD*)(a1 + 2868))
	{
		a4 = a1 + 328;
		v7 = 72i64;
		do
		{
			if (*(_QWORD*)a4)
			{
				v8 = 0;
				v9 = (int*)(*(_QWORD*)(*(_QWORD*)a4 + 24i64) + 216i64);
				do
				{
					v10 = *v9;
					if (*v9 && v10 < 202)
					{
						v11 = v6++;
						*(&v25 + v11) = v10;
					}
					++v8;
					++v9;
				} while ((unsigned __int64)v8 < 4);
			}
			a4 += 8i64;
			--v7;
		} while (v7);
	}
	else
	{
		v12 = (int*)(a1 + 52);
		do
		{
			v13 = *v12;
			if (!*v12)
				break;
			v14 = v6++;
			++v12;
			*(&v25 + v14) = v13;
		} while (v6 < 0x10);
	}
	if (v6 > 1)
	{
		sub_1401C3280((__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1401E2900, (unsigned int*)&v25, v6, 0i64);
		v15 = 1;
		v16 = &v26;
		v17 = &v25;
		v18 = v6 - 1;
		do
		{
			a4 = *(unsigned int*)v16;
			if ((_DWORD)a4 != *v17)
			{
				v19 = v15++;
				*(&v25 + v19) = a4;
			}
			++v17;
			v16 += 4;
			--v18;
		} while (v18);
		v6 = v15;
	}
	v20 = 0;
	if (*(_DWORD*)(a1 + 2864))
	{
		do
		{
			if (v20 >= v6)
				break;
			v21 = *(unsigned int*)(a1 + 4 * v4 + 2056);
			a4 = (unsigned int)*(&v25 + v20);
			if ((int)a4 <= (int)v21)
			{
				if ((int)a4 >= (int)v21)
					v4 = (unsigned int)(v4 + 1);
				else
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 288) + 728i64))(
						*(_QWORD*)(a1 + 288),
						(unsigned int)a4,
						1i64);
				++v20;
			}
			else
			{
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 288) + 728i64))(
					*(_QWORD*)(a1 + 288),
					v21,
					0i64);
				v4 = (unsigned int)(v4 + 1);
			}
		} while ((unsigned int)v4 < *(_DWORD*)(a1 + 2864));
		for (; (unsigned int)v4 < *(_DWORD*)(a1 + 2864); v4 = (unsigned int)(v4 + 1))
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 288) + 728i64))(
				*(_QWORD*)(a1 + 288),
				*(unsigned int*)(a1 + 4 * v4 + 2056),
				0i64);
	}
	if (v20 < v6)
	{
		v22 = &v25 + v20;
		v23 = v6 - v20;
		do
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 288) + 728i64))(
				*(_QWORD*)(a1 + 288),
				(unsigned int)*v22++,
				1i64,
				a4);
			--v23;
		} while (v23);
	}
	sub_1407DB590((int*)(a1 + 2056), &v25, 4i64 * v6);
	*(_DWORD*)(a1 + 2864) = v6;
	return 0i64;
}
// 1401E29E1: conditional instruction was optimized away because ebx.4>=2u
// 1401E2AD2: variable 'a4' is possibly undefined

