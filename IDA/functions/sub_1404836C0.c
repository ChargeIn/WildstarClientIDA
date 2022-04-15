//----- (00000001404836C0) ----------------------------------------------------
__int64 __fastcall sub_1404836C0(__int64 a1, __int64 a2)
{
	__int64 v2; // r14
	unsigned __int64 v5; // rsi
	unsigned int v6; // eax
	__int64 v7; // rax
	unsigned __int64 v8; // kr00_8
	__int64 v9; // rax
	__int64 v10; // rbp
	unsigned __int64 v11; // r13
	unsigned __int64 v12; // r14
	__int64 v13; // rbx
	_DWORD* v14; // rdi
	__int64 v15; // rbp
	unsigned int v16; // r15d
	__int64 v17; // rax
	int* v18; // rax
	int* v19; // rbx
	unsigned __int64 v20; // rcx
	unsigned __int64 v21; // rax
	__int64 v22; // rax
	unsigned __int64 v23; // kr10_8
	int* v24; // rax
	unsigned __int64 v25; // r8
	unsigned __int64 v26; // rdi
	__int64 v27; // rax
	bool v28; // cf
	__int64 v29; // rax
	int* v30; // rax
	int* v31; // rbp
	int v32; // edi
	__int64 i; // rbx
	unsigned __int64 v34; // rcx
	unsigned __int64 v35; // rdx
	int* v36; // r13
	unsigned __int64 v37; // r14
	unsigned __int64 v38; // r9
	int v39; // r8d
	__int64* v40; // rcx
	unsigned __int64 v41; // rdx
	_DWORD* v42; // rax
	__int64 v43; // rbx
	unsigned __int64 v44; // rax
	__int64 v45; // r15
	unsigned __int64 v46; // rbp
	unsigned __int64 v47; // rdi
	int* v48; // rax
	__int64 v49; // rcx
	int* v50; // rbx
	__int64 v51; // rax
	unsigned __int64 v52; // rdi
	__int64* v53; // rbp
	int* v54; // rbx
	__int64 v55; // rax
	unsigned __int64 v56; // rdi
	__int64* v57; // rbp
	unsigned __int64 v58; // rdx
	__int64 v59; // rcx
	__int64 v60; // rbx
	__int64 v61; // rax
	unsigned __int64 v62[2]; // [rsp+30h] [rbp-88h] BYREF
	__int64 v63; // [rsp+40h] [rbp-78h] BYREF
	unsigned __int64 v64; // [rsp+48h] [rbp-70h]
	unsigned __int64 v65[4]; // [rsp+50h] [rbp-68h] BYREF
	__int64 v66; // [rsp+C8h] [rbp+10h] BYREF
	__int64 v67; // [rsp+D0h] [rbp+18h] BYREF
	unsigned __int64 v68; // [rsp+D8h] [rbp+20h]

	v66 = a2;
	v2 = a2;
	if (!*(_QWORD*)(a2 + 8))
		return 2147500037i64;
	v5 = 0i64;
	if (qword_140C63838)
	{
		v6 = qword_140C63838(off_140A69CD0, qword_140C63858);
	}
	else if (dword_140C65514)
	{
		v6 = 0;
	}
	else if ((int)sub_1401F7380() >= 0)
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A48 + 40i64))(qword_140C63A48);
	}
	else
	{
		v6 = 0;
	}
	*(_DWORD*)(a1 + 72) = v6;
	if (v6)
	{
		v8 = v6;
		v7 = 48i64 * v6;
		if (!is_mul_ok(v8, 0x30ui64))
			v7 = -1i64;
		*(_QWORD*)(a1 + 64) = sub_14018B280(v7, 0);
		v9 = sub_1401F7640(0);
		v62[1] = *(unsigned int*)(a1 + 72);
		v10 = v9;
		v67 = v9;
		v62[0] = 0i64;
		sub_1401D3110(v65, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_140483660, v62, v9, 2);
		v11 = v65[2];
		v12 = 0i64;
		if (*(_DWORD*)(a1 + 72))
		{
			v13 = 0i64;
			do
			{
				v14 = (_DWORD*)(v10 + 56i64 * *(_QWORD*)(v11 + 8 * v12));
				v15 = *(_QWORD*)(a1 + 64);
				*(_DWORD*)(v13 + v15) = v14[4];
				*(_DWORD*)(v13 + v15 + 4) = v14[5];
				*(_DWORD*)(v13 + v15 + 8) = v14[6];
				*(_DWORD*)(v13 + v15 + 12) = v14[7];
				*(_DWORD*)(v13 + v15 + 16) = v14[8];
				*(_DWORD*)(v13 + v15 + 20) = v14[9];
				*(_DWORD*)(v13 + v15 + 24) = v14[10];
				*(_DWORD*)(v13 + v15 + 28) = v14[11];
				v16 = v14[12];
				if (qword_140C63840)
				{
					v17 = qword_140C63840(off_140A6DFF8, v16, qword_140C63858);
				}
				else if (dword_140C64C04)
				{
					v17 = 0i64;
				}
				else if ((int)sub_140248CA0() >= 0)
				{
					v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v16);
				}
				else
				{
					v17 = 0i64;
				}
				*(_QWORD*)(v13 + v15 + 32) = v17;
				++v12;
				*(_DWORD*)(v13 + v15 + 40) = v14[13];
				v10 = v67;
				v13 += 48i64;
			} while (v12 < *(unsigned int*)(a1 + 72));
		}
		if (v65[0] < v65[1])
			sub_14018B900(v11 + 8 * v65[0], 0);
		v2 = v66;
	}
	if (qword_140C63850)
	{
		qword_140C63850(off_140A69CD0, qword_140C63858);
	}
	else if (!dword_140C65514)
	{
		dword_140C65514 = 1;
		if (qword_140C63A48)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A48 + 8i64))(qword_140C63A48);
			qword_140C63A48 = 0i64;
		}
	}
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(v2 + 8);
	v18 = sub_14018B280(40i64, 0);
	v19 = v18;
	if (v18)
	{
		v20 = *(unsigned int*)(a1 + 40);
		*(_QWORD*)v18 = 0i64;
		v21 = sub_1401A40C0(v20);
		*((_QWORD*)v19 + 1) = v21;
		v23 = v21;
		v22 = 8 * v21;
		if (!is_mul_ok(v23, 8ui64))
			v22 = -1i64;
		v24 = sub_14018B280(v22, 0);
		v25 = 8i64 * *((_QWORD*)v19 + 1);
		*((_QWORD*)v19 + 2) = v24;
		sub_1407E4830(v24, 0i64, v25);
		*((_QWORD*)v19 + 3) = sub_1400522D0;
		*((_QWORD*)v19 + 4) = sub_1400522E0;
	}
	else
	{
		v19 = 0i64;
	}
	v26 = *(unsigned int*)(a1 + 40);
	*(_QWORD*)(a1 + 24) = v19;
	v27 = 480 * v26;
	if (!is_mul_ok(v26, 0x1E0ui64))
		v27 = -1i64;
	v28 = __CFADD__(v27, 8i64);
	v29 = v27 + 8;
	if (v28)
		v29 = -1i64;
	v30 = sub_14018B280(v29, 0);
	if (v30)
	{
		v31 = v30 + 2;
		*v30 = v26;
		v32 = v26 - 1;
		for (i = (__int64)(v30 + 2); v32 >= 0; --v32)
		{
			sub_140482720(i);
			i += 480i64;
		}
	}
	else
	{
		v31 = 0i64;
	}
	v34 = 0i64;
	*(_QWORD*)(a1 + 32) = v31;
	v64 = 0i64;
	v63 = 0i64;
	v68 = 0i64;
	if (*(_QWORD*)(v2 + 8))
	{
		v35 = 0i64;
		v62[0] = 0i64;
		do
		{
			v36 = *(int**)(*(_QWORD*)v2 + 8 * v34);
			v37 = v35 + *(_QWORD*)(a1 + 32);
			if ((*(int(__fastcall**)(__int64, unsigned __int64, int*))(*(_QWORD*)a1 + 16i64))(a1, v37, v36) >= 0)
			{
				if (*(_DWORD*)(v37 + 72) || *(float*)(v37 + 76) > 0.0 || *(float*)(v37 + 80) > 0.0)
				{
					v38 = *(_QWORD*)(a1 + 16);
					v39 = *v36;
					v40 = (__int64*)(a1 + 8);
					LODWORD(v67) = *v36;
					v41 = 0i64;
					if (v38)
					{
						v42 = (_DWORD*)*v40;
						while (*v42 != v39)
						{
							++v41;
							++v42;
							if (v41 >= v38)
								goto LABEL_55;
						}
					}
					else
					{
					LABEL_55:
						sub_140003460(v40, (int*)&v67);
					}
				}
				v43 = *(_QWORD*)(a1 + 24);
				if (*(_QWORD*)v43 == *(_QWORD*)(v43 + 8))
					sub_1400290D0(*(_QWORD*)(a1 + 24));
				v44 = (*(__int64(__fastcall**)(unsigned __int64))(v43 + 24))(v37);
				v45 = *(_QWORD*)(v43 + 16);
				v46 = v44;
				v47 = v44 % *(_QWORD*)(v43 + 8);
				v48 = sub_14018B280(32i64, 0);
				if (v48)
				{
					v49 = *(_QWORD*)(v45 + 8 * v47);
					*(_QWORD*)v48 = v46;
					*((_QWORD*)v48 + 1) = v49;
					LODWORD(v49) = *(_DWORD*)v37;
					*((_QWORD*)v48 + 3) = v37;
					v48[4] = v49;
				}
				else
				{
					v48 = 0i64;
				}
				*(_QWORD*)(v45 + 8 * v47) = v48;
				++* (_QWORD*)v43;
				v50 = v36 + 31;
				if (v36[31])
				{
					v51 = sub_140484C10(&v63);
					v52 = 0i64;
					v53 = (__int64*)(v63 + 24 * v51);
					do
					{
						if (!*v50)
							break;
						sub_140003460(v53, v50);
						++v52;
						++v50;
					} while (v52 < 0x19);
					v53[2] = v37 + 88;
				}
				v54 = v36 + 56;
				if (v36[56])
				{
					v55 = sub_140484C10(&v63);
					v56 = 0i64;
					v57 = (__int64*)(v63 + 24 * v55);
					do
					{
						if (!*v54)
							break;
						sub_140003460(v57, v54);
						++v56;
						++v54;
					} while (v56 < 0x19);
					v57[2] = v37 + 96;
				}
			}
			v2 = v66;
			v34 = v68 + 1;
			v35 = v62[0] + 480;
			v68 = v34;
			v62[0] += 480i64;
		} while (v34 < *(_QWORD*)(v66 + 8));
	}
	LODWORD(v66) = 0;
	sub_140484D00(&v63, (__int64*)(a1 + 48), (int*)&v66);
	qword_140C66650 = *(_QWORD*)(a1 + 48);
	if (qword_140C63850)
	{
		qword_140C63850(off_140A69C60, qword_140C63858);
	}
	else
	{
		if (dword_140C63EC0 || (dword_140C63EC0 = 1, !qword_140C63D10))
		{
		LABEL_79:
			if (!dword_140C63CD8)
			{
				dword_140C63CD8 = 1;
				if (qword_140C63AF0)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C63AF0 + 8i64))(qword_140C63AF0);
					qword_140C63AF0 = 0i64;
				}
			}
			goto LABEL_82;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D10 + 8i64))(qword_140C63D10);
		qword_140C63D10 = 0i64;
	}
	if (!qword_140C63850)
		goto LABEL_79;
	qword_140C63850(off_140A69DB0, qword_140C63858);
