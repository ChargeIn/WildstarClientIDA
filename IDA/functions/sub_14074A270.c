//----- (000000014074A270) ----------------------------------------------------
__int64 __fastcall sub_14074A270(__int64 a1)
{
	_DWORD* v1; // rax
	_DWORD* v2; // rdx
	bool v3; // cf
	_QWORD* v4; // rbp
	int v5; // eax
	BOOL v6; // esi
	__int64 v7; // rdi
	int* v8; // rax
	unsigned int v9; // r13d
	__int64 v10; // rcx
	int* v11; // r14
	__int64 v12; // rbx
	__int64 v13; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rdi
	__int64 v16; // r13
	_BOOL8 v17; // rbp
	__int64 v18; // r12
	__int64 v19; // r15
	_QWORD* v20; // rax
	_QWORD* v21; // rbx
	__int64 v22; // rsi
	int v23; // ecx
	unsigned int* v24; // rcx
	unsigned int v25; // r8d
	_QWORD* v26; // r9
	__int64 v27; // rdx
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64* v30; // rax
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64* v35; // rax
	__int64 v36; // rax
	__int64 v37; // rax
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64* v40; // rax
	__int64 v41; // rax
	__int64 v42; // rax
	int v43; // eax
	int* v44; // rcx
	int* i; // rbx
	__int64 v46; // rax
	__m128i v47; // xmm0
	int* v48; // rbx
	__int64 v49; // rcx
	BOOL v51; // [rsp+20h] [rbp-88h]
	__int64 v52; // [rsp+28h] [rbp-80h] BYREF
	__int64 v53; // [rsp+30h] [rbp-78h]
	__int64 v54; // [rsp+38h] [rbp-70h] BYREF
	__int64 v55; // [rsp+40h] [rbp-68h] BYREF
	__int64 v56; // [rsp+48h] [rbp-60h] BYREF
	__int64 v57; // [rsp+50h] [rbp-58h] BYREF
	_QWORD* v58; // [rsp+58h] [rbp-50h]
	__int64 v59; // [rsp+60h] [rbp-48h] BYREF
	char v60[8]; // [rsp+68h] [rbp-40h] BYREF
	int* v61; // [rsp+70h] [rbp-38h]

	v1 = *(_DWORD**)(a1 + 24);
	v2 = dword_140A12138;
	v3 = (unsigned __int64)v1 < *(_QWORD*)(a1 + 16);
	v4 = (_QWORD*)a1;
	v58 = (_QWORD*)a1;
	if (v3)
		v2 = v1;
	v5 = v2[2];
	v6 = v5 && (v5 != 1 || *v2);
	v7 = qword_140C665D8;
	v51 = v6;
	v53 = qword_140C665D8;
	v8 = sub_14018B280(24i64, 0);
	v9 = 1;
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	v10 = v4[4];
	v11 = v8;
	v61 = v8;
	if (*(_QWORD*)(v10 + 120) >= *(_QWORD*)(v10 + 112))
		sub_14005E2C0((__int64)v4);
	v12 = v4[2];
	v13 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	v4[2] += 16i64;
	v14 = *(_QWORD**)(v7 + 56);
	v15 = (_QWORD*)*v14;
	if ((_QWORD*)*v14 != v14)
	{
		v16 = v53;
		v17 = v6;
		do
		{
			v18 = v15[2];
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 144i64))(v18);
			v20 = *(_QWORD**)(v19 + 8);
			v21 = (_QWORD*)*v20;
			if ((_QWORD*)*v20 != v20)
			{
				while (1)
				{
					v22 = v21[3];
					v23 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v22 + 8));
					if (((v23 - 1) & 0xFFFFFFFC) == 0 && v23 != 3)
					{
						v24 = *(unsigned int**)(v22 + 8);
						if ((v24[3] & 0x80000) == 0)
						{
							v25 = *v24;
							v26 = *(_QWORD**)qword_140C65B80;
							v27 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
							v28 = v27;
							v29 = *(_QWORD*)(v27 + 8);
							while (v29)
							{
								if (*(_DWORD*)(v29 + 32) < v25)
								{
									v29 = *(_QWORD*)(v29 + 24);
								}
								else
								{
									v28 = v29;
									v29 = *(_QWORD*)(v29 + 16);
								}
							}
							if (v28 == v27 || v25 < *(_DWORD*)(v28 + 32))
							{
								v59 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
								v30 = &v59;
							}
							else
							{
								v52 = v28;
								v30 = &v52;
							}
							v31 = *v30;
							if (v31 != v27)
							{
								v32 = v31 + 40;
								if (v32)
								{
									if ((*(_DWORD*)(v32 + 68) & 2) != 0)
										break;
								}
							}
							v33 = *(_QWORD*)(v27 + 8);
							v34 = v27;
							while (v33)
							{
								if (*(_DWORD*)(v33 + 32) < v25)
								{
									v33 = *(_QWORD*)(v33 + 24);
								}
								else
								{
									v34 = v33;
									v33 = *(_QWORD*)(v33 + 16);
								}
							}
							if (v34 == v27 || v25 < *(_DWORD*)(v34 + 32))
							{
								v57 = v27;
								v35 = &v57;
							}
							else
							{
								v54 = v34;
								v35 = &v54;
							}
							v36 = *v35;
							if (v36 != v27)
							{
								v37 = v36 + 40;
								if (v37)
								{
									if (*(_DWORD*)(v37 + 72))
									{
										v38 = *(_QWORD*)(v27 + 8);
										v39 = v27;
										while (v38)
										{
											if (*(_DWORD*)(v38 + 32) < v25)
											{
												v38 = *(_QWORD*)(v38 + 24);
											}
											else
											{
												v39 = v38;
												v38 = *(_QWORD*)(v38 + 16);
											}
										}
										if (v39 == v27 || v25 < *(_DWORD*)(v39 + 32))
										{
											v56 = v27;
											v40 = &v56;
										}
										else
										{
											v55 = v39;
											v40 = &v55;
										}
										v41 = *v40;
										if (v41 == v27 || (v42 = v41 + 40) == 0)
											v43 = 0;
										else
											v43 = *(_DWORD*)(v42 + 72);
										if (v43 - dword_140C636A8 > 0)
											break;
									}
								}
							}
							if ((unsigned int)sub_1405FBC40(v26, v25) == 4)
								break;
						}
					}
					v21 = (_QWORD*)*v21;
					if (v21 == *(_QWORD**)(v19 + 8))
						goto LABEL_62;
				}
				if (v17)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 224i64))(v18);
				v44 = sub_14018B280(24i64, 0);
				if (v44 != (int*)-16i64)
					*((_QWORD*)v44 + 2) = v18;
				*(_QWORD*)v44 = v11;
				*((_QWORD*)v44 + 1) = *((_QWORD*)v11 + 1);
				**((_QWORD**)v11 + 1) = v44;
				*((_QWORD*)v11 + 1) = v44;
			}
		LABEL_62:
			v15 = (_QWORD*)*v15;
		} while (v15 != *(_QWORD**)(v16 + 56));
		v4 = v58;
		v9 = 1;
		v6 = v51;
	}
	if (v6 && *(int**)v11 != v11)
	{
		sub_14074A9F0((__int64)v60);
		v11 = v61;
	}
	for (i = *(int**)v11; i != v11; i = *(int**)i)
	{
		v46 = v4[2];
		v47 = _mm_cvtsi32_si128(v9);
		*(_DWORD*)(v46 + 8) = 3;
		++v9;
		*(_QWORD*)v46 = *(_OWORD*)&_mm_cvtepi32_pd(v47);
		v4[2] += 16i64;
		sub_14072D5B0(v4, *((_QWORD*)i + 2));
		sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
		v4[2] -= 32i64;
	}
	v48 = *(int**)v11;
	while (v48 != v11)
	{
		v49 = (__int64)v48;
		v48 = *(int**)v48;
		sub_14018B900(v49, 0);
	}
	*(_QWORD*)v11 = v11;
	*((_QWORD*)v11 + 1) = v11;
	sub_14018B900((__int64)v11, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C665D8: using guessed type __int64 qword_140C665D8;
// 14074A270: using guessed type char var_40[8];

