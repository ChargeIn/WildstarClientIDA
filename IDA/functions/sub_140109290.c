//----- (0000000140109290) ----------------------------------------------------
__int64 __fastcall sub_140109290(__int64* a1, WCHAR* a2, int* a3)
{
	__int64* v4; // rdi
	__int64 result; // rax
	__int64 v6; // rbx
	__int64 v7; // r12
	char* v8; // rsi
	const __m128i* v9; // rbx
	WCHAR v10; // ax
	const __m128i* v11; // rcx
	const __m128i* v12; // rcx
	const __m128i* v13; // rcx
	__int64 i; // rax
	__m128i* v15; // r8
	_QWORD* v16; // r13
	int v17; // r15d
	__int64 v18; // r12
	int v19; // esi
	__int64 v20; // rbp
	__int64 v21; // rax
	__int64 v22; // r14
	__int64 v23; // rax
	_QWORD* v24; // rdi
	_QWORD* v25; // [rsp+20h] [rbp-268h]
	unsigned int v26; // [rsp+20h] [rbp-268h]
	char v28[528]; // [rsp+30h] [rbp-258h] BYREF

	v4 = a1;
	if (((a1[13] - a1[12]) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
		return 0i64;
	v6 = 0i64;
	v25 = *(_QWORD**)a1[12];
	if (!a3)
	{
		v7 = 520i64;
		v8 = v28;
		v9 = (const __m128i*)a2;
		if (a2)
		{
			if ((unsigned int)sub_1407DFF20(*a2) && a2[1] == 58
				|| (!a2[1] || a2[2] != 58 ? (v10 = 0) : (v10 = 1), (unsigned int)sub_1407DFF20(v10)))
			{
				if (*a2)
				{
					while (v9->m128i_i16[0] != 58)
					{
						v9 = (const __m128i*)((char*)v9 + 2);
						if (!v9->m128i_i16[0])
							goto LABEL_17;
					}
					v9 = (const __m128i*)((char*)v9 + 2);
				}
			}
		LABEL_17:
			v11 = sub_1407DD8D8(v9, 0x2Fu);
			if (v11 || (v11 = sub_1407DD8D8(v9, 0x5Cu)) != 0i64)
			{
				v12 = (const __m128i*) & v11->m128i_i8[2];
				if (v12)
				{
					for (; v9 != v12; v9 = (const __m128i*)((char*)v9 + 2))
						;
				}
			}
			v13 = sub_1407DD8D8(v9, 0x2Eu);
			if (!v13)
			{
				for (i = 0i64; v9->m128i_i16[i]; ++i)
					;
				v13 = (const __m128i*)((char*)v9 + 2 * i);
			}
			if (v9 != v13)
			{
				do
				{
					if (v7 == 1)
					{
						v6 = 0i64;
						if (v8)
							*(_WORD*)v8 = 0;
						goto LABEL_36;
					}
					if (v8)
					{
						v8 += 2;
						--v7;
						*((_WORD*)v8 - 1) = v9->m128i_i16[0];
					}
					v9 = (const __m128i*)((char*)v9 + 2);
				} while (v9 != v13);
				if (!v8)
					goto LABEL_35;
			}
			v6 = 0i64;
			*(_WORD*)v8 = 0;
		}
		else
		{
		LABEL_35:
			v6 = 0i64;
		}
	LABEL_36:
		v4 = a1;
		a3 = (int*)v28;
	}
	if (*(_WORD*)a3)
		v25 = (_QWORD*)sub_140108E00(v4, a3);
	v15 = (__m128i*)a2;
	v16 = v25;
	result = sub_1401048D0(v25, *v4, v15);
	v26 = result;
	if ((int)result >= 0)
	{
		v17 = 0;
		if ((int)((__int64)(v16[9] - v16[8]) >> 3) > 0)
		{
			v18 = 0i64;
			do
			{
				v19 = 0;
				v20 = *(_QWORD*)(v18 + v16[8]);
				v21 = (__int64)(*(_QWORD*)(v20 + 40) - *(_QWORD*)(v20 + 32)) >> 3;
				if ((int)v21 > 0)
				{
					v22 = (__int64)(v4 + 6);
					do
					{
						if (v6 >= 0 && v19 < (int)v21)
						{
							v23 = *(_QWORD*)(v20 + 32);
							v24 = *(_QWORD**)(v23 + 8 * v6);
							if (v24)
							{
								sub_1400FDDF0(v22, 0, *(_QWORD**)(v23 + 8 * v6));
								sub_1400FDDF0(v22, 1, v24);
							}
						}
						++v19;
						++v6;
						v21 = (__int64)(*(_QWORD*)(v20 + 40) - *(_QWORD*)(v20 + 32)) >> 3;
					} while (v19 < (int)v21);
					v4 = a1;
				}
				++v17;
				v18 += 8i64;
				v6 = 0i64;
			} while (v17 < (int)((__int64)(v16[9] - v16[8]) >> 3));
			return v26;
		}
	}
	return result;
}
// 14010937A: conditional instruction was optimized away because rbp.8==0
// 140109383: conditional instruction was optimized away because rdi.8==0
// 1401093AE: conditional instruction was optimized away because rdi.8==0
// 1401093EA: conditional instruction was optimized away because r15.8==0
// 1401093F3: conditional instruction was optimized away because r14.8==0
// 140109410: conditional instruction was optimized away because r14.8==0

