//----- (0000000140436FB0) ----------------------------------------------------
_QWORD* __fastcall sub_140436FB0(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	__int64 v5; // r8
	int v6; // eax
	unsigned int v7; // eax
	unsigned int v8; // r12d
	unsigned int v9; // r15d
	__int64 v10; // rax
	__int64 v11; // rsi
	__int64(__fastcall * v12)(wchar_t**, _QWORD, __int64); // rax
	__int64 v13; // rax
	int v14; // ecx
	unsigned int v15; // edi
	__int64 v16; // rax
	__int64 v17; // r14
	__int64 v18; // rdx
	int* v19; // rcx
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	int* v23; // rbx
	int* v24; // rax
	int* v25; // rdx
	_QWORD* v26; // rax
	_QWORD* v27; // rbx
	__int64 v28; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	unsigned int v31; // eax
	unsigned int v32; // r15d
	unsigned int k; // r14d
	__int64 v34; // rax
	__int64 v35; // rsi
	__int64 v36; // rdx
	unsigned int v37; // edi
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64* v40; // rax
	int* v41; // rax
	int* v42; // rbx
	int v43; // ecx
	bool v44; // si
	__int64 v45; // rcx
	__int64 v46; // rcx
	__int64 v47; // r14
	__int64 v48; // rcx
	__int64 v49; // rdi
	unsigned __int64 v50; // rsi
	_QWORD* v51; // rbx
	__int64 v52; // r8
	__int64 v54; // rcx
	unsigned int* v55; // rbx
	bool v56; // cf
	int* v57; // [rsp+20h] [rbp-50h] BYREF
	__int64 v58; // [rsp+28h] [rbp-48h] BYREF
	__int64 v59; // [rsp+30h] [rbp-40h] BYREF
	int* v60; // [rsp+38h] [rbp-38h]
	char v61[16]; // [rsp+40h] [rbp-30h] BYREF
	__int64 v62[2]; // [rsp+50h] [rbp-20h] BYREF

	v2 = sub_14018B280(48i64, 0);
	a1[1] = v2;
	a1[2] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[1] + 8i64) = 0i64;
	*(_QWORD*)(a1[1] + 16i64) = a1[1];
	*(_QWORD*)(a1[1] + 24i64) = a1[1];
	v3 = sub_14018B280(40i64, 0);
	a1[6] = 0i64;
	a1[5] = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1[5] + 8i64) = 0i64;
	*(_QWORD*)(a1[5] + 16i64) = a1[5];
	*(_QWORD*)(a1[5] + 24i64) = a1[5];
	v4 = sub_14018B280(48i64, 0);
	a1[10] = 0i64;
	a1[9] = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(a1[9] + 8i64) = 0i64;
	*(_QWORD*)(a1[9] + 16i64) = a1[9];
	*(_QWORD*)(a1[9] + 24i64) = a1[9];
	v6 = dword_140DC28A8;
	a1[12] = 0i64;
	if ((v6 & 1) == 0)
	{
		dword_140DC28B4 = 0;
		dword_140DC28A8 = v6 | 1;
	}
	if (qword_140C63838)
	{
		v7 = qword_140C63838(off_140A6DEA8, qword_140C63858);
	}
	else
	{
		if (dword_140C64214)
		{
			v8 = 0;
			goto LABEL_11;
		}
		if ((int)sub_140247320() < 0)
		{
			v8 = 0;
			goto LABEL_11;
		}
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64130 + 40i64))(qword_140C64130);
	}
	v8 = v7;