LABEL_82:
	v58 = v64;
	v59 = v63;
	if (v64)
	{
		v60 = 0i64;
		do
		{
			v61 = *(_QWORD*)(v60 + v59);
			if (v61)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v61 - 16) + 8i64))(v61 - 16);
				v58 = v64;
				v59 = v63;
			}
			++v5;
			v60 += 24i64;
		} while (v5 < v58);
	}
	if (v59)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v59 - 16) + 8i64))(v59 - 16);
	return 0i64;
}
// 140A69C60: using guessed type wchar_t *off_140A69C60[2];
// 140A69CD0: using guessed type wchar_t *off_140A69CD0[2];
// 140A69DB0: using guessed type wchar_t *off_140A69DB0[2];
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63850: using guessed type __int64 (__fastcall *qword_140C63850)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A48: using guessed type __int64 qword_140C63A48;
// 140C63AF0: using guessed type __int64 qword_140C63AF0;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C63CD8: using guessed type int dword_140C63CD8;
// 140C63D10: using guessed type __int64 qword_140C63D10;
// 140C63EC0: using guessed type int dword_140C63EC0;
// 140C64C04: using guessed type int dword_140C64C04;
// 140C65514: using guessed type int dword_140C65514;
// 140C66650: using guessed type __int64 qword_140C66650;

