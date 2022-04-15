//----- (0000000140577920) ----------------------------------------------------
__int64 __fastcall sub_140577920(__int64 a1, unsigned int* a2)
{
	unsigned __int64 v2; // r15
	__int64 v4; // r12
	_DWORD* v5; // rbx
	unsigned int v6; // edi
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // rbp
	__int64(__fastcall * v10)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v11; // edi
	__int64 v12; // rax
	__int64 v13; // rsi
	unsigned int v14; // edi
	unsigned int* v15; // rax
	int v16; // edx
	__int64 v17; // rax
	__int64 v18; // r9
	__int64 v19; // rdi
	__int64 v20; // r8
	int* v21; // rax
	int* v22; // rdx
	int** v23; // r8
	__int64 v24; // rax
	unsigned int v25; // r8d
	__m128 v27; // [rsp+60h] [rbp-88h] BYREF
	char v28[16]; // [rsp+70h] [rbp-78h] BYREF
	__m256 v29; // [rsp+80h] [rbp-68h] BYREF
	__int128 v30; // [rsp+A0h] [rbp-48h]
	__int128 v31; // [rsp+B0h] [rbp-38h]
	__int64 v32; // [rsp+F0h] [rbp+8h]

	v2 = 0i64;
	v32 = qword_140C65B78;
	if (*a2)
	{
		v4 = 0i64;
		do
		{
			v5 = (_DWORD*)(v4 + *((_QWORD*)a2 + 1));
			v6 = v5[2];
			if (qword_140C63840)
			{
				v7 = qword_140C63840(off_140A6DFF8, v6, qword_140C63858);
			}
			else
			{
				if (dword_140C64C04 || (int)sub_140248CA0() < 0)
					goto LABEL_40;
				v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v6);
			}
			v9 = v7;
			if (v7)
			{
				v10 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				v11 = v5[3];
				if (qword_140C63840)
				{
					v12 = qword_140C63840(off_140A6DFF8, v11, qword_140C63858);
					goto LABEL_16;
				}
				if (dword_140C64C04)
				{
					v13 = 0i64;
				}
				else
				{
					if ((int)sub_140248CA0() >= 0)
					{
						v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(
							qword_140C63B40,
							v11);
					LABEL_16:
						v13 = v12;
					}
					else
					{
						v13 = 0i64;
					}
					v10 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				}
				v14 = v5[4];
				v27 = 0i64;
				if (v14)
				{
					if (v10)
					{
						v15 = (unsigned int*)v10(off_140A6D658, v14, qword_140C63858);
					LABEL_24:
						if (v15)
							v27 = _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128)v15[27], (__m128)v15[29]),
								_mm_unpacklo_ps((__m128)v15[28], (__m128)0i64));
					}
					else if (!dword_140C64C94 && (int)sub_14023D1A0() >= 0)
					{
						v15 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FE8 + 24i64))(
							qword_140C64FE8,
							v14);
						goto LABEL_24;
					}
				}
				v16 = v5[1];
				v29 = ymmword_140C78390;
				v30 = xmmword_140C783B0;
				v31 = xmmword_140C783C0;
				if (v16)
				{
					v17 = sub_1403D90D0(qword_140C65898, v16);
					v19 = v17;
					if (v17)
					{
						if (*(_QWORD*)(v17 + 5864))
						{
							v20 = *(unsigned int*)(v9 + 148);
							if (!(_DWORD)v20
								|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
									qword_140C659A0,
									v17,
									v20,
									0i64,
									0i64,
									0))
							{
								v25 = v5[1];
								*(_QWORD*)&v31 = *(_QWORD*)(v19 + 4576);
								DWORD2(v31) = *(_DWORD*)(v19 + 4584);
								sub_1405787D0(
									(__int64)&v27,
									*v5,
									v25,
									v18,
									v9,
									v13,
									(__int128*)&v29,
									0,
									(_QWORD*)(v19 + 1416),
									(__int128*)&v27,
									0);
							}
							else
							{
								v21 = sub_14018B280(88i64, 0);
								v22 = v21;
								if (v21)
								{
									*(_QWORD*)v21 = off_140B6CC98;
									*((_QWORD*)v21 + 1) = 0i64;
									*((_QWORD*)v21 + 2) = 0i64;
									*((_QWORD*)v21 + 3) = 0i64;
									*((_QWORD*)v21 + 4) = 0i64;
									v21[10] = *v5;
									v21[11] = v5[1];
									v21[12] = v5[2];
									v21[13] = v5[3];
									v21[14] = v5[4];
									v21[15] = v5[5];
									v21[16] = v5[6];
									v21[17] = v5[7];
									*((_QWORD*)v21 + 9) = (unsigned int)v5[8];
									*((_QWORD*)v21 + 10) = 0i64;
								}
								else
								{
									v22 = 0i64;
								}
								v23 = (int**)(v32 + 8);
								if (!*((_QWORD*)v22 + 3))
								{
									*((_QWORD*)v22 + 3) = v23;
									*((_QWORD*)v22 + 4) = *v23;
									*v23 = v22;
									v24 = *((_QWORD*)v22 + 4);
									if (v24)
										*(_QWORD*)(v24 + 24) = v22 + 8;
								}
							}
						}
						else
						{
							sub_140579AC0((__int64*)(v17 + 1432), v5);
							sub_1400293C0(v32 + 16, (__int64)v28, v5 + 1);
						}
					}
				}
				else
				{
					LODWORD(v31) = v5[6];
					*(_QWORD*)((char*)&v31 + 4) = *(_QWORD*)(v5 + 7);
					sub_1405787D0(0i64, *v5, 0, v8, v9, v13, (__int128*)&v29, 0, 0i64, (__int128*)&v27, 0);
				}
			}
		LABEL_40:
			++v2;
			v4 += 36i64;
		} while (v2 < *a2);
	}
	return 0i64;
}
// 140577C6C: variable 'v18' is possibly undefined
// 140577CC1: variable 'v8' is possibly undefined
// 140A6D658: using guessed type wchar_t *off_140A6D658[2];
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140B6CC98: using guessed type __int64 (__fastcall *off_140B6CC98[4])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;
// 140C64C94: using guessed type int dword_140C64C94;
// 140C64FE8: using guessed type __int64 qword_140C64FE8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140577920: using guessed type char var_78[16];

