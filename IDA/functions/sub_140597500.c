//----- (0000000140597500) ----------------------------------------------------
__int64 __fastcall sub_140597500(__int64 a1)
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
	_DWORD* v10; // rdx
	__int64 v11; // rax
	int v12; // eax
	BOOL v13; // eax
	BOOL v14; // ebx
	unsigned int v15; // eax
	__int64* v16; // r13
	__int64* v17; // r14
	int* v18; // rdi
	__int64 v19; // rcx
	unsigned int v20; // r12d
	__int64 v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rcx
	unsigned int v24; // edi
	__int64 v25; // rax
	unsigned int* v26; // rdi
	int* v27; // rax
	int v28; // ecx
	int* v29; // rax
	__int64 v30; // rcx
	unsigned __int64 v31; // rax
	__int64 v32; // rdi
	__int64 v33; // rax
	int v34; // ebx
	__int64 v35; // r8
	unsigned __int64 v36; // r12
	__int64 v37; // rbx
	__int64 v38; // rcx
	unsigned __int64 v39; // rax
	__int64 v40; // rdi
	__int64 v41; // rax
	int v42; // edi
	__int64 v43; // rdx
	__int64 v44; // r8
	_DWORD* v45; // rcx
	__int64 v46; // rdi
	__int64 v47; // rdx
	int v49; // [rsp+20h] [rbp-E0h]
	double v50; // [rsp+20h] [rbp-E0h]
	int v51; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * *v52)(); // [rsp+30h] [rbp-D0h] BYREF
	__int64* v53; // [rsp+38h] [rbp-C8h]
	__int64* v54; // [rsp+40h] [rbp-C0h]
	__int64* v55; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v56)(); // [rsp+50h] [rbp-B0h] BYREF
	int* v57; // [rsp+58h] [rbp-A8h]
	__int64 v58; // [rsp+60h] [rbp-A0h]
	int v59; // [rsp+68h] [rbp-98h]
	__int64 v60; // [rsp+70h] [rbp-90h]
	__int64 v61; // [rsp+78h] [rbp-88h]
	__int64 v62; // [rsp+80h] [rbp-80h]
	int v63; // [rsp+90h] [rbp-70h] BYREF
	int v64[37]; // [rsp+98h] [rbp-68h] BYREF
	int v65[85]; // [rsp+12Ch] [rbp+2Ch] BYREF

	v1 = 0;
	v2 = a1;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v62 = a1;
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
	v49 = sub_1400F26A0(v7 + 384, 1);
	v9 = sub_1400F26A0(v8, 2);
	v10 = dword_140A12138;
	v51 = v9;
	v11 = *(_QWORD*)(v8 + 16);
	if ((unsigned __int64)(*(_QWORD*)(v11 + 24) + 32i64) < *(_QWORD*)(v11 + 16))
		v10 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 32i64);
	v12 = v10[2];
	v13 = v12 && (v12 != 1 || *v10);
	v14 = v13;
	v15 = sub_1400F26A0(v8, 4);
	v16 = 0i64;
	v53 = 0i64;
	v17 = 0i64;
	v54 = 0i64;
	v60 = sub_14020E7A0(v15);
	v55 = 0i64;
	sub_1400B52A0((__int64)v64);
	sub_1407E4830(&v63, 0i64, 0x1F0ui64);
	sub_1407E4830(v64, 0i64, 0x138ui64);
	sub_1407E4830(v65, 0i64, 0x90ui64);
	v18 = v65;
	v19 = 15i64;
	v20 = 0;
	while (v19)
	{
		*v18++ = 197;
		--v19;
	}
	v56 = (__int64(__fastcall**)())qword_140C65B90;
	v21 = v14;
	v22 = qword_140C65B90;
	v61 = v21;
	if (*(_QWORD*)(qword_140C65B90 + 240))
	{
		v23 = 0i64;
		while (1)
		{
			v24 = *(_DWORD*)(*(_QWORD*)(v22 + 232) + 4 * v23);
			if (qword_140C63840)
				break;
			if (dword_140C654F8)
			{
				v26 = 0i64;
			}
			else
			{
				if ((int)sub_1402459A0() >= 0)
				{
					v25 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 24i64))(qword_140C63868, v24);
					goto LABEL_26;
				}
				v26 = 0i64;
			}
		LABEL_27:
			v27 = sub_1400B5DF0(qword_140C658F0, v26[3], &v63);
			if (v27
				&& v27[73] == v49
				&& (!v51 || v27[88] == v51)
				&& (!v60 || (v28 = v27[96]) == 0 || (v28 & *(_DWORD*)(v60 + 16)) != 0)
				&& (!v61 || (unsigned int)sub_1405E5B90(qword_140C65898 + 5784, *v26))
				&& !v26[19])
			{
				if (v26[7])
				{
					v29 = sub_1400B5DF0(qword_140C658F0, v26[3], 0i64);
					if (v29)
					{
						v56 = (__int64(__fastcall**)())v26;
						v57 = v29;
						if (v17 == v16)
						{
							sub_1400B4C50(&v52, v17, &v56);
							v17 = v54;
							v16 = v55;
						}
						else
						{
							if (v17)
							{
								*v17 = (__int64)v26;
								v17[1] = (__int64)v29;
							}
							v17 += 2;
							v54 = v17;
						}
					}
				}
			}
			v23 = ++v20;
			if ((unsigned __int64)v20 >= *(_QWORD*)(v22 + 240))
			{
				v16 = v53;
				v2 = v62;
				goto LABEL_46;
			}
		}
		v25 = qword_140C63840(off_140A6DD58, v24, qword_140C63858);
	LABEL_26:
		v26 = (unsigned int*)v25;
		goto LABEL_27;
	}
