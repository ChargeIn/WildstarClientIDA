//----- (0000000140596FB0) ----------------------------------------------------
__int64 __fastcall sub_140596FB0(__int64 a1)
{
	unsigned int v1; // r15d
	__int64 v2; // rsi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rdi
	int v9; // eax
	int v10; // eax
	_DWORD* v11; // rdx
	__int64 v12; // rax
	int v13; // eax
	BOOL v14; // eax
	BOOL v15; // ebx
	unsigned int v16; // eax
	__int64* v17; // r13
	__int64* v18; // r14
	int* v19; // rdi
	__int64 v20; // rcx
	unsigned int v21; // r12d
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rcx
	unsigned int v25; // edi
	__int64 v26; // rax
	unsigned int* v27; // rdi
	int* v28; // rax
	int v29; // ecx
	int v30; // ecx
	int* v31; // rax
	__int64 v32; // rcx
	unsigned __int64 v33; // rax
	__int64 v34; // rdi
	__int64 v35; // rax
	int v36; // ebx
	__int64 v37; // r8
	unsigned __int64 v38; // r12
	__int64 v39; // rbx
	__int64 v40; // rcx
	unsigned __int64 v41; // rax
	__int64 v42; // rdi
	__int64 v43; // rax
	int v44; // edi
	__int64 v45; // rdx
	__int64 v46; // r8
	_DWORD* v47; // rcx
	__int64 v48; // rdi
	__int64 v49; // rdx
	int v51; // [rsp+20h] [rbp-E0h]
	double v52; // [rsp+20h] [rbp-E0h]
	int v53; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * *v54)(); // [rsp+30h] [rbp-D0h] BYREF
	__int64* v55; // [rsp+38h] [rbp-C8h]
	__int64* v56; // [rsp+40h] [rbp-C0h]
	__int64* v57; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v58)(); // [rsp+50h] [rbp-B0h] BYREF
	int* v59; // [rsp+58h] [rbp-A8h]
	__int64 v60; // [rsp+60h] [rbp-A0h]
	int v61; // [rsp+68h] [rbp-98h]
	__int64 v62; // [rsp+70h] [rbp-90h]
	__int64 v63; // [rsp+78h] [rbp-88h]
	__int64 v64; // [rsp+80h] [rbp-80h]
	int v65; // [rsp+90h] [rbp-70h] BYREF
	int v66[37]; // [rsp+98h] [rbp-68h] BYREF
	int v67[85]; // [rsp+12Ch] [rbp+2Ch] BYREF

	v1 = 0;
	v2 = a1;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v64 = a1;
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != v2)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	v9 = sub_1400F26A0(v7 + 384, 1);
	v51 = sub_14049BDC0(v9);
	v10 = sub_1400F26A0(v8, 2);
	v11 = dword_140A12138;
	v53 = v10;
	v12 = *(_QWORD*)(v8 + 16);
	if ((unsigned __int64)(*(_QWORD*)(v12 + 24) + 32i64) < *(_QWORD*)(v12 + 16))
		v11 = (_DWORD*)(*(_QWORD*)(v12 + 24) + 32i64);
	v13 = v11[2];
	v14 = v13 && (v13 != 1 || *v11);
	v15 = v14;
	v16 = sub_1400F26A0(v8, 4);
	v17 = 0i64;
	v55 = 0i64;
	v18 = 0i64;
	v56 = 0i64;
	v62 = sub_14020E7A0(v16);
	v57 = 0i64;
	sub_1400B52A0((__int64)v66);
	sub_1407E4830(&v65, 0i64, 0x1F0ui64);
	sub_1407E4830(v66, 0i64, 0x138ui64);
	sub_1407E4830(v67, 0i64, 0x90ui64);
	v19 = v67;
	v20 = 15i64;
	v21 = 0;
	while (v20)
	{
		*v19++ = 197;
		--v20;
	}
	v58 = (__int64(__fastcall**)())qword_140C65B90;
	v22 = v15;
	v23 = qword_140C65B90;
	v63 = v22;
	if (*(_QWORD*)(qword_140C65B90 + 240))
	{
		v24 = 0i64;
		while (1)
		{
			v25 = *(_DWORD*)(*(_QWORD*)(v23 + 232) + 4 * v24);
			if (qword_140C63840)
				break;
			if (dword_140C654F8)
			{
				v27 = 0i64;
			}
			else
			{
				if ((int)sub_1402459A0() >= 0)
				{
					v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 24i64))(qword_140C63868, v25);
					goto LABEL_26;
				}
				v27 = 0i64;
			}
		LABEL_27:
			v28 = sub_1400B5DF0(qword_140C658F0, v27[3], &v65);
			if (v28 && !v28[73])
			{
				if ((v51 & 0x40) != 0)
				{
					if (v28[69] == 127)
						goto LABEL_34;
				}
				else
				{
					v29 = v28[69];
					if (v29 != 127 && (v29 & v51) != 0)
					{
					LABEL_34:
						if ((!v53 || v28[88] == v53)
							&& (!v62 || (v30 = v28[96]) == 0 || (v30 & *(_DWORD*)(v62 + 16)) != 0)
							&& (!v63 || (unsigned int)sub_1405E5B90(qword_140C65898 + 5784, *v27))
							&& !v27[19])
						{
							if (v27[7])
							{
								v31 = sub_1400B5DF0(qword_140C658F0, v27[3], 0i64);
								if (v31)
								{
									v58 = (__int64(__fastcall**)())v27;
									v59 = v31;
									if (v18 == v17)
									{
										sub_1400B4C50(&v54, v18, &v58);
										v18 = v56;
										v17 = v57;
									}
									else
									{
										if (v18)
										{
											*v18 = (__int64)v27;
											v18[1] = (__int64)v31;
										}
										v18 += 2;
										v56 = v18;
									}
								}
							}
						}
					}
				}
			}
			v24 = ++v21;
			if ((unsigned __int64)v21 >= *(_QWORD*)(v23 + 240))
			{
				v17 = v55;
				v2 = v64;
				goto LABEL_51;
			}
		}
		v26 = qword_140C63840(off_140A6DD58, v25, qword_140C63858);
	LABEL_26:
		v27 = (unsigned int*)v26;
		goto LABEL_27;
	}
