//----- (0000000140326800) ----------------------------------------------------
unsigned __int64 __fastcall sub_140326800(__int64* a1, __int64 a2, __int64 a3)
{
	unsigned int v4; // r9d
	__int64* v6; // rbp
	unsigned __int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdx
	int* v10; // rbx
	__int64 v11; // rcx
	unsigned __int64 result; // rax
	__int64 v13; // rdx
	__int64 v14; // r13
	unsigned int v15; // r15d
	int v16; // r8d
	__int64 v17; // rsi
	__int64 v18; // rdi
	__int16 v19; // dx
	unsigned __int64 v20; // rbx
	int* v21; // rbp
	int* v22; // rdx
	__int64* v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rbx
	int v26; // eax
	__int64 v27; // r8
	__int16 v28; // dx
	__int64 v29; // rax
	unsigned __int16 v30; // r10
	unsigned int v31; // edx
	_WORD* v32; // rax
	__int64 v33; // r9
	unsigned int v34; // ecx
	unsigned int v35; // eax
	int v36; // r9d
	int v37; // r10d
	int v38; // r11d
	unsigned __int16 v39; // ax
	int v40; // [rsp+20h] [rbp-58h]
	__int64 v41; // [rsp+28h] [rbp-50h]
	_DWORD* v42; // [rsp+30h] [rbp-48h]
	int v44; // [rsp+88h] [rbp+10h]

	v4 = *(_DWORD*)(a2 + 20);
	v6 = a1;
	a1[1] = 0i64;
	v7 = (v4 & 1) + (v4 >> 1);
	sub_140326F00(a1, v7);
	v6[3] = 0i64;
	v8 = sub_14018DBC0(v6[2], v7, 8i64);
	v9 = (int*)v6[2];
	v10 = v8;
	if (v9 != v8)
	{
		sub_1407DB590(v8, v9, 8 * v6[3]);
		v11 = v6[2];
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		v6[2] = (__int64)v10;
	}
	result = *(_QWORD*)(a2 + 8);
	v13 = *(_QWORD*)(result + 64);
	v14 = *(_QWORD*)(result + 56);
	v15 = 0;
	v16 = 0;
	v44 = 0;
	LODWORD(v17) = 0;
	v41 = v13;
	if (*(_DWORD*)(a2 + 20))
	{
		do
		{
			v18 = *(_QWORD*)(v13 + 136) + 112i64 * *(unsigned int*)(*(_QWORD*)(a2 + 32) + 4i64 * (unsigned int)v17);
			v40 = *(_DWORD*)(v18 + 8);
			result = *(unsigned __int16*)(v18 + 30);
			if ((unsigned int)result < *(_DWORD*)(v14 + 512))
			{
				result = *(_QWORD*)(v14 + 520);
				v19 = *(_WORD*)(result + 4i64 * *(unsigned __int16*)(v18 + 30));
				if (v19)
				{
					for (result = 0i64; result < 4; ++result)
					{
						if (v19 == *(_WORD*)(a3 + 2 * result))
							break;
					}
					if (result == 4)
					{
						LODWORD(v17) = v17 + 1;
					}
					else
					{
						v20 = v15 + 1;
						sub_140326E40(v6, v20);
						if (v6[3] <= v20)
						{
							v21 = sub_14018DB00(v6[2], (unsigned int)v20, 8i64);
							v22 = (int*)a1[2];
							if (v22 != v21)
							{
								sub_1407DB590(v21, v22, 8 * a1[3]);
								v23 = a1;
								v24 = a1[2];
								if (v24)
								{
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
									v23 = a1;
								}
								v23[2] = (__int64)v21;
							}
							v6 = a1;
						}
						v6[3] = v20;
						v25 = *v6 + 112i64 * v15;
						v17 = (unsigned int)(v17 + 1);
						v42 = (_DWORD*)(v6[2] + 8i64 * v15);
						*(_DWORD*)v25 = *(_DWORD*)v18;
						*(_DWORD*)(v25 + 4) = *(_DWORD*)(v18 + 4);
						*(_DWORD*)(v25 + 8) = *(_DWORD*)(v18 + 8);
						*(_DWORD*)(v25 + 12) = *(_DWORD*)(v18 + 12);
						*(_WORD*)(v25 + 16) = *(_WORD*)(v18 + 16);
						*(_WORD*)(v25 + 18) = *(_WORD*)(v18 + 18);
						*(_WORD*)(v25 + 20) = *(_WORD*)(v18 + 20);
						*(_WORD*)(v25 + 22) = *(_WORD*)(v18 + 22);
						*(_WORD*)(v25 + 24) = *(_WORD*)(v18 + 24);
						*(_WORD*)(v25 + 26) = *(_WORD*)(v18 + 26);
						*(_WORD*)(v25 + 28) = *(_WORD*)(v18 + 28);
						*(_WORD*)(v25 + 30) = *(_WORD*)(v18 + 30);
						*(_WORD*)(v25 + 32) = *(_WORD*)(v18 + 32);
						*(_WORD*)(v25 + 34) = *(_WORD*)(v18 + 34);
						*(_WORD*)(v25 + 36) = *(_WORD*)(v18 + 36);
						*(_WORD*)(v25 + 38) = *(_WORD*)(v18 + 38);
						*(_QWORD*)(v25 + 40) = *(_QWORD*)(v18 + 40);
						*(_QWORD*)(v25 + 48) = *(_QWORD*)(v18 + 48);
						*(_BYTE*)(v25 + 56) = *(_BYTE*)(v18 + 56);
						*(_BYTE*)(v25 + 57) = *(_BYTE*)(v18 + 57);
						*(_BYTE*)(v25 + 58) = *(_BYTE*)(v18 + 58);
						*(_OWORD*)(v25 + 64) = *(_OWORD*)(v18 + 64);
						*(_OWORD*)(v25 + 80) = *(_OWORD*)(v18 + 80);
						*(_DWORD*)(v25 + 96) = *(_DWORD*)(v18 + 96);
						*(_DWORD*)(v25 + 100) = *(_DWORD*)(v18 + 100);
						v26 = *(_DWORD*)(v18 + 104);
						*(_DWORD*)(v25 + 34) = 0;
						*(_DWORD*)(v25 + 104) = v26;
						*(_WORD*)(v25 + 38) = 0;
						*(_DWORD*)v25 = v44;
						*(_WORD*)(v25 + 30) = -1;
						if ((unsigned int)v17 < *(_DWORD*)(a2 + 20))
						{
						LABEL_22:
							v27 = *(_QWORD*)(v41 + 136) + 112i64 * *(unsigned int*)(*(_QWORD*)(a2 + 32) + 4 * v17);
							if ((unsigned int)*(unsigned __int16*)(v27 + 30) >= *(_DWORD*)(v14 + 512))
								goto LABEL_53;
							v28 = *(_WORD*)(*(_QWORD*)(v14 + 520) + 4i64 * *(unsigned __int16*)(v27 + 30));
							if (!v28)
								goto LABEL_53;
							v29 = 0i64;
							while (v28 != *(_WORD*)(a3 + 2 * v29))
							{
								if ((unsigned __int64)++v29 >= 4)
									goto LABEL_29;
							}
							LODWORD(v17) = v17 + 1;
						LABEL_29:
							if (v29 == 4)
							{
							LABEL_53:
								LODWORD(v17) = v17 + 1;
							}
							else if (*(_WORD*)(v18 + 16) == *(_WORD*)(v27 + 16)
								&& *(_WORD*)(v18 + 18) == *(_WORD*)(v27 + 18)
								&& *(_WORD*)(v18 + 22) == *(_WORD*)(v27 + 22))
							{
								v30 = *(_WORD*)(v18 + 24);
								if (v30 == *(_WORD*)(v27 + 24)
									&& *(_WORD*)(v18 + 28) == *(_WORD*)(v27 + 28)
									&& *(_WORD*)(v18 + 26) == *(_WORD*)(v27 + 26)
									&& *(_BYTE*)(v18 + 56) == *(_BYTE*)(v27 + 56))
								{
									v31 = 0;
									v32 = (_WORD*)(v25 + 40);
									v33 = v27 - v25;
									while ((*(_WORD*)((char*)v32 + v33) & *v32) != 0 && v32[4] == *(_WORD*)((char*)v32 + v33 + 8))
									{
										++v31;
										++v32;
										if (v31 >= 4)
										{
											if (v18 == v27 || (*(_BYTE*)(184i64 * v30 + *(_QWORD*)(v14 + 248)) & 1) == 0)
											{
												*(_DWORD*)(v25 + 8) += *(_DWORD*)(v27 + 8);
												v34 = *(_DWORD*)(v27 + 4);
												v35 = *(_DWORD*)(v25 + 4);
												if (v35 > v34)
												{
													*(_DWORD*)(v25 + 12) += v35 - v34;
													*(_DWORD*)(v25 + 4) = *(_DWORD*)(v27 + 4);
												}
												v36 = *(_DWORD*)(v27 + 12);
												v37 = *(_DWORD*)(v27 + 4);
												v38 = *(_DWORD*)(v25 + 4);
												if (v38 + *(_DWORD*)(v25 + 12) < (unsigned int)(v36 + v37))
													*(_DWORD*)(v25 + 12) = v37 + v36 - v38;
												v39 = *(_WORD*)(v27 + 20);
												if (*(_WORD*)(v25 + 20) < v39)
													*(_WORD*)(v25 + 20) = v39;
												v17 = (unsigned int)(v17 + 1);
												*(_WORD*)(v25 + 40) &= *(_WORD*)(v27 + 40);
												*(_WORD*)(v25 + 42) &= *(_WORD*)(v27 + 42);
												*(_WORD*)(v25 + 44) &= *(_WORD*)(v27 + 44);
												*(_WORD*)(v25 + 46) &= *(_WORD*)(v27 + 46);
												if ((unsigned int)v17 < *(_DWORD*)(a2 + 20))
													goto LABEL_22;
											}
											break;
										}
									}
								}
							}
						}
						*v42 = sub_14030E510(*(_QWORD*)(a2 + 8), (unsigned __int16*)v25);
						result = sub_14030E690(*(_QWORD*)(a2 + 8), v25);
						++v15;
						v16 = v44;
						v42[1] = result;
					}
				}
				else
				{
					LODWORD(v17) = v17 + 1;
				}
				v13 = v41;
			}
			else
			{
				LODWORD(v17) = v17 + 1;
			}
			v16 += v40;
			v44 = v16;
		} while ((unsigned int)v17 < *(_DWORD*)(a2 + 20));
	}
	return result;
}
// 140326BD6: conditional instruction was optimized away because edx.4<4u

