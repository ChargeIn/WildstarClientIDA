//----- (00000001404109E0) ----------------------------------------------------
__int64 __fastcall sub_1404109E0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // r8
	unsigned int v7; // r12d
	int v8; // ebx
	__int64 v9; // r13
	__int64 v10; // r9
	_DWORD* v11; // rdx
	__int64 v12; // rcx
	_DWORD* v13; // rcx
	int v14; // eax
	bool v15; // zf
	int v16; // eax
	BOOL v17; // esi
	BOOL v18; // edi
	int v19; // eax
	BOOL v20; // eax
	int* v21; // rcx
	__int64 v22; // rbx
	__int64 v23; // rdx
	int v24; // eax
	__int64 v25; // rdx
	_QWORD* v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rax
	char* v29; // rdx
	unsigned __int64 v30; // rdx
	int v31; // ecx
	int* v32; // rdi
	int v33; // ebx
	__int64 v34; // r10
	unsigned __int64 v35; // rcx
	char* v36; // rax
	__int64 v37; // r10
	char v38; // al
	int v39; // r8d
	__int64 v40; // rdx
	_QWORD* v41; // rax
	__int64 v42; // rdx
	__int64 v43; // rcx
	int v44; // edx
	__int64 v45; // rdx
	__int64 v46; // rbx
	__int64 v47; // rcx
	int v48; // edx
	__int64* v49; // rcx
	int v50; // ecx
	unsigned __int64 v51; // r8
	unsigned __int64 v52; // rdx
	_DWORD* v53; // rax
	int* v54; // rdx
	int v55; // eax
	int v56; // r8d
	int v57; // ebx
	_QWORD* v58; // rax
	__int64 v59; // rdx
	__int64* v60; // rax
	__int64 v61; // rdx
	__int64 v62; // rdx
	int v64; // [rsp+28h] [rbp-E0h]
	__int64(__fastcall * *v65)(); // [rsp+30h] [rbp-D8h] BYREF
	__int64 v66; // [rsp+38h] [rbp-D0h]
	int* v67; // [rsp+40h] [rbp-C8h]
	__int64(__fastcall * **v68)(); // [rsp+48h] [rbp-C0h]
	double v69; // [rsp+50h] [rbp-B8h] BYREF
	__int64(__fastcall * *v70)(); // [rsp+58h] [rbp-B0h] BYREF
	__int64 v71; // [rsp+60h] [rbp-A8h]
	__int64 v72; // [rsp+68h] [rbp-A0h]
	__int64 v73; // [rsp+70h] [rbp-98h]
	__int64(__fastcall * *v74)(); // [rsp+78h] [rbp-90h] BYREF
	char* v75; // [rsp+80h] [rbp-88h]
	int* v76; // [rsp+88h] [rbp-80h]
	char v77[8]; // [rsp+98h] [rbp-70h] BYREF
	int v78; // [rsp+A0h] [rbp-68h]
	__int64 v79; // [rsp+A8h] [rbp-60h]
	__int64 v80; // [rsp+B0h] [rbp-58h] BYREF
	__int64 v81; // [rsp+B8h] [rbp-50h] BYREF
	int v82; // [rsp+C0h] [rbp-48h]
	__int64 v83; // [rsp+C8h] [rbp-40h]
	__int64 v84; // [rsp+D0h] [rbp-38h]
	__int64 v85; // [rsp+D8h] [rbp-30h]
	__int64 v86; // [rsp+E0h] [rbp-28h]

	LODWORD(v71) = -2;
	v4 = *(_QWORD*)(a3 + 16);
	v64 = 0;
	v73 = a3;
	v72 = v4;
	v70 = off_140B56A08;
	v7 = 0;
	*(_DWORD*)(*(_QWORD*)(v4 + 16) + 8i64) = 0;
	*(_QWORD*)(v4 + 16) += 16i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v70[2])(&v70, 0xFFFFFFFFi64);
	*(_QWORD*)(*(_QWORD*)(a3 + 16) + 16i64) -= 16i64;
