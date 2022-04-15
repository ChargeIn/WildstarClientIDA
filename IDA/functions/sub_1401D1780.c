//----- (00000001401D1780) ----------------------------------------------------
__int64 __fastcall sub_1401D1780(const __m128i* a1, const __m128i* a2)
{
	const __m128i* v4; // rdi
	const __m128i* v5; // rax
	unsigned __int64 v6; // r11
	const __m128i* v7; // rbp
	unsigned __int64 v8; // rsi
	const __m128i* v9; // rbx
	unsigned __int16 v10; // dx
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // r8
	__int64 v13; // rax
	unsigned __int16 v14; // r9
	unsigned __int16 v15; // cx
	unsigned __int64 v16; // r8
	unsigned __int64 v17; // r9
	__int64 v18; // rax
	unsigned __int16 v19; // r10

	v4 = sub_1407DD8D8(a1, 0x5Cu);
	v5 = sub_1407DD8D8(a2, 0x5Cu);
	if (v4)
		v4 = (const __m128i*)((((char*)v4 - (char*)a1) >> 1) + 1);
	if (v5)
		v6 = (((char*)v5 - (char*)a2) >> 1) + 1;
	else
		v6 = 0i64;
	v7 = v4;
	if (v6 < (unsigned __int64)v4)
		v7 = (const __m128i*)v6;
	v8 = 0i64;
	if (!v7)
	{
	LABEL_34:
		if ((unsigned __int64)v4 < v6)
			return 0xFFFFFFFFi64;
		if ((unsigned __int64)v4 <= v6)
			return sub_14018E2C0((__int64)a1->m128i_i64 + 2 * (_QWORD)v4, (unsigned __int16*)a2 + v6);
		return 1i64;
	}
	v9 = a2;
	while (1)
	{
		v10 = *(unsigned __int16*)((char*)v9->m128i_u16 + (char*)a1 - (char*)a2);
		if (v10 >= 0x80u)
		{
			v11 = 0i64;
			v12 = 977i64;
			while (1)
			{
				v13 = v11 + ((v12 - v11) >> 1);
				v14 = word_140A41A80[v13];
				if (v10 >= v14)
				{
					if (v10 <= v14)
					{
						v10 = word_140A40AF0[v13];
						goto LABEL_21;
					}
					v11 = v13 + 1;
				}
				else
				{
					v12 = v11 + ((v12 - v11) >> 1);
				}
				if (v11 >= v12)
					goto LABEL_21;
			}
		}
		if ((unsigned __int16)(v10 - 65) <= 0x19u)
			v10 += 32;
	LABEL_21:
		v15 = v9->m128i_i16[0];
		if (v9->m128i_i16[0] >= 0x80u)
		{
			v16 = 0i64;
			v17 = 977i64;
			while (1)
			{
				v18 = v16 + ((v17 - v16) >> 1);
				v19 = word_140A41A80[v18];
				if (v15 >= v19)
				{
					if (v15 <= v19)
					{
						v15 = word_140A40AF0[v18];
						goto LABEL_32;
					}
					v16 = v18 + 1;
				}
				else
				{
					v17 = v16 + ((v17 - v16) >> 1);
				}
				if (v16 >= v17)
					goto LABEL_32;
			}
		}
		if ((unsigned __int16)(v15 - 65) <= 0x19u)
			v15 += 32;
	LABEL_32:
		if (v10 != v15)
			break;
		++v8;
		v9 = (const __m128i*)((char*)v9 + 2);
		if (v8 >= (unsigned __int64)v7)
			goto LABEL_34;
	}
	if (v10 == 92)
		return 0xFFFFFFFFi64;
	if (v15 == 92)
		return 1i64;
	return v10 - (unsigned int)v15;
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