LABEL_11:
	v9 = 0;
	if (v8)
	{
		while (1)
		{
			if (qword_140C63848)
			{
				v10 = qword_140C63848(off_140A6DEA8, v9, qword_140C63858);
			}
			else
			{
				if (dword_140C64214 || (int)sub_140247320() < 0)
					goto LABEL_57;
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64130 + 32i64))(qword_140C64130, v9);
			}
			v11 = v10;
			if (v10)
				break;
		LABEL_57:
			if (++v9 >= v8)
				goto LABEL_58;
		}
		v12 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		if (dword_140DC28B4)
		{
			v14 = dword_140DC28B0;
		LABEL_29:
			v15 = *(_DWORD*)(v11 + 4);
			if (v15 != v14)
			{
				if (v12)
				{
					v16 = v12(off_140A6DE00, v15, qword_140C63858);
				LABEL_35:
					v17 = v16;
					if (v16 && sub_140247140(*(_DWORD*)(v11 + 12)))
					{
						v18 = a1[1];
						v19 = (int*)v18;
						v20 = *(_QWORD*)(v18 + 8);
						while (v20)
						{
							if (*(_DWORD*)(v20 + 32) < v15)
							{
								v20 = *(_QWORD*)(v20 + 24);
							}
							else
							{
								v19 = (int*)v20;
								v20 = *(_QWORD*)(v20 + 16);
							}
						}
						if (v19 == (int*)v18 || v15 < v19[8])
						{
							v58 = a1[1];
							v21 = &v58;
						}
						else
						{
							v57 = v19;
							v21 = (__int64*)&v57;
						}
						v22 = *v21;
						if (v22 == v18)
						{
							v24 = sub_14018B280(40i64, 0);
							v23 = v24;
							if (v24)
							{
								*(_QWORD*)v24 = v17;
								*((_QWORD*)v24 + 2) = 0i64;
								*((_QWORD*)v24 + 3) = 0i64;
								*((_QWORD*)v24 + 4) = 0i64;
							}
							else
							{
								v23 = 0i64;
							}
							LODWORD(v59) = v15;
							v60 = v23;
							sub_140055F80((__int64)a1, (__int64)v61, &v59);
						}
						else
						{
							v23 = *(int**)(v22 + 40);
						}
						v25 = (int*)*((_QWORD*)v23 + 3);
						v62[0] = v11;
						if (v25 == *((int**)v23 + 4))
						{
							sub_1400B9430((_QWORD*)v23 + 1, v25, v62);
						}
						else
						{
							if (v25)
								*(_QWORD*)v25 = v11;
							*((_QWORD*)v23 + 3) += 8i64;
						}
					}
					goto LABEL_57;
				}
				if (!dword_140C63A30 && (int)sub_140246660() >= 0)
				{
					v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65608 + 24i64))(qword_140C65608, v15);
					goto LABEL_35;
				}
			}
			goto LABEL_57;
		}
		dword_140DC28B4 = 1;
		if (qword_140C63840)
		{
			v13 = qword_140C63840(off_140A6A408, 1336i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC)
			{
			LABEL_27:
				v14 = 0;
				dword_140DC28B0 = 0;
				goto LABEL_29;
			}
			if ((int)sub_1401FFFC0() < 0)
			{
			LABEL_26:
				v12 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				goto LABEL_27;
			}
			v13 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 1336i64);
		}
		if (v13)
		{
			v14 = *(_DWORD*)(v13 + 4);
			v12 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			dword_140DC28B0 = v14;
			goto LABEL_29;
		}
		goto LABEL_26;
	}
LABEL_58:
	v26 = (_QWORD*)a1[1];
	v27 = (_QWORD*)v26[2];
	if (v27 != v26)
	{
		do
		{
			sub_14043A320(*(_QWORD*)(v27[5] + 16i64), *(int**)(v27[5] + 24i64), v5);
			v28 = v27[3];
			if (v28)
			{
				v27 = (_QWORD*)v27[3];
				for (i = *(_QWORD**)(v28 + 16); i; i = (_QWORD*)i[2])
					v27 = i;
			}
			else
			{
				for (j = v27[1]; v27 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v27 = (_QWORD*)j;
				if (v27[3] != j)
					v27 = (_QWORD*)j;
			}
		} while (v27 != (_QWORD*)a1[1]);
	}
	if (qword_140C63838)
	{
		v31 = qword_140C63838(off_140A6DE00, qword_140C63858);
	}
	else
	{
		if (dword_140C63A30)
		{
			v32 = 0;
			goto LABEL_76;
		}
		if ((int)sub_140246660() < 0)
		{
			v32 = 0;
			goto LABEL_76;
		}
		v31 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65608 + 40i64))(qword_140C65608);
	}
	v32 = v31;