LABEL_2:
	v8 = 1;
	while ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v73 + 8i64))(v73)
		&& (unsigned int)sub_1400FCBA0((__int64)&v70))
	{
		sub_1400FBB00((__int64)&v70, (__int64)v77);
		v9 = v79;
		v10 = *(_QWORD*)(*(_QWORD*)(v79 + 32) + 160i64);
		if ((unsigned int)(v78 - 1) >= *(_DWORD*)(v10 + 56))
		{
			v69 = (double)v78;
			if ((double)v78 == 0.0)
				v11 = *(_DWORD**)(v10 + 32);
			else
				v11 = (_DWORD*)(*(_QWORD*)(v10 + 32)
					+ 40 * ((unsigned int)(LODWORD(v69) + HIDWORD(v69)) % (((1i64 << *(_BYTE*)(v10 + 11)) - 1) | 1)));
			while (v11[6] != 3 || (double)v78 != *((double*)v11 + 2))
			{
				v11 = (_DWORD*)*((_QWORD*)v11 + 4);
				if (!v11)
				{
					v11 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v11 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 16i64 * (v78 - 1));
		}
		v12 = *(_QWORD*)(v79 + 16);
		*(_QWORD*)v12 = *(_QWORD*)v11;
		*(_DWORD*)(v12 + 8) = v11[2];
		*(_QWORD*)(v9 + 16) += 16i64;
		v13 = (_DWORD*)(*(_QWORD*)(a2 + 16) - 16i64);
		v14 = -1;
		if (v13 != dword_140A12138)
			v14 = v13[2];
		v15 = v14 == 5;
		v16 = v13[2];
		v17 = v15;
		v18 = v16 == 7 || v16 == 2;
		if (v13 == dword_140A12138 || (unsigned int)(v16 - 3) > 1)
			v8 = 0;
		v19 = v13[2];
		v20 = v19 == 3 || v19 == 4 && sub_14005AC80((char*)(*(_QWORD*)v13 + 32i64), (unsigned __int64*)&v69);
		*(_QWORD*)(a2 + 16) -= 16i64;
		if (v17)
		{
			sub_1400FBF40((__int64)&v70, (__int64)&v74);
			v21 = v76;
			LODWORD(v66) = -2;
			v67 = v76;
			v65 = off_140B56A08;
			v68 = &v74;
			*(_DWORD*)(*((_QWORD*)v76 + 2) + 8i64) = 0;
			*((_QWORD*)v21 + 2) += 16i64;
			((void(__fastcall*)(__int64(__fastcall***)(), __int64))v65[2])(&v65, 0xFFFFFFFFi64);
			*((_QWORD*)v76 + 2) -= 16i64;
			v22 = 0i64;
			v83 = 0i64;
			v84 = 0i64;
			v85 = 0i64;
			v86 = 0i64;
			while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v68)[1])(v68)
				&& (unsigned int)sub_1400FCBA0((__int64)&v65))
			{
				v24 = sub_1400FC140((__int64)&v65);
				if ((unsigned int)v22 < 8)
				{
					*((_DWORD*)&v83 + v22) = v24;
					v22 = (unsigned int)(v22 + 1);
				}
			}
			if (*(int*)(a1 + 1192) <= 6)
			{
				v7 = 1;
				*(_QWORD*)(a1 + 1144) = 0i64;
				*(_QWORD*)(a1 + 1152) = 0i64;
				*(_QWORD*)(a1 + 1160) = 0i64;
				*(_QWORD*)(a1 + 1168) = 0i64;
				*(_QWORD*)(a1 + 1144) = v83;
				*(_QWORD*)(a1 + 1152) = v84;
				*(_QWORD*)(a1 + 1160) = v85;
				*(_QWORD*)(a1 + 1168) = v86;
				*(_DWORD*)(a1 + 1192) = 6;
			}
			v65 = off_140B56A08;
			if (v67)
				sub_1400579E0((__int64)v67, v23, v66);
			v74 = off_140B56A08;
			if (v76)
				sub_1400579E0((__int64)v76, v23, (int)v75);
			goto LABEL_103;
		}
		if (v8)
		{
			if (!v20)
			{
				sub_1400FB8D0((__int64)&v70, (__int64)&v65);
				if (v67)
					sub_1400579E0((__int64)v67, v25, v66);
				v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v78);
				v27 = *(_QWORD*)(v9 + 16);
				*(_QWORD*)v27 = *v26;
				*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
				*(_QWORD*)(v9 + 16) += 16i64;
				v28 = *(_QWORD*)(a2 + 16) - 16i64;
				if (*(_DWORD*)(v28 + 8) != 4)
				{
					if (!(unsigned int)sub_14005E620(a2, *(_QWORD*)(a2 + 16) - 16i64))
					{
						v29 = 0i64;
						goto LABEL_51;
					}
					if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
						sub_14005E2C0(a2);
					v28 = *(_QWORD*)(a2 + 16) - 16i64;
				}
				v29 = (char*)(*(_QWORD*)v28 + 32i64);
			LABEL_51:
				sub_14018F2D0(&v74, v29);
				v31 = *(_DWORD*)(a1 + 1196);
				v32 = (int*)v75;
				v33 = 0;
				if (v31 <= 6)
				{
					if (((char*)v76 - v75) >> 1)
					{
						v34 = *(_QWORD*)(a1 + 768);
						v30 = (*(_QWORD*)(a1 + 776) - v34) >> 1;
						if (v30 != ((char*)v76 - v75) >> 1)
							goto LABEL_61;
						v35 = 0i64;
						if (v30)
						{
							v36 = v75;
							v37 = v34 - (_QWORD)v75;
							while (*(_WORD*)&v36[v37] == *(_WORD*)v36)
							{
								++v35;
								v36 += 2;
								if (v35 >= v30)
								{
									v38 = 1;
									goto LABEL_62;
								}
							}
						LABEL_61:
							v38 = 0;
						}
						else
						{
							v38 = 1;
						}
					LABEL_62:
						LOBYTE(v33) = v38 == 0;
						if (&v74 != (__int64(__fastcall***)())(a1 + 760))
							sub_14001C480(a1 + 760, (int*)v75, v76);
						*(_DWORD*)(a1 + 1196) = 6;
					}
					else if (v31)
					{
						v33 = 1;
						sub_14001C2B0(a1 + 760, *(int**)(a1 + 768), *(int**)(a1 + 776));
						*(_DWORD*)(a1 + 1196) = 0;
					}
				}
				if (v32)
					sub_14018B900((__int64)v32, 0);
				v39 = v78;
				v15 = v33 == 0;
				v8 = 1;
				if (!v15)
					v7 = 1;
				goto LABEL_71;
			}
			goto LABEL_73;
		}
		if (v20)
		{
		LABEL_73:
			sub_1400FB8D0((__int64)&v70, (__int64)&v65);
			if (v67)
				sub_1400579E0((__int64)v67, v40, v66);
			v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v78);
			v42 = *(_QWORD*)(v9 + 16);
			*(_QWORD*)v42 = *v41;
			v43 = qword_140C65898;
			*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
			*(_QWORD*)(v9 + 16) += 16i64;
			if (*(_DWORD*)(v43 + 26180) == 49)
				v44 = *(_DWORD*)(v43 + 26176);
			else
				v44 = 0;
			v46 = sub_1403D90D0(v43, v44);
			if (v46)
			{
				v47 = *(_QWORD*)(a2 + 16);
				v48 = *(_DWORD*)(v47 - 8);
				v49 = (__int64*)(v47 - 16);
				if (v48 != 3)
				{
					if (v48 != 4 || !sub_14005AC80((char*)(*v49 + 32), (unsigned __int64*)&v80))
					{
						v50 = 0;
						goto LABEL_84;
					}
					v82 = 3;
					v49 = &v81;
					v81 = v80;
				}
				v50 = (int)*(double*)v49;
			LABEL_84:
				v51 = *(_QWORD*)(v46 + 14008);
				v52 = 0i64;
				if (v51)
				{
					v53 = *(_DWORD**)(v46 + 14000);
					while (*v53 != v50)
					{
						++v52;
						v53 += 64;
						if (v52 >= v51)
							goto LABEL_88;
					}
					v54 = (int*)(*(_QWORD*)(v46 + 14000) + (v52 << 8));
				}
				else
				{
				LABEL_88:
					v54 = 0i64;
				}
				v55 = sub_1404129B0((_DWORD*)a1, v54, 0);
				v39 = v78;
				v8 = 1;
				if (v55)
					v7 = 1;
			LABEL_71:
				*(_QWORD*)(a2 + 16) -= 16i64;
				sub_1400579E0(v9, v30, v39);
			}
			else
			{
				v56 = v78;
				*(_QWORD*)(a2 + 16) -= 16i64;
				v8 = 1;
				sub_1400579E0(v9, v45, v56);
			}
		}
		else
		{
			sub_1400FB8D0((__int64)&v70, (__int64)&v65);
			if (v67)
				sub_1400579E0((__int64)v67, v23, v66);
			if (!v18)
				goto LABEL_103;
			v57 = v78;
			v58 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v78);
			v59 = *(_QWORD*)(v9 + 16);
			*(_QWORD*)v59 = *v58;
			*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
			*(_QWORD*)(v9 + 16) += 16i64;
			v60 = (__int64*)sub_140417660(a2, -1);
			*(_QWORD*)(a2 + 16) -= 16i64;
			if (!v60 || (v61 = *v60) == 0)
			{
				sub_1400579E0(v9, v61, v57);
				goto LABEL_2;
			}
			if ((unsigned int)sub_140410300(a1, v61, 0))
			{
				v8 = 1;
				v7 = 1;
				v64 = 1;
				sub_1400579E0(v9, v23, v78);
			}
			else
			{
			LABEL_103:
				v8 = 1;
				sub_1400579E0(v9, v23, v78);
			}
		}
	}
	sub_140412AD0(a1);
	if (v7 && !v64)
	{
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)(a1 + 24) = 0;
	}
	v70 = off_140B56A08;
	if (v72)
		sub_1400579E0(v72, v62, v71);
	return v7;
}
// 140410E85: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140410D21: variable 'v23' is possibly undefined
// 140410D75: variable 'v25' is possibly undefined
// 140410F12: variable 'v30' is possibly undefined
// 140410F42: variable 'v40' is possibly undefined
// 14041106A: variable 'v45' is possibly undefined
// 140411121: variable 'v61' is possibly undefined
// 1404111BF: variable 'v62' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1404109E0: using guessed type char var_A0[8];

