//----- (00000001401D0F60) ----------------------------------------------------
__int64 __fastcall sub_1401D0F60(__int64 a1, const __m128i* a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v3; // r13
	const __m128i* v4; // r14
	__int64 v5; // rdx
	unsigned __int64 v6; // r15
	const __m128i* v7; // r12
	const __m128i* v8; // rsi
	const __m128i* v9; // rax
	unsigned __int64 v10; // rbx
	const __m128i* v11; // rbp
	unsigned __int64 v12; // rdi
	const __m128i* v13; // r11
	signed __int64 v14; // r14
	unsigned __int16 v15; // r8
	unsigned __int64 v16; // rcx
	unsigned __int64 v17; // rdx
	__int64 v18; // rax
	unsigned __int16 v19; // r9
	unsigned __int16 v20; // cx
	unsigned __int64 v21; // rdx
	unsigned __int64 v22; // r9
	__int64 v23; // rax
	unsigned __int16 v24; // r10
	int v25; // ecx
	unsigned __int64 v29; // [rsp+70h] [rbp+18h]

	v2 = *(_QWORD*)(a1 + 16);
	v3 = 0i64;
	v4 = a2;
	v5 = a1;
	v29 = v2;
	if (v2)
	{
		while (1)
		{
			v6 = v3 + ((v2 - v3) >> 1);
			v7 = (const __m128i*)(*(_QWORD*)(v5 + 40) + 2i64 * *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8 * v6));
			v8 = sub_1407DD8D8(v4, 0x5Cu);
			v9 = sub_1407DD8D8(v7, 0x5Cu);
			if (v8)
				v8 = (const __m128i*)((((char*)v8 - (char*)v4) >> 1) + 1);
			if (v9)
				v10 = (((char*)v9 - (char*)v7) >> 1) + 1;
			else
				v10 = 0i64;
			v11 = v8;
			if (v10 < (unsigned __int64)v8)
				v11 = (const __m128i*)v10;
			v12 = 0i64;
			if (v11)
			{
				v13 = v7;
				v14 = (char*)v4 - (char*)v7;
				while (1)
				{
					v15 = *(unsigned __int16*)((char*)v13->m128i_u16 + v14);
					if (v15 >= 0x80u)
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
									goto LABEL_22;
								}
								v16 = v18 + 1;
							}
							else
							{
								v17 = v16 + ((v17 - v16) >> 1);
							}
							if (v16 >= v17)
								goto LABEL_22;
						}
					}
					if ((unsigned __int16)(v15 - 65) <= 0x19u)
						v15 += 32;
				LABEL_22:
					v20 = v13->m128i_i16[0];
					if (v13->m128i_i16[0] >= 0x80u)
					{
						v21 = 0i64;
						v22 = 977i64;
						while (1)
						{
							v23 = v21 + ((v22 - v21) >> 1);
							v24 = word_140A41A80[v23];
							if (v20 >= v24)
							{
								if (v20 <= v24)
								{
									v20 = word_140A40AF0[v23];
									goto LABEL_33;
								}
								v21 = v23 + 1;
							}
							else
							{
								v22 = v21 + ((v22 - v21) >> 1);
							}
							if (v21 >= v22)
								goto LABEL_33;
						}
					}
					if ((unsigned __int16)(v20 - 65) <= 0x19u)
						v20 += 32;
				LABEL_33:
					if (v15 != v20)
						break;
					++v12;
					v13 = (const __m128i*)((char*)v13 + 2);
					if (v12 >= (unsigned __int64)v11)
					{
						v4 = a2;
						goto LABEL_36;
					}
				}
				if (v15 == 92)
					goto LABEL_45;
				if (v20 == 92)
					goto LABEL_41;
				v25 = v15 - v20;
			}
			else
			{
			LABEL_36:
				if ((unsigned __int64)v8 < v10)
					goto LABEL_45;
				if ((unsigned __int64)v8 > v10)
					goto LABEL_41;
				v25 = sub_14018E2C0((__int64)v4->m128i_i64 + 2 * (_QWORD)v8, (unsigned __int16*)v7 + v10);
			}
			if (v25 >= 0)
			{
				if (v25 <= 0)
					return 1i64;
			LABEL_41:
				v2 = v29;
				v3 = v6 + 1;
				goto LABEL_46;
			}
		LABEL_45:
			v2 = v6;
			v29 = v6;
		LABEL_46:
			if (v3 >= v2)
				return 0i64;
			v4 = a2;
			v5 = a1;
		}
	}
	return 0i64;
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

