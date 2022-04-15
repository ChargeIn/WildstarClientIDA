//----- (0000000140597C90) ----------------------------------------------------
__int64 __fastcall sub_140597C90(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rcx
	int v9; // esi
	unsigned __int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // r12d
	unsigned __int64 v14; // r15
	__int64(__fastcall * *v15)(); // r14
	__int64 v16; // r13
	int* v17; // rdi
	__int64 v18; // rcx
	unsigned int v19; // esi
	__int64 v20; // rcx
	unsigned int v21; // edi
	__int64 v22; // rax
	int* v23; // rax
	int* v24; // r9
	unsigned int v25; // r8d
	int v26; // edx
	unsigned __int64 v27; // rdx
	unsigned __int64 v28; // rcx
	unsigned __int64 v29; // rax
	unsigned int v30; // edi
	unsigned __int64 v31; // rsi
	__int64 v32; // rcx
	unsigned __int64 v33; // rax
	__int64 v34; // rdi
	__int64 v35; // rax
	int v36; // eax
	unsigned int v37; // r8d
	int v38; // eax
	__int64 v39; // rdx
	int v40; // edi
	__int64 v41; // r8
	_DWORD* v42; // rcx
	__int64 v43; // rdi
	__int64 v44; // rdx
	char v46; // [rsp+30h] [rbp-D0h]
	double v47; // [rsp+30h] [rbp-D0h]
	__int64(__fastcall * *v48)(); // [rsp+38h] [rbp-C8h] BYREF
	unsigned __int64 v49; // [rsp+40h] [rbp-C0h]
	__int64 v50; // [rsp+48h] [rbp-B8h]
	int v51; // [rsp+50h] [rbp-B0h]
	__int64 v52; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v53)(); // [rsp+60h] [rbp-A0h] BYREF
	int v54; // [rsp+68h] [rbp-98h]
	__int64 v55; // [rsp+70h] [rbp-90h]
	int v56; // [rsp+78h] [rbp-88h]
	int v57; // [rsp+80h] [rbp-80h] BYREF
	int v58[37]; // [rsp+88h] [rbp-78h] BYREF
	int v59[85]; // [rsp+11Ch] [rbp+1Ch] BYREF

	v1 = a1;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v52 = a1;
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != v1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = *(_QWORD*)(v1 + 32);
	v55 = v1;
	v9 = v7;
	v46 = v7;
	v53 = off_140B569F0;
	v10 = *(_QWORD*)(v8 + 112);
	v56 = 1;
	if (*(_QWORD*)(v8 + 120) >= v10)
		sub_14005E2C0(v1);
	v11 = *(_QWORD*)(v1 + 16);
	v12 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	*(_QWORD*)(v1 + 16) += 16i64;
	v13 = sub_1400578C0(v1);
	v54 = v13;
	v14 = 0i64;
	v49 = 0i64;
	v15 = 0i64;
	v48 = 0i64;
	if (v9)
	{
		sub_1400B52A0((__int64)v58);
		sub_1407E4830(&v57, 0i64, 0x1F0ui64);
		sub_1407E4830(v58, 0i64, 0x138ui64);
		sub_1407E4830(v59, 0i64, 0x90ui64);
		v16 = qword_140C65B90;
		v17 = v59;
		v18 = 15i64;
		v19 = 0;
		while (v18)
		{
			*v17++ = 197;
			--v18;
		}
		if (*(_QWORD*)(v16 + 240))
		{
			v20 = 0i64;
			do
			{
				v21 = *(_DWORD*)(*(_QWORD*)(v16 + 232) + 4 * v20);
				if (qword_140C63840)
				{
					v22 = qword_140C63840(off_140A6DD58, v21, qword_140C63858);
				}
				else if (dword_140C654F8)
				{
					v22 = 0i64;
				}
				else if ((int)sub_1402459A0() >= 0)
				{
					v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 24i64))(qword_140C63868, v21);
				}
				else
				{
					v22 = 0i64;
				}
				v23 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v22 + 12), &v57);
				if (v23)
				{
					v24 = v23 + 73;
					v25 = v23[73];
					if (v25)
					{
						v26 = v23[99];
						if (!v26 || (v26 & (1 << (v46 - 1))) != 0)
						{
							v27 = 0i64;
							v28 = v14;
							while (v27 < v28)
							{
								v29 = v27 + ((v28 - v27) >> 1);
								v30 = *((_DWORD*)v15 + v29);
								if (v25 < v30)
								{
									v28 = v27 + ((v28 - v27) >> 1);
								}
								else
								{
									if (v30 >= v25)
										goto LABEL_33;
									v27 = v29 + 1;
								}
							}
							sub_1401C2E70((__int64*)&v48, v27, v24);
							v14 = v49;
							v15 = v48;
						}
					}
				}
			LABEL_33:
				v20 = ++v19;
			} while ((unsigned __int64)v19 < *(_QWORD*)(v16 + 240));
			v1 = v52;
		}
	}
	else
	{
		sub_140003500((__int64*)&v48, qword_140C65B90 + 264);
		v14 = v49;
		v15 = v48;
	}
	v31 = 0i64;
	if (v14)
	{
		do
		{
			v32 = *(_QWORD*)(v1 + 32);
			v48 = off_140B569F0;
			v50 = v1;
			v33 = *(_QWORD*)(v32 + 112);
			v51 = 1;
			if (*(_QWORD*)(v32 + 120) >= v33)
				sub_14005E2C0(v1);
			v34 = *(_QWORD*)(v1 + 16);
			v35 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v34 + 8) = 5;
			*(_QWORD*)v34 = v35;
			*(_QWORD*)(v1 + 16) += 16i64;
			v36 = sub_1400578C0(v1);
			v37 = *((_DWORD*)v15 + v31);
			LODWORD(v49) = v36;
			v38 = sub_140677210(v1, (__int64)&v48, v37, 0, 0, 0i64);
			v40 = v49;
			if (v38)
				sub_1400FB1D0((__int64)&v53);
			if (v50)
				sub_1400579E0(v50, v39, v40);
			++v31;
		} while (v31 < v14);
		v1 = v55;
		v13 = v54;
	}
	v41 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v41 + 56))
	{
		if ((double)v13 == 0.0)
		{
			v42 = *(_DWORD**)(v41 + 32);
		}
		else
		{
			v47 = (double)v13;
			v42 = (_DWORD*)(*(_QWORD*)(v41 + 32)
				+ 40 * ((unsigned int)(LODWORD(v47) + HIDWORD(v47)) % (((1i64 << *(_BYTE*)(v41 + 11)) - 1) | 1)));
		}
		while (v42[6] != 3 || (double)v13 != *((double*)v42 + 2))
		{
			v42 = (_DWORD*)*((_QWORD*)v42 + 4);
			if (!v42)
			{
				v42 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v42 = (_DWORD*)(*(_QWORD*)(v41 + 24) + 16i64 * (v13 - 1));
	}
	v43 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v43 = *(_QWORD*)v42;
	v44 = (unsigned int)v42[2];
	*(_DWORD*)(v43 + 8) = v44;
	*(_QWORD*)(v1 + 16) += 16i64;
	if (v15)
		(*((void(__fastcall**)(__int64(__fastcall**)())) * (v15 - 2) + 1))(v15 - 2);
	sub_1400579E0(v1, v44, v13);
	return 1i64;
}
// 140597FC3: variable 'v39' is possibly undefined
// 1405980C8: variable 'v44' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C654F8: using guessed type int dword_140C654F8;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B90: using guessed type __int64 qword_140C65B90;
// 140597C90: using guessed type int var_218[37];
// 140597C90: using guessed type int var_184[85];

