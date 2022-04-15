//----- (0000000140633380) ----------------------------------------------------
__int64 __fastcall sub_140633380(__int64 a1, int a2)
{
	int v2; // r14d
	int v4; // eax
	_QWORD* v5; // rbx
	int* v6; // rax
	int* v7; // rbx
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rax
	unsigned __int64 v11; // kr00_8
	int* v12; // rax
	unsigned __int64 v13; // r8
	unsigned int v14; // eax
	unsigned __int64 v15; // rcx
	__int64 v16; // rax
	int* v17; // rax
	unsigned __int64 v18; // r8
	__int64 v19; // rsi
	__int64 v20; // rax
	int* v21; // rbx
	unsigned int v22; // edi
	__int64 v23; // rax
	int* v24; // rax
	__int64 v25; // r14
	__int64 v26; // rdi
	unsigned __int64 v27; // rax
	__int64 v28; // r12
	unsigned __int64 v29; // r15
	int* v30; // rax
	__int64 v31; // rcx
	unsigned int v32; // ecx
	__int64(__fastcall * v33)(wchar_t**, __int64); // rax
	int v34; // eax
	unsigned int v35; // r12d
	__int64 v36; // rax
	__int64 v37; // r14
	__int64 v38; // rsi
	unsigned __int64 v39; // r15
	_QWORD* v40; // rbx
	__int64 v41; // rbx
	int* v42; // rax
	__int64 v43; // rbx
	__int64 v44; // rsi
	unsigned __int64 v45; // r14
	_QWORD* v46; // rdi
	__int64* v47; // r14
	_QWORD* v48; // rax
	_QWORD* v49; // rdi
	__int64 v50; // rax
	int v51; // esi
	int v52; // xmm9_4
	int v53; // xmm7_4
	int v54; // xmm6_4
	__m128 v55; // xmm10
	__int128 v56; // xmm8
	unsigned __int64 v57; // rax
	__int64 v58; // rax
	__int64 i; // rax
	__int64 j; // rax
	char v62[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v63; // [rsp+28h] [rbp-D8h]
	__int64 v64; // [rsp+30h] [rbp-D0h]
	__int128 v65[5]; // [rsp+40h] [rbp-C0h] BYREF
	int v66; // [rsp+90h] [rbp-70h]
	int v67; // [rsp+94h] [rbp-6Ch]
	int v68; // [rsp+98h] [rbp-68h]
	int v69; // [rsp+A8h] [rbp-58h]
	unsigned __int64 v70; // [rsp+140h] [rbp+40h] BYREF
	int v71; // [rsp+148h] [rbp+48h]

	v71 = a2;
	v2 = a2;
	sub_14023EB20();
	sub_14023EF60();
	sub_140633B00(a1);
	if (qword_140C63838)
	{
		v4 = qword_140C63838(off_140A6D7A8, qword_140C63858);
	}
	else if (dword_140C63C1C)
	{
		v4 = 0;
	}
	else if ((int)sub_14023EB20() >= 0)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64570 + 40i64))(qword_140C64570);
	}
	else
	{
		v4 = 0;
	}
	v5 = *(_QWORD**)(a1 + 31400);
	*(_DWORD*)(a1 + 31384) = v4;
	if (v5)
	{
		sub_140019490(v5);
		sub_14018B900(v5[2], 0);
		v5[2] = 0i64;
		sub_14018B900((__int64)v5, 0);
	}
	v6 = sub_14018B280(40i64, 0);
	v7 = v6;
	if (v6)
	{
		v8 = *(unsigned int*)(a1 + 31384);
		*(_QWORD*)v6 = 0i64;
		v9 = sub_1401A40C0(v8);
		*((_QWORD*)v7 + 1) = v9;
		v11 = v9;
		v10 = 8 * v9;
		if (!is_mul_ok(v11, 8ui64))
			v10 = -1i64;
		v12 = sub_14018B280(v10, 0);
		v13 = 8i64 * *((_QWORD*)v7 + 1);
		*((_QWORD*)v7 + 2) = v12;
		sub_1407E4830(v12, 0i64, v13);
		*((_QWORD*)v7 + 3) = sub_1400522D0;
		*((_QWORD*)v7 + 4) = sub_1400522E0;
	}
	else
	{
		v7 = 0i64;
	}
	v14 = *(_DWORD*)(a1 + 31384);
	*(_QWORD*)(a1 + 31400) = v7;
	if (v14)
	{
		v15 = v14;
		*(_DWORD*)(a1 + 31408) = 0;
		v16 = 8i64 * v14;
		if (!is_mul_ok(v15, 8ui64))
			v16 = -1i64;
		v17 = sub_14018B280(v16, 0);
		v18 = 8i64 * *(unsigned int*)(a1 + 31384);
		*(_QWORD*)(a1 + 31392) = v17;
		sub_1407E4830(v17, 0i64, v18);
		v64 = 0i64;
		v19 = 0i64;
		v63 = sub_14018B280(56i64, 0);
		*(_BYTE*)v63 = 0;
		*((_QWORD*)v63 + 1) = 0i64;
		*((_QWORD*)v63 + 2) = v63;
		for (*((_QWORD*)v63 + 3) = v63; (unsigned int)v19 < *(_DWORD*)(a1 + 31384); v19 = (unsigned int)(v19 + 1))
		{
			if (qword_140C63848)
			{
				v20 = qword_140C63848(off_140A6D7A8, (unsigned int)v19, qword_140C63858);
			}
			else
			{
				if (dword_140C63C1C)
				{
					v21 = 0i64;
					goto LABEL_27;
				}
				if ((int)sub_14023EB20() < 0)
				{
					v21 = 0i64;
					goto LABEL_27;
				}
				v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64570 + 32i64))(
					qword_140C64570,
					(unsigned int)v19);
			}
			v21 = (int*)v20;
		LABEL_27:
			v22 = v21[1];
			if (v22 == v2)
				goto LABEL_35;
			if (qword_140C63840)
			{
				v23 = qword_140C63840(off_140A6E180, v22, qword_140C63858);
			}
			else
			{
				if (dword_140C64698 || (int)sub_14024AA60() < 0)
					continue;
				v23 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(qword_140C63C08, v22);
			}
			if (v23 && *(_DWORD*)(v23 + 20) == 4)
			{
			LABEL_35:
				v24 = sub_14018B280(96i64, 0);
				if (v24)
					v25 = sub_1407A2BB0((__int64)v24, v21[1], v21[2]);
				else
					v25 = 0i64;
				*(_QWORD*)(*(_QWORD*)(a1 + 31392) + 8 * v19) = v25;
				v26 = *(_QWORD*)(a1 + 31400);
				if (*(_QWORD*)v26 == *(_QWORD*)(v26 + 8))
					sub_1400290D0(*(_QWORD*)(a1 + 31400));
				v27 = (*(__int64(__fastcall**)(int*))(v26 + 24))(v21);
				v28 = *(_QWORD*)(v26 + 16);
				v70 = v27;
				v29 = v27 % *(_QWORD*)(v26 + 8);
				v30 = sub_14018B280(32i64, 0);
				if (v30)
				{
					v31 = *(_QWORD*)(v28 + 8 * v29);
					*(_QWORD*)v30 = v70;
					*((_QWORD*)v30 + 1) = v31;
					v30[4] = *v21;
					*((_QWORD*)v30 + 3) = v25;
				}
				v2 = v71;
				*(_QWORD*)(v28 + 8 * v29) = v30;
				++* (_QWORD*)v26;
				v32 = *(_DWORD*)(a1 + 31408);
				if (v32 < *v21)
					v32 = *v21;
				*(_DWORD*)(a1 + 31408) = v32;
			}
		}
		v33 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		++* (_DWORD*)(a1 + 31408);
		if (v33)
		{
			v34 = v33(off_140A6D7E0, qword_140C63858);
		}
		else if (dword_140C647B4)
		{
			v34 = 0;
		}
		else if ((int)sub_14023EF60() >= 0)
		{
			v34 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B18 + 40i64))(qword_140C63B18);
		}
		else
		{
			v34 = 0;
		}
		v35 = 0;
		LODWORD(v70) = v34;
		if (v34)
		{
			do
			{
				if (qword_140C63848)
				{
					v36 = qword_140C63848(off_140A6D7E0, v35, qword_140C63858);
				}
				else
				{
					if (dword_140C647B4)
					{
						v37 = 0i64;
						goto LABEL_62;
					}
					if ((int)sub_14023EF60() < 0)
					{
						v37 = 0i64;
						goto LABEL_62;
					}
					v36 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B18 + 32i64))(qword_140C63B18, v35);
				}
				v37 = v36;
			LABEL_62:
				if (*(_DWORD*)(v37 + 4))
				{
					v38 = *(_QWORD*)(a1 + 31400);
					v39 = (*(__int64(__fastcall**)(__int64))(v38 + 24))(v37 + 4);
					v40 = *(_QWORD**)(*(_QWORD*)(v38 + 16) + 8 * (v39 % *(_QWORD*)(v38 + 8)));
					if (v40)
					{
						while (v39 != *v40 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v38 + 32))(v37 + 4, v40 + 2))
						{
							v40 = (_QWORD*)v40[1];
							if (!v40)
								goto LABEL_72;
						}
						if (v40 != (_QWORD*)-24i64)
						{
							v41 = *((_QWORD*)sub_14001DFC0((__int64)v62, (unsigned int*)(v37 + 4)) + 1);
							v42 = sub_14018B280(24i64, 0);
							if (v42 != (int*)-16i64)
								*((_QWORD*)v42 + 2) = v37;
							*(_QWORD*)v42 = v41;
							*((_QWORD*)v42 + 1) = *(_QWORD*)(v41 + 8);
							**(_QWORD**)(v41 + 8) = v42;
							*(_QWORD*)(v41 + 8) = v42;
						}
					}
				}
			LABEL_72:
				++v35;
			} while (v35 < (unsigned int)v70);
		}
		v43 = *((_QWORD*)v63 + 2);
		while ((int*)v43 != v63)
		{
			v44 = *(_QWORD*)(a1 + 31400);
			LODWORD(v70) = *(_DWORD*)(v43 + 32);
			v45 = (*(__int64(__fastcall**)(unsigned __int64*))(v44 + 24))(&v70);
			v46 = *(_QWORD**)(*(_QWORD*)(v44 + 16) + 8 * (v45 % *(_QWORD*)(v44 + 8)));
			if (v46)
			{
				while (v45 != *v46 || !(*(unsigned int(__fastcall**)(unsigned __int64*, _QWORD*))(v44 + 32))(&v70, v46 + 2))
				{
					v46 = (_QWORD*)v46[1];
					if (!v46)
						goto LABEL_82;
				}
				if (v46 != (_QWORD*)-24i64)
				{
					v47 = (__int64*)v46[3];
					sub_140634490(v43 + 40);
					v48 = *(_QWORD**)(v43 + 48);
					v49 = (_QWORD*)*v48;
					if ((_QWORD*)*v48 != v48)
					{
						do
						{
							v50 = v49[2];
							v51 = *(_DWORD*)(v50 + 40);
							v52 = *(_DWORD*)(v50 + 48);
							v53 = *(_DWORD*)(v50 + 52);
							v54 = *(_DWORD*)(v50 + 44);
							v55 = _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v50 + 12), (__m128) * (unsigned int*)(v50 + 20)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v50 + 16), (__m128)0i64));
							v56 = *(_OWORD*)(v50 + 24);
							v57 = (*(__int64(__fastcall**)(__int64*))(*v47 + 32))(v47);
							v66 = v54;
							v67 = v53;
							v69 = v52;
							v65[0] = (__int128)v55;
							v65[4] = v56;
							v68 = v51;
							sub_1407A7140(v47 + 3, v57, (__int64)v65);
							sub_1407A4640((__int64)v47);
							v49 = (_QWORD*)*v49;
						} while (v49 != *(_QWORD**)(v43 + 48));
					}
				}
			}
		LABEL_82:
			v58 = *(_QWORD*)(v43 + 24);
			if (v58)
			{
				v43 = *(_QWORD*)(v43 + 24);
				for (i = *(_QWORD*)(v58 + 16); i; i = *(_QWORD*)(i + 16))
					v43 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v43 + 8); v43 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v43 = j;
				if (*(_QWORD*)(v43 + 24) != j)
					v43 = j;
			}
		}
		sub_140634390(a1);
		if (qword_140C63850)
		{
			qword_140C63850(off_140A6D7A8, qword_140C63858);
		}
		else
		{
			if (dword_140C63C1C)
				goto LABEL_98;
			dword_140C63C1C = 1;
			if (!qword_140C64570)
				goto LABEL_98;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C64570 + 8i64))(qword_140C64570);
			qword_140C64570 = 0i64;
		}
		if (qword_140C63850)
		{
			qword_140C63850(off_140A6D7E0, qword_140C63858);
		LABEL_101:
			if (v64)
			{
				sub_14001EA50((__int64)v62, *((_QWORD**)v63 + 1));
				*((_QWORD*)v63 + 2) = v63;
				*((_QWORD*)v63 + 1) = 0i64;
				*((_QWORD*)v63 + 3) = v63;
				v64 = 0i64;
			}
			sub_14018B900((__int64)v63, 0);
			return 0i64;
		}
	LABEL_98:
		if (!dword_140C647B4)
		{
			dword_140C647B4 = 1;
			if (qword_140C63B18)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B18 + 8i64))(qword_140C63B18);
				qword_140C63B18 = 0i64;
			}
		}
		goto LABEL_101;
	}
	return 0i64;
}
// 140A6D7A8: using guessed type wchar_t *off_140A6D7A8[2];
// 140A6D7E0: using guessed type wchar_t *off_140A6D7E0[2];
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63850: using guessed type __int64 (__fastcall *qword_140C63850)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B18: using guessed type __int64 qword_140C63B18;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C63C1C: using guessed type int dword_140C63C1C;
// 140C64570: using guessed type __int64 qword_140C64570;
// 140C64698: using guessed type int dword_140C64698;
// 140C647B4: using guessed type int dword_140C647B4;
// 140633380: using guessed type char var_110[8];