LABEL_76:
	for (k = 0; k < v32; ++k)
	{
		if (qword_140C63848)
		{
			v34 = qword_140C63848(off_140A6DE00, k, qword_140C63858);
		}
		else
		{
			if (dword_140C63A30 || (int)sub_140246660() < 0)
				continue;
			v34 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65608 + 32i64))(qword_140C65608, k);
		}
		v35 = v34;
		if (!v34 || (*(_BYTE*)(v34 + 4) & 4) == 0)
			continue;
		v36 = a1[1];
		v37 = *(_DWORD*)v34;
		v38 = *(_QWORD*)(v36 + 8);
		v39 = v36;
		while (v38)
		{
			if (*(_DWORD*)(v38 + 32) < v37)
			{
				v38 = *(_QWORD*)(v38 + 24);
			}
			else
			{
				v39 = v38;
				v38 = *(_QWORD*)(v38 + 16);
			}
		}
		if (v39 == v36 || v37 < *(_DWORD*)(v39 + 32))
		{
			v58 = a1[1];
			v40 = &v58;
		}
		else
		{
			v62[0] = v39;
			v40 = v62;
		}
		if (*v40 != v36)
			continue;
		v41 = sub_14018B280(40i64, 0);
		v42 = v41;
		if (v41)
		{
			*(_QWORD*)v41 = v35;
			*((_QWORD*)v41 + 2) = 0i64;
			*((_QWORD*)v41 + 3) = 0i64;
			*((_QWORD*)v41 + 4) = 0i64;
		}
		else
		{
			v42 = 0i64;
		}
		v43 = *(_DWORD*)(*(_QWORD*)v42 + 16i64);
		if ((unsigned int)(v43 - 1) > 0x47 || v43 == 18)
		{
			v54 = *((_QWORD*)v42 + 2);
			if (v54)
				sub_14018B900(v54, 0);
		}
		else
		{
			v44 = *sub_140439FC0((__int64)v42, &v57) == 0i64;
			if (v57)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v57 - 2) + 8i64))(v57 - 4);
			if (!v44)
			{
				LODWORD(v59) = v37;
				v60 = v42;
				sub_140055F80((__int64)a1, (__int64)v61, &v59);
				continue;
			}
			v45 = *((_QWORD*)v42 + 2);
			if (v45)
				sub_14018B900(v45, 0);
		}
		sub_14018B900((__int64)v42, 0);
	}
	sub_140438480(a1);
	v46 = a1[12];
	if (v46)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
		a1[12] = 0i64;
	}
	if ((int)sub_1407129A0(a1 + 12) >= 0)
	{
		v47 = a1[12];
		v48 = *(_QWORD*)(v47 + 48);
		if (v48)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v48 + 8i64))(v48);
			*(_QWORD*)(v47 + 48) = 0i64;
		}
		v49 = qword_140C63628;
		LODWORD(v57) = 168;
		v50 = (*(__int64(__fastcall**)(int**))(qword_140C63628 + 664))(&v57);
		v51 = *(_QWORD**)(*(_QWORD*)(v49 + 656) + 8 * (v50 % *(_QWORD*)(v49 + 648)));
		if (!v51)
			goto LABEL_115;
		while (v50 != *v51 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v49 + 672))(&v57, v51 + 2))
		{
			v51 = (_QWORD*)v51[1];
			if (!v51)
				goto LABEL_115;
		}
		v55 = (unsigned int*)v51 + 5;
		if (v55)
		{
			v52 = *v55;
			v56 = v55[2] < 2;
			HIDWORD(v62[0]) = v55[1];
			if (!v56)
				v52 = 0i64;
		}
		else
		{
		LABEL_115:
			v52 = 0i64;
		}
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65848 + 24i64))(
			qword_140C65848,
			v47 + 48,
			v52);
	}
	return a1;
}
// 14043731C: variable 'v5' is possibly undefined
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140A6DE00: using guessed type wchar_t *off_140A6DE00[2];
// 140A6DEA8: using guessed type wchar_t *off_140A6DEA8[2];
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C63A30: using guessed type int dword_140C63A30;
// 140C64130: using guessed type __int64 qword_140C64130;
// 140C64214: using guessed type int dword_140C64214;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65608: using guessed type __int64 qword_140C65608;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140DC28A8: using guessed type int dword_140DC28A8;
// 140DC28B0: using guessed type int dword_140DC28B0;
// 140DC28B4: using guessed type int dword_140DC28B4;