LABEL_46:
	v30 = *(_QWORD*)(v2 + 32);
	v54 = (__int64*)v2;
	v52 = off_140B569F0;
	v31 = *(_QWORD*)(v30 + 112);
	LODWORD(v55) = 1;
	if (*(_QWORD*)(v30 + 120) >= v31)
		sub_14005E2C0(v2);
	v32 = *(_QWORD*)(v2 + 16);
	v33 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v32 + 8) = 5;
	*(_QWORD*)v32 = v33;
	*(_QWORD*)(v2 + 16) += 16i64;
	v34 = sub_1400578C0(v2);
	LODWORD(v53) = v34;
	v36 = ((char*)v17 - (char*)v16) >> 4;
	if (v36)
	{
		sub_1405A3DB0(v16, v17, v35);
		v37 = 0i64;
		do
		{
			v38 = *(_QWORD*)(v2 + 32);
			v56 = off_140B569F0;
			v58 = v2;
			v39 = *(_QWORD*)(v38 + 112);
			v59 = 1;
			if (*(_QWORD*)(v38 + 120) >= v39)
				sub_14005E2C0(v2);
			v40 = *(_QWORD*)(v2 + 16);
			v41 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v40 + 8) = 5;
			*(_QWORD*)v40 = v41;
			*(_QWORD*)(v2 + 16) += 16i64;
			v42 = sub_1400578C0(v2);
			LODWORD(v57) = v42;
			if ((int)sub_14059E000((__int64)&v16[2 * v37], (__int64)&v56, 0) >= 0)
				sub_1400FB1D0((__int64)&v52);
			sub_1400579E0(v2, v43, v42);
			v37 = ++v1;
		} while (v1 < v36);
		v2 = (__int64)v54;
		v34 = (int)v53;
	}
	v44 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
	if ((unsigned int)(v34 - 1) >= *(_DWORD*)(v44 + 56))
	{
		if ((double)v34 == 0.0)
		{
			v45 = *(_DWORD**)(v44 + 32);
		}
		else
		{
			v50 = (double)v34;
			v45 = (_DWORD*)(*(_QWORD*)(v44 + 32)
				+ 40 * ((unsigned int)(LODWORD(v50) + HIDWORD(v50)) % (((1i64 << *(_BYTE*)(v44 + 11)) - 1) | 1)));
		}
		while (v45[6] != 3 || (double)v34 != *((double*)v45 + 2))
		{
			v45 = (_DWORD*)*((_QWORD*)v45 + 4);
			if (!v45)
			{
				v45 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v45 = (_DWORD*)(*(_QWORD*)(v44 + 24) + 16i64 * (v34 - 1));
	}
	v46 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v46 = *(_QWORD*)v45;
	v47 = (unsigned int)v45[2];
	*(_DWORD*)(v46 + 8) = v47;
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400579E0(v2, v47, v34);
	if (v16)
		sub_14018B900((__int64)v16, 0);
	return 1i64;
}
// 140597870: conditional instruction was optimized away because r12.8!=0
// 140597868: variable 'v35' is possibly undefined
// 140597907: variable 'v43' is possibly undefined
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
// 140597500: using guessed type int var_218[37];
// 140597500: using guessed type int var_184[85];

