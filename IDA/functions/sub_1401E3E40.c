//----- (00000001401E3E40) ----------------------------------------------------
void __fastcall sub_1401E3E40(__int64 a1, float a2)
{
	__int64 v3; // rcx
	unsigned __int64 v4; // r12
	__int64 v5; // rdi
	unsigned __int64 i; // rbx
	unsigned int v7; // eax
	__int64 v8; // rsi
	float v9; // xmm0_4
	unsigned __int64 j; // rbx
	__int64 v11; // r14
	__int64 v12; // rax
	__int64 v13; // rsi
	double v14; // xmm0_8
	int v15; // eax
	float v16; // xmm2_4
	int* v17; // r8
	float v18; // xmm6_4
	int v19; // eax
	int v20[2]; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v21; // [rsp+28h] [rbp-D8h]
	float v22; // [rsp+30h] [rbp-D0h]
	int v23; // [rsp+34h] [rbp-CCh]
	int v24; // [rsp+38h] [rbp-C8h]
	__int64 v25[3]; // [rsp+3Ch] [rbp-C4h] BYREF
	int v26; // [rsp+54h] [rbp-ACh]
	int v27; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v28; // [rsp+5Ch] [rbp-A4h]
	int v29; // [rsp+64h] [rbp-9Ch]
	float v30; // [rsp+68h] [rbp-98h]
	int v31; // [rsp+6Ch] [rbp-94h]
	int v32; // [rsp+70h] [rbp-90h]
	int v33[10]; // [rsp+78h] [rbp-88h] BYREF

	v3 = *(_QWORD*)(a1 + 304);
	if (v3 && (a2 != 0.0 || *(float*)(a1 + 3176) != 0.0))
	{
		*(float*)(a1 + 3176) = a2;
		v4 = (*(__int64 (**)(void))(*(_QWORD*)v3 + 1288i64))();
		if (v4)
		{
			v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 25i64);
			if (v5)
			{
				sub_1407E4830(v33, 0i64, 0x28ui64);
				for (i = 0i64; i < v4; ++i)
				{
					v7 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 304) + 1296i64))(
						*(_QWORD*)(a1 + 304),
						i);
					v8 = sub_14021A300(v7);
					if (v8)
					{
						v9 = (*(float(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 304) + 1304i64))(
							*(_QWORD*)(a1 + 304),
							i);
						if (v9 >= 0.0099999998)
							*(float*)&v33[*(int*)(v8 + 20)] = v9 + *(float*)&v33[*(int*)(v8 + 20)];
					}
				}
				for (j = 0i64; j < v4; ++j)
				{
					v11 = (*(unsigned int(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 304) + 1296i64))(
						*(_QWORD*)(a1 + 304),
						j);
					if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 448i64))(v5, v11))
					{
						if (qword_140C63840)
						{
							v12 = qword_140C63840(off_140A6B978, (unsigned int)v11, qword_140C63858);
						}
						else
						{
							if (dword_140C640D4 || (int)sub_14021A0A0() < 0)
								continue;
							v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64860 + 24i64))(
								qword_140C64860,
								(unsigned int)v11);
						}
						if (v12)
						{
							v13 = *(int*)(v12 + 20);
							v14 = (*(double(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 304) + 1304i64))(
								*(_QWORD*)(a1 + 304),
								j);
							if ((int)v13 >= 4)
							{
								if ((int)v13 <= 8)
								{
									if (*(float*)&v14 <= 0.0099999998)
									{
										v25[0] = 0i64;
										v25[1] = 1065353216i64;
										v25[2] = 1065353216i64;
										v26 = 0;
										v17 = (int*)v25;
									}
									else
									{
										v20[0] = v11;
										v18 = (float)(*(float*)&v14 * a2) / *(float*)&v33[v13];
										v19 = dword_140A4AFA8[v13];
										v20[1] = 0;
										v21 = 1065353216i64;
										v23 = 17;
										v17 = v20;
										v24 = v19;
										v22 = v18;
									}
								LABEL_29:
									(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v5 + 600i64))(v5, (unsigned int)j, v17);
									continue;
								}
								if ((_DWORD)v13 == 9)
								{
									v15 = *(_DWORD*)((*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v5 + 456i64))(
										v5,
										(unsigned int)v11,
										0i64)
										+ 8);
									if ((_DWORD)v11 == 226)
										v16 = (float)(180.0 - *(float*)&v14) * 0.0027777778;
									else
										v16 = (float)(*(float*)&v14 + 180.0) * 0.0027777778;
									v30 = a2;
									v27 = v11;
									v28 = 0i64;
									v31 = 19;
									v32 = 44;
									v17 = &v27;
									v29 = (int)(float)(fmaxf(0.0, fminf(v16, 1.0)) * (float)v15);
									goto LABEL_29;
								}
							}
						}
					}
				}
			}
		}
	}
}
// 1401E3F24: conditional instruction was optimized away because r12.8!=0
// 1401E3F89: conditional instruction was optimized away because r12.8!=0
// 140A4AFA8: using guessed type _DWORD dword_140A4AFA8[139];
// 140A6B978: using guessed type wchar_t *off_140A6B978[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C640D4: using guessed type int dword_140C640D4;
// 140C64860: using guessed type __int64 qword_140C64860;
// 1401E3E40: using guessed type int var_B8[10];

