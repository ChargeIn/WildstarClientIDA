//----- (00000001406B0F90) ----------------------------------------------------
void __fastcall sub_1406B0F90(_QWORD* a1)
{
	_QWORD* v1; // rbx
	unsigned int v2; // ebx
	__int64 v3; // rcx
	__int64 v4; // rbp
	__m128* v5; // rax
	unsigned int* v6; // rdi
	int v7; // esi
	__int64 v8; // rdi
	__int64 v9; // rcx
	_QWORD* v10; // rax
	__int64 v11; // rax
	int v12; // ecx
	__int64 v13; // rax
	__int64 v14; // rcx
	int v15; // eax
	int v16; // eax
	int v17; // eax
	int v18; // r8d
	unsigned int v19; // eax
	_QWORD* v20; // rcx
	__int64 v21; // rbx
	int v22; // [rsp+20h] [rbp-98h] BYREF
	__int64 v23; // [rsp+28h] [rbp-90h]
	int v24; // [rsp+30h] [rbp-88h] BYREF
	int v25; // [rsp+38h] [rbp-80h]
	int v26; // [rsp+3Ch] [rbp-7Ch]
	_QWORD* v27; // [rsp+C0h] [rbp+8h]
	int v28; // [rsp+C8h] [rbp+10h] BYREF
	__int64 v29; // [rsp+D0h] [rbp+18h] BYREF
	__int64 v30; // [rsp+D8h] [rbp+20h]

	if (a1)
	{
		v27 = a1;
		v1 = a1;
		v28 = 0;
		do
		{
			v2 = *((_DWORD*)v1 + 124);
			v30 = qword_140C659F0;
			v4 = sub_1405B1510(&qword_140C7DFB0);
			if (v4)
			{
				v5 = (__m128*)sub_1404C9B90(v3, v2);
				v6 = (unsigned int*)v5;
				if (v5)
				{
					if (v5[40].m128_i32[1]
						&& v5[40].m128_i32[2]
						&& (_mm_movemask_ps(_mm_cmpneq_ps(v5[9], v5[32]))
							|| v5[10].m128_u64[0] != v5[33].m128_u64[0]
							|| v5[10].m128_i32[2] != v5[33].m128_i32[2]
							|| v5[33].m128_f32[3] != v5[10].m128_f32[3]
							|| v5[19].m128_i32[0]
							? (v7 = 1)
							: (v7 = 0),
							((*(void(__fastcall**)(__m128*))(v5->m128_u64[0] + 96))(v5), v6[161]) && v6[162]))
					{
						if (v7 || v6[168] != v6[169])
						{
							v11 = *(_QWORD*)(v4 + 232);
							if (!v11 || !*(_DWORD*)(v4 + 272))
								v11 = 0i64;
							v12 = *(_DWORD*)(v11 + 184);
							if ((v12 & 0xFFFFFFFA) == 0 && v12 != 4)
							{
								v22 = 0;
								v23 = 0i64;
								sub_1407E4830(&v24, 0i64, 0x58ui64);
								v13 = sub_140203DA0(v6[24]);
								if (v13)
								{
									v15 = *(_DWORD*)(v13 + 8) - 12;
									if (v15)
									{
										v16 = v15 - 10;
										if (v16)
										{
											v17 = v16 - 31;
											if (v17)
											{
												if (v17 == 1)
													v25 = 8;
												else
													v25 = 2;
											}
											else
											{
												v25 = 7;
											}
										}
										else
										{
											v25 = 6;
										}
									}
									else
									{
										v25 = 4;
									}
									sub_1404B89A0(v14, (__int64)&v22, (__int64)v6, (_QWORD*)(v4 + 8));
									if (v25 == 8)
									{
										if (v6[76])
										{
											v18 = -1;
											v19 = 0;
											if ((_DWORD)qword_140C4DF20)
											{
												v20 = (_QWORD*)qword_140C4DF18;
												while (*v20)
												{
													++v19;
													++v20;
													if (v19 >= (unsigned int)qword_140C4DF20)
													{
														v26 = -1;
														goto LABEL_51;
													}
												}
												v18 = v19;
											}
											v26 = v18 | 0x10000;
										}
									}
									else if (v25 == 7 && qword_140C65B98 && *(_DWORD*)(qword_140C65B98 + 268) == 4)
									{
										++* (_DWORD*)(qword_140C65B98 + 408);
									}
								LABEL_51:
									v21 = v30;
									sub_1404BC7E0((__int64*)(v30 + 680), &v22, 1i64);
									sub_140003460((__int64*)(v21 + 760), &v28);
								}
							}
						}
						else
						{
							v8 = qword_140C659F8;
							v9 = *(_QWORD*)(qword_140C659F8 + 200);
							if (v9)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
								*(_QWORD*)(v8 + 200) = 0i64;
							}
							v10 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
							if (v10)
								sub_1405AFE10(v10);
							sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingMyResidenceDecorChanged", byte_1409EBF4C, v2);
						}
					}
					else
					{
						sub_1403CC530(qword_140C65898, 0x67u);
					}
				}
			}
			v29 = 0i64;
			if ((*(int(__fastcall**)(_QWORD*, __int64*))(*v27 + 208i64))(v27, &v29) >= 0)
				sub_1406B0F90(v29);
			v1 = (_QWORD*)v27[5];
			v27 = v1;
		} while (v1);
	}
}
// 1406B0FEF: variable 'v3' is possibly undefined
// 1406B11C9: variable 'v14' is possibly undefined
// 1409EBF4C: using guessed type _BYTE byte_1409EBF4C[24];
// 140C4DF18: using guessed type __int64 qword_140C4DF18;
// 140C4DF20: using guessed type __int64 qword_140C4DF20;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

