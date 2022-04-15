//----- (00000001404AC000) ----------------------------------------------------
__int64 __fastcall sub_1404AC000(__int64 a1)
{
	unsigned int v2; // eax
	_QWORD* v3; // rdx
	_QWORD* v4; // rbx
	unsigned int v5; // r13d
	__int64 v6; // r15
	unsigned int v7; // edi
	__int64 v8; // rax
	unsigned int v9; // r14d
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64 v15; // rdi
	int* v16; // rax
	int* v17; // rsi
	int* v18; // rax
	__int64 v19; // rdi
	int* v20; // rax
	__int64 v21; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v24; // rax
	_QWORD* v25; // rbx
	__int64 v26; // r14
	unsigned int v27; // edi
	__int64 v28; // rax
	unsigned int v29; // esi
	__int64 v30; // rdx
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // rax
	__int64 v35; // rdi
	int* v36; // rax
	int* v37; // r15
	int* v38; // rax
	__int64 v39; // rdi
	int* v40; // rax
	__int64 v41; // rcx
	__int64 v42; // r8
	__int64 v43; // rdx
	__int64 v44; // rdi
	bool v45; // al
	__int64 v46; // rcx
	__int64 k; // rax
	__int64 v48; // rax
	int* v49; // rcx
	__int64 v50; // rax
	__int64 v51; // rax
	__int64 v52; // rax
	_QWORD* m; // rax
	__int64 n; // rax
	_QWORD* v55; // rax
	_QWORD* v56; // rbx
	__int64 v57; // r15
	unsigned int v58; // edi
	__int64 v59; // rax
	unsigned int v60; // esi
	__int64 v61; // rdx
	__int64 v62; // rcx
	__int64 v63; // rax
	__int64* v64; // rax
	__int64 v65; // rax
	__int64 v66; // rdi
	int* v67; // rax
	int* v68; // r14
	int* v69; // rax
	__int64 v70; // rdi
	int* v71; // rax
	__int64 v72; // rcx
	__int64 v73; // r8
	__int64 v74; // rdx
	__int64 v75; // rdi
	bool v76; // al
	__int64 v77; // rcx
	__int64 ii; // rax
	__int64 v79; // rax
	int* v80; // rcx
	__int64 v81; // rax
	__int64 v82; // rax
	__int64 v83; // rax
	_QWORD* jj; // rax
	__int64 kk; // rax
	__int64 v87[2]; // [rsp+20h] [rbp-20h] BYREF
	char v88[16]; // [rsp+30h] [rbp-10h] BYREF
	__int64 v89; // [rsp+80h] [rbp+40h] BYREF
	__int64 v90; // [rsp+88h] [rbp+48h] BYREF
	__int64 v91; // [rsp+90h] [rbp+50h] BYREF

	v2 = sub_1404AE270((_QWORD*)a1);
	v3 = *(_QWORD**)(a1 + 16);
	*(_DWORD*)(a1 + 392) = 0;
	v4 = (_QWORD*)v3[2];
	v5 = v2;
	if (v4 != v3)
	{
		do
		{
			v6 = v4[5];
			v7 = *(_DWORD*)(*(_QWORD*)v6 + 24i64);
			if (qword_140C63840)
			{
				v8 = qword_140C63840(off_140A6E228, v7, qword_140C63858);
			}
			else
			{
				if (dword_140C63E98 || (int)sub_14024B720() < 0)
				{
				LABEL_9:
					v9 = 0;
					goto LABEL_10;
				}
				v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v7);
			}
			if (!v8)
				goto LABEL_9;
			v9 = *(_DWORD*)(v8 + 40);
		LABEL_10:
			v10 = *(_QWORD*)(a1 + 304);
			v11 = v10;
			v12 = *(_QWORD*)(v10 + 8);
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < v9)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v11 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v11 == v10 || v9 < *(_DWORD*)(v11 + 32))
			{
				v91 = *(_QWORD*)(a1 + 304);
				v13 = &v91;
			}
			else
			{
				v90 = v11;
				v13 = &v90;
			}
			v14 = *v13;
			if (v14 == *(_QWORD*)(a1 + 304))
			{
				v17 = sub_14018B280(16i64, 0);
				if (v17)
				{
					v18 = sub_14018B280(24i64, 0);
					*((_QWORD*)v17 + 1) = v18;
					*(_QWORD*)v18 = v18;
					*(_QWORD*)(*((_QWORD*)v17 + 1) + 8i64) = *((_QWORD*)v17 + 1);
				}
				else
				{
					v17 = 0i64;
				}
				v19 = *((_QWORD*)v17 + 1);
				v20 = sub_14018B280(24i64, 0);
				if (v20 != (int*)-16i64)
					*((_QWORD*)v20 + 2) = v6;
				*(_QWORD*)v20 = v19;
				*((_QWORD*)v20 + 1) = *(_QWORD*)(v19 + 8);
				**(_QWORD**)(v19 + 8) = v20;
				LODWORD(v87[0]) = v9;
				*(_QWORD*)(v19 + 8) = v20;
				v87[1] = (__int64)v17;
				sub_140055F80(a1 + 296, (__int64)v88, v87);
			}
			else
			{
				v15 = *(_QWORD*)(*(_QWORD*)(v14 + 40) + 8i64);
				v16 = sub_14018B280(24i64, 0);
				if (v16 != (int*)-16i64)
					*((_QWORD*)v16 + 2) = v6;
				*(_QWORD*)v16 = v15;
				*((_QWORD*)v16 + 1) = *(_QWORD*)(v15 + 8);
				**(_QWORD**)(v15 + 8) = v16;
				*(_QWORD*)(v15 + 8) = v16;
			}
			v21 = v4[3];
			if (v21)
			{
				v4 = (_QWORD*)v4[3];
				for (i = *(_QWORD**)(v21 + 16); i; i = (_QWORD*)i[2])
					v4 = i;
			}
			else
			{
				for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = (_QWORD*)j;
				if (v4[3] != j)
					v4 = (_QWORD*)j;
			}
		} while (v4 != *(_QWORD**)(a1 + 16));
	}
	v24 = *(_QWORD**)(a1 + 48);
	v25 = (_QWORD*)v24[2];
	if (v25 != v24)
	{
		do
		{
			v26 = v25[5];
			v27 = *(_DWORD*)(*(_QWORD*)v26 + 24i64);
			if (qword_140C63840)
			{
				v28 = qword_140C63840(off_140A6E228, v27, qword_140C63858);
			}
			else
			{
				if (dword_140C63E98 || (int)sub_14024B720() < 0)
					goto LABEL_46;
				v28 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v27);
			}
			if (v28)
			{
				v29 = *(_DWORD*)(v28 + 40);
				goto LABEL_47;
			}
		LABEL_46:
			v29 = 0;
		LABEL_47:
			v30 = *(_QWORD*)(a1 + 336);
			v31 = v30;
			v32 = *(_QWORD*)(v30 + 8);
			while (v32)
			{
				if (*(_DWORD*)(v32 + 32) < v29)
				{
					v32 = *(_QWORD*)(v32 + 24);
				}
				else
				{
					v31 = v32;
					v32 = *(_QWORD*)(v32 + 16);
				}
			}
			if (v31 == v30 || v29 < *(_DWORD*)(v31 + 32))
			{
				v90 = *(_QWORD*)(a1 + 336);
				v33 = &v90;
			}
			else
			{
				v89 = v31;
				v33 = &v89;
			}
			v34 = *v33;
			if (v34 == v30)
			{
				v37 = sub_14018B280(16i64, 0);
				if (v37)
				{
					v38 = sub_14018B280(24i64, 0);
					*((_QWORD*)v37 + 1) = v38;
					*(_QWORD*)v38 = v38;
					*(_QWORD*)(*((_QWORD*)v37 + 1) + 8i64) = *((_QWORD*)v37 + 1);
				}
				else
				{
					v37 = 0i64;
				}
				v39 = *((_QWORD*)v37 + 1);
				v40 = sub_14018B280(24i64, 0);
				if (v40 != (int*)-16i64)
					*((_QWORD*)v40 + 2) = v26;
				*(_QWORD*)v40 = v39;
				v41 = *(_QWORD*)(v39 + 8);
				LODWORD(v87[0]) = v29;
				*((_QWORD*)v40 + 1) = v41;
				**(_QWORD**)(v39 + 8) = v40;
				*(_QWORD*)(v39 + 8) = v40;
				v42 = *(_QWORD*)(a1 + 336);
				v43 = *(_QWORD*)(v42 + 8);
				v44 = v42;
				v45 = 1;
				while (v43)
				{
					v44 = v43;
					v45 = v29 < *(_DWORD*)(v43 + 32);
					if (v29 >= *(_DWORD*)(v43 + 32))
						v43 = *(_QWORD*)(v43 + 24);
					else
						v43 = *(_QWORD*)(v43 + 16);
				}
				v46 = v44;
				if (v45)
				{
					if (v44 == *(_QWORD*)(v42 + 16))
						goto LABEL_82;
					if (*(_BYTE*)v44 || *(_QWORD*)(*(_QWORD*)(v44 + 8) + 8i64) != v44)
					{
						v46 = *(_QWORD*)(v44 + 16);
						if (v46)
						{
							for (k = *(_QWORD*)(v46 + 24); k; k = *(_QWORD*)(k + 24))
								v46 = k;
						}
						else
						{
							v46 = *(_QWORD*)(v44 + 8);
							if (v44 == *(_QWORD*)(v46 + 16))
							{
								do
								{
									v48 = v46;
									v46 = *(_QWORD*)(v46 + 8);
								} while (v48 == *(_QWORD*)(v46 + 16));
							}
						}
					}
					else
					{
						v46 = *(_QWORD*)(v44 + 24);
					}
				}
				if (*(_DWORD*)(v46 + 32) < v29)
				{
				LABEL_82:
					if (v44 == v42 || v29 < *(_DWORD*)(v44 + 32))
					{
						v49 = sub_14018B280(48i64, 0);
						if (v49 != (int*)-32i64)
						{
							*((_QWORD*)v49 + 4) = v87[0];
							*((_QWORD*)v49 + 5) = v37;
						}
						*(_QWORD*)(v44 + 16) = v49;
						v51 = *(_QWORD*)(a1 + 336);
						if (v44 == v51)
						{
							*(_QWORD*)(v51 + 8) = v49;
							*(_QWORD*)(*(_QWORD*)(a1 + 336) + 24i64) = v49;
						}
						else if (v44 == *(_QWORD*)(v51 + 16))
						{
							*(_QWORD*)(v51 + 16) = v49;
						}
					}
					else
					{
						v49 = sub_14018B280(48i64, 0);
						if (v49 != (int*)-32i64)
						{
							*((_QWORD*)v49 + 4) = v87[0];
							*((_QWORD*)v49 + 5) = v37;
						}
						*(_QWORD*)(v44 + 24) = v49;
						v50 = *(_QWORD*)(a1 + 336);
						if (v44 == *(_QWORD*)(v50 + 24))
							*(_QWORD*)(v50 + 24) = v49;
					}
					*((_QWORD*)v49 + 1) = v44;
					*((_QWORD*)v49 + 2) = 0i64;
					*((_QWORD*)v49 + 3) = 0i64;
					sub_1400081C0((__int64)v49, (_QWORD*)(*(_QWORD*)(a1 + 336) + 8i64));
					++* (_QWORD*)(a1 + 344);
				}
			}
			else
			{
				v35 = *(_QWORD*)(*(_QWORD*)(v34 + 40) + 8i64);
				v36 = sub_14018B280(24i64, 0);
				if (v36 != (int*)-16i64)
					*((_QWORD*)v36 + 2) = v26;
				*(_QWORD*)v36 = v35;
				*((_QWORD*)v36 + 1) = *(_QWORD*)(v35 + 8);
				**(_QWORD**)(v35 + 8) = v36;
				*(_QWORD*)(v35 + 8) = v36;
			}
			v52 = v25[3];
			if (v52)
			{
				v25 = (_QWORD*)v25[3];
				for (m = *(_QWORD**)(v52 + 16); m; m = (_QWORD*)m[2])
					v25 = m;
			}
			else
			{
				for (n = v25[1]; v25 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
					v25 = (_QWORD*)n;
				if (v25[3] != n)
					v25 = (_QWORD*)n;
			}
		} while (v25 != *(_QWORD**)(a1 + 48));
	}
	v55 = *(_QWORD**)(a1 + 176);
	v56 = (_QWORD*)v55[2];
	if (v56 != v55)
	{
		do
		{
			v57 = v56[5];
			v58 = *(_DWORD*)(**(_QWORD**)(v57 + 8) + 24i64);
			if (qword_140C63840)
			{
				v59 = qword_140C63840(off_140A6E228, v58, qword_140C63858);
			}
			else
			{
				if (dword_140C63E98 || (int)sub_14024B720() < 0)
					goto LABEL_112;
				v59 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v58);
			}
			if (v59)
			{
				v60 = *(_DWORD*)(v59 + 40);
				goto LABEL_113;
			}
		LABEL_112:
			v60 = 0;
		LABEL_113:
			v61 = *(_QWORD*)(a1 + 368);
			v62 = v61;
			v63 = *(_QWORD*)(v61 + 8);
			while (v63)
			{
				if (*(_DWORD*)(v63 + 32) < v60)
				{
					v63 = *(_QWORD*)(v63 + 24);
				}
				else
				{
					v62 = v63;
					v63 = *(_QWORD*)(v63 + 16);
				}
			}
			if (v62 == v61 || v60 < *(_DWORD*)(v62 + 32))
			{
				v90 = *(_QWORD*)(a1 + 368);
				v64 = &v90;
			}
			else
			{
				v89 = v62;
				v64 = &v89;
			}
			v65 = *v64;
			if (v65 == v61)
			{
				v68 = sub_14018B280(16i64, 0);
				if (v68)
				{
					v69 = sub_14018B280(24i64, 0);
					*((_QWORD*)v68 + 1) = v69;
					*(_QWORD*)v69 = v69;
					*(_QWORD*)(*((_QWORD*)v68 + 1) + 8i64) = *((_QWORD*)v68 + 1);
				}
				else
				{
					v68 = 0i64;
				}
				v70 = *((_QWORD*)v68 + 1);
				v71 = sub_14018B280(24i64, 0);
				if (v71 != (int*)-16i64)
					*((_QWORD*)v71 + 2) = v57;
				*(_QWORD*)v71 = v70;
				v72 = *(_QWORD*)(v70 + 8);
				LODWORD(v87[0]) = v60;
				*((_QWORD*)v71 + 1) = v72;
				**(_QWORD**)(v70 + 8) = v71;
				*(_QWORD*)(v70 + 8) = v71;
				v73 = *(_QWORD*)(a1 + 368);
				v74 = *(_QWORD*)(v73 + 8);
				v75 = v73;
				v76 = 1;
				while (v74)
				{
					v75 = v74;
					v76 = v60 < *(_DWORD*)(v74 + 32);
					if (v60 >= *(_DWORD*)(v74 + 32))
						v74 = *(_QWORD*)(v74 + 24);
					else
						v74 = *(_QWORD*)(v74 + 16);
				}
				v77 = v75;
				if (v76)
				{
					if (v75 == *(_QWORD*)(v73 + 16))
						goto LABEL_148;
					if (*(_BYTE*)v75 || *(_QWORD*)(*(_QWORD*)(v75 + 8) + 8i64) != v75)
					{
						v77 = *(_QWORD*)(v75 + 16);
						if (v77)
						{
							for (ii = *(_QWORD*)(v77 + 24); ii; ii = *(_QWORD*)(ii + 24))
								v77 = ii;
						}
						else
						{
							v77 = *(_QWORD*)(v75 + 8);
							if (v75 == *(_QWORD*)(v77 + 16))
							{
								do
								{
									v79 = v77;
									v77 = *(_QWORD*)(v77 + 8);
								} while (v79 == *(_QWORD*)(v77 + 16));
							}
						}
					}
					else
					{
						v77 = *(_QWORD*)(v75 + 24);
					}
				}
				if (*(_DWORD*)(v77 + 32) < v60)
				{
				LABEL_148:
					if (v75 == v73 || v60 < *(_DWORD*)(v75 + 32))
					{
						v80 = sub_14018B280(48i64, 0);
						if (v80 != (int*)-32i64)
						{
							*((_QWORD*)v80 + 4) = v87[0];
							*((_QWORD*)v80 + 5) = v68;
						}
						*(_QWORD*)(v75 + 16) = v80;
						v82 = *(_QWORD*)(a1 + 368);
						if (v75 == v82)
						{
							*(_QWORD*)(v82 + 8) = v80;
							*(_QWORD*)(*(_QWORD*)(a1 + 368) + 24i64) = v80;
						}
						else if (v75 == *(_QWORD*)(v82 + 16))
						{
							*(_QWORD*)(v82 + 16) = v80;
						}
					}
					else
					{
						v80 = sub_14018B280(48i64, 0);
						if (v80 != (int*)-32i64)
						{
							*((_QWORD*)v80 + 4) = v87[0];
							*((_QWORD*)v80 + 5) = v68;
						}
						*(_QWORD*)(v75 + 24) = v80;
						v81 = *(_QWORD*)(a1 + 368);
						if (v75 == *(_QWORD*)(v81 + 24))
							*(_QWORD*)(v81 + 24) = v80;
					}
					*((_QWORD*)v80 + 1) = v75;
					*((_QWORD*)v80 + 2) = 0i64;
					*((_QWORD*)v80 + 3) = 0i64;
					sub_1400081C0((__int64)v80, (_QWORD*)(*(_QWORD*)(a1 + 368) + 8i64));
					++* (_QWORD*)(a1 + 376);
				}
			}
			else
			{
				v66 = *(_QWORD*)(*(_QWORD*)(v65 + 40) + 8i64);
				v67 = sub_14018B280(24i64, 0);
				if (v67 != (int*)-16i64)
					*((_QWORD*)v67 + 2) = v57;
				*(_QWORD*)v67 = v66;
				*((_QWORD*)v67 + 1) = *(_QWORD*)(v66 + 8);
				**(_QWORD**)(v66 + 8) = v67;
				*(_QWORD*)(v66 + 8) = v67;
			}
			v83 = v56[3];
			if (v83)
			{
				v56 = (_QWORD*)v56[3];
				for (jj = *(_QWORD**)(v83 + 16); jj; jj = (_QWORD*)jj[2])
					v56 = jj;
			}
			else
			{
				for (kk = v56[1]; v56 == *(_QWORD**)(kk + 24); kk = *(_QWORD*)(kk + 8))
					v56 = (_QWORD*)kk;
				if (v56[3] != kk)
					v56 = (_QWORD*)kk;
			}
		} while (v56 != *(_QWORD**)(a1 + 176));
	}
	return v5;
}
// 1404AC3FE: conditional instruction was optimized away because rdx.8==0
// 1404AC70E: conditional instruction was optimized away because rdx.8==0
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;
// 1404AC000: using guessed type char var_10[16];