LABEL_51:
	v32 = *(_QWORD*)(v2 + 32);
	v56 = (__int64*)v2;
	v54 = off_140B569F0;
	v33 = *(_QWORD*)(v32 + 112);
	LODWORD(v57) = 1;
	if (*(_QWORD*)(v32 + 120) >= v33)
		sub_14005E2C0(v2);
	v34 = *(_QWORD*)(v2 + 16);
	v35 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v34 + 8) = 5;
	*(_QWORD*)v34 = v35;
	*(_QWORD*)(v2 + 16) += 16i64;
	v36 = sub_1400578C0(v2);
	LODWORD(v55) = v36;
	v38 = ((char*)v18 - (char*)v17) >> 4;
	if (v38)
	{
		sub_1405A3DB0(v17, v18, v37);
		v39 = 0i64;
		do
		{
			v40 = *(_QWORD*)(v2 + 32);
			v58 = off_140B569F0;
			v60 = v2;
			v41 = *(_QWORD*)(v40 + 112);
			v61 = 1;
			if (*(_QWORD*)(v40 + 120) >= v41)
				sub_14005E2C0(v2);
			v42 = *(_QWORD*)(v2 + 16);
			v43 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v42 + 8) = 5;
			*(_QWORD*)v42 = v43;
			*(_QWORD*)(v2 + 16) += 16i64;
			v44 = sub_1400578C0(v2);
			LODWORD(v59) = v44;
			if ((int)sub_14059E000((__int64)&v17[2 * v39], (__int64)&v58, 0) >= 0)
				sub_1400FB1D0((__int64)&v54);
			sub_1400579E0(v2, v45, v44);
			v39 = ++v1;
		} while (v1 < v38);
		v2 = (__int64)v56;
		v36 = (int)v55;
	}
	v46 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
	if ((unsigned int)(v36 - 1) >= *(_DWORD*)(v46 + 56))
	{
		if ((double)v36 == 0.0)
		{
			v47 = *(_DWORD**)(v46 + 32);
		}
		else
		{
			v52 = (double)v36;
			v47 = (_DWORD*)(*(_QWORD*)(v46 + 32)
				+ 40 * ((unsigned int)(LODWORD(v52) + HIDWORD(v52)) % (((1i64 << *(_BYTE*)(v46 + 11)) - 1) | 1)));
		}
		while (v47[6] != 3 || (double)v36 != *((double*)v47 + 2))
		{
			v47 = (_DWORD*)*((_QWORD*)v47 + 4);
			if (!v47)
			{
				v47 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v47 = (_DWORD*)(*(_QWORD*)(v46 + 24) + 16i64 * (v36 - 1));
	}
	v48 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v48 = *(_QWORD*)v47;
	v49 = (unsigned int)v47[2];
	*(_DWORD*)(v48 + 8) = v49;
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400579E0(v2, v49, v36);
	if (v17)
		sub_14018B900((__int64)v17, 0);
	return 1i64;
}
// 14059734D: conditional instruction was optimized away because r12.8!=0
// 140597345: variable 'v37' is possibly undefined
// 1405973E7: variable 'v45' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C654F8: using guessed type int dword_140C654F8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B90: using guessed type __int64 qword_140C65B90;
// 140596FB0: using guessed type int var_218[37];
// 140596FB0: using guessed type int var_184[85];

