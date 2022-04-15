//----- (0000000140654C00) ----------------------------------------------------
__int64 __fastcall sub_140654C00(__int64 a1)
{
	float v1; // xmm0_4
	int* v3; // rax
	__int64 v4; // rax
	__int64 v5; // rbp
	unsigned int v6; // eax
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // eax
	int v10; // ebx
	__int64 v11; // rcx
	__int64 v12; // rdx
	float v13; // xmm6_4
	int v14; // eax
	float v15; // xmm0_4
	__int64 v16; // rcx
	float v17; // xmm6_4
	int v18; // esi
	float v19; // xmm0_4
	float v20; // xmm7_4
	__int64 v21; // rsi
	__int64 v22; // rsi
	__int64 v23; // rax
	float v24; // xmm1_4
	float v25; // xmm0_4
	__int64 v26; // rax
	int v27; // esi
	__int64 v28; // rax
	__int64 v29; // rax
	float v30; // xmm8_4
	__int64 v31; // rax
	int v32; // eax
	_DWORD* v33; // rcx

	v3 = (int*)sub_1406622C0(a1, 1);
	if (!v3)
		goto LABEL_57;
	v4 = sub_1403D90D0(qword_140C65898, *v3);
	v5 = v4;
	if (!v4 || !qword_140C65898 || !*(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_57;
	if (!sub_14047DCA0(v4))
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
		v7 = sub_14024ACC0(v6);
		if (!v7 || (v8 = *(unsigned int*)(v7 + 20), (_DWORD)v8 != 3) && (_DWORD)v8 != 8)
		{
			if (*(_DWORD*)(v7 + 20) != 9)
			{
				v9 = dword_140DC4AC8;
				v10 = 0;
				if ((dword_140DC4AC8 & 1) == 0)
				{
					v9 = dword_140DC4AC8 | 1;
					dword_140DC4AD4 = 0;
					dword_140DC4AC8 |= 1u;
				}
				if ((v9 & 2) == 0)
				{
					v9 |= 2u;
					dword_140DC4ADC = 0;
					dword_140DC4AC8 = v9;
				}
				if ((v9 & 4) == 0)
				{
					dword_140DC4AE4 = 0;
					dword_140DC4AC8 = v9 | 4;
				}
				sub_1403A7C50(v8);
				v11 = qword_140C65898;
				v12 = *(_QWORD*)(qword_140C65898 + 120);
				v13 = v1;
				if (v12)
				{
					v14 = *(_DWORD*)(v12 + 60);
					if (!v14)
						v14 = *(_DWORD*)(v12 + 56);
				}
				else
				{
					v14 = 0;
				}
				if ((float)v14 > v1)
				{
					v15 = sub_140662190();
					v16 = *(_QWORD*)(qword_140C65898 + 120);
					v17 = v13 * (float)(1.0 - v15);
					if (v16)
					{
						v18 = *(_DWORD*)(v16 + 60);
						if (!v18)
							v18 = *(_DWORD*)(v16 + 56);
					}
					else
					{
						v18 = 0;
					}
					v19 = sub_140662190();
					v11 = qword_140C65898;
					v13 = v17 + (float)(v19 * (float)v18);
				}
				v20 = 0.0;
				if (*(_QWORD*)(v11 + 27728))
				{
					v21 = *(_QWORD*)(v11 + 27728);
					if (v21)
						v22 = *(_QWORD*)(v21 + 96);
					else
						v22 = 0i64;
					if (dword_140DC4ADC)
					{
						v24 = *(float*)&dword_140DC4AD8;
					}
					else
					{
						dword_140DC4ADC = 1;
						v23 = sub_140200220(0x525u);
						if (v23)
						{
							v24 = *(float*)(v23 + 32);
							dword_140DC4AD8 = LODWORD(v24);
						}
						else
						{
							v24 = 0.0;
							dword_140DC4AD8 = 0;
						}
					}
					v25 = (float)(int)v22;
					if (v22 < 0)
						v25 = v25 + 1.8446744e19;
					v13 = v13 + (float)(v25 * v24);
				}
				v26 = *(_QWORD*)(v5 + 256);
				if (v26)
				{
					v27 = *(_DWORD*)(v26 + 20);
				}
				else
				{
					v28 = *(_QWORD*)(v5 + 24);
					if (v28)
						v27 = *(unsigned __int8*)(v28 + 345);
					else
						v27 = 0;
				}
				if (dword_140DC4AE4)
				{
					v20 = *(float*)&dword_140DC4AE0;
				}
				else
				{
					dword_140DC4AE4 = 1;
					v29 = sub_140200220(0x525u);
					if (v29)
						v20 = *(float*)(v29 + 36);
					dword_140DC4AE0 = LODWORD(v20);
				}
				v30 = sub_14045B550(v5).m128_f32[0] + (float)((float)v27 * v20);
				if ((dword_140DC4AC8 & 8) != 0)
				{
					if (dword_140DC4AEC)
					{
						v32 = dword_140DC4AE8;
					LABEL_56:
						v33 = *(_DWORD**)(a1 + 16);
						v33[2] = 1;
						LOBYTE(v10) = (float)((float)v32 + v13) <= v30;
						*v33 = v10;
						goto LABEL_58;
					}
				}
				else
				{
					dword_140DC4AC8 |= 8u;
				}
				dword_140DC4AEC = 1;
				v31 = sub_140200220(0x525u);
				if (v31)
				{
					v32 = *(_DWORD*)(v31 + 4);
					dword_140DC4AE8 = v32;
				}
				else
				{
					v32 = 0;
					dword_140DC4AE8 = 0;
				}
				goto LABEL_56;
			}
		}
	LABEL_57:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		goto LABEL_58;
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
LABEL_58:
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140654D08: variable 'v8' is possibly undefined
// 140654D18: variable 'v1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4AC8: using guessed type int dword_140DC4AC8;
// 140DC4AD4: using guessed type int dword_140DC4AD4;
// 140DC4AD8: using guessed type int dword_140DC4AD8;
// 140DC4ADC: using guessed type int dword_140DC4ADC;
// 140DC4AE0: using guessed type int dword_140DC4AE0;
// 140DC4AE4: using guessed type int dword_140DC4AE4;
// 140DC4AE8: using guessed type int dword_140DC4AE8;
// 140DC4AEC: using guessed type int dword_140DC4AEC;

