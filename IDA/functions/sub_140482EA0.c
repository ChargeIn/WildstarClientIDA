//----- (0000000140482EA0) ----------------------------------------------------
__int64 __fastcall sub_140482EA0(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // ebp
	unsigned int i; // esi
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // rbx
	int* v10; // rax
	_QWORD* v11; // rdx
	_QWORD* v12; // rax
	_QWORD* v13; // rbx
	int* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax
	_QWORD* j; // rcx
	__int64 k; // rcx
	int v19; // ecx
	__int64 v20; // rax
	_QWORD* m; // rax
	__int64 n; // rax
	__int64 v23; // rbx
	__int64 v24; // rcx
	__int64 v25; // rdi
	unsigned int v26; // eax
	unsigned int v27; // ebp
	unsigned int ii; // esi
	__int64 v29; // rax
	__int64 v30; // rdi
	unsigned int v31; // ebx
	__int64 v32; // rax
	__int64 v33; // rbx
	int* v34; // rax
	_QWORD* v35; // rdx
	_QWORD* v36; // rax
	_QWORD* v37; // rbx
	int* v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rax
	_QWORD* jj; // rcx
	__int64 kk; // rcx
	int v43; // ecx
	__int64 v44; // rax
	_QWORD* mm; // rax
	__int64 nn; // rax
	_QWORD* v47; // rdi
	unsigned __int64 i1; // rsi
	__int64 v49; // rbx
	__int64 v50; // rcx
	__int64(__fastcall * v51)(wchar_t**, __int64); // rax
	unsigned int v52; // eax
	unsigned int v53; // r15d
	unsigned int i2; // r14d
	__int64 v55; // rax
	__int64 v56; // rbp
	unsigned __int64 v57; // rsi
	_QWORD* v58; // rbx
	unsigned __int64 v59; // rsi
	int** v60; // rbx
	int* v61; // rax
	int* v62; // rcx
	__int64 v64; // [rsp+20h] [rbp-38h] BYREF
	__int64 v65; // [rsp+28h] [rbp-30h]
	__int64 v66; // [rsp+60h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 96))
	{
		sub_1401DE580(a1 + 80, *(_QWORD**)(*(_QWORD*)(a1 + 88) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 88) + 16i64) = *(_QWORD*)(a1 + 88);
		*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 88) + 24i64) = *(_QWORD*)(a1 + 88);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A69E20, qword_140C63858);
	}
	else
	{
		if (dword_140C63A24)
		{
			v3 = 0;
			goto LABEL_11;
		}
		if ((int)sub_1401F8D00() < 0)
		{
			v3 = 0;
			goto LABEL_11;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65098 + 40i64))(qword_140C65098);
	}
	v3 = v2;
LABEL_11:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A69E20, i, qword_140C63858);
		}
		else
		{
			if (dword_140C63A24 || (int)sub_1401F8D00() < 0)
				continue;
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65098 + 32i64))(qword_140C65098, i);
		}
		v6 = v5;
		if (v5)
		{
			v7 = *(_DWORD*)(v5 + 8);
			if (qword_140C63840)
			{
				v8 = qword_140C63840(off_140A69DE8, v7, qword_140C63858);
				goto LABEL_25;
			}
			if (dword_140C6550C)
			{
				v9 = 0i64;
			}
			else if ((int)sub_1401F88C0() >= 0)
			{
				v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A40 + 24i64))(qword_140C64A40, v7);
			LABEL_25:
				v9 = v8;
			}
			else
			{
				v9 = 0i64;
			}
			LODWORD(v64) = *(_DWORD*)(v6 + 12);
			v65 = v9;
			v10 = sub_140484600(a1 + 80, (int*)(v6 + 4));
			v11 = (_QWORD*)*((_QWORD*)v10 + 2);
			if (v11 == *((_QWORD**)v10 + 3))
			{
				sub_1400B4C50(v10, v11, &v64);
			}
			else
			{
				if (v11)
				{
					*v11 = v64;
					v11[1] = v9;
				}
				*((_QWORD*)v10 + 2) += 16i64;
			}
		}
	}
	v12 = *(_QWORD**)(a1 + 88);
	v13 = (_QWORD*)v12[2];
	if (v13 != v12)
	{
		do
		{
			v14 = (int*)v13[6];
			if (v14 == (int*)v13[7])
			{
				v15 = v13[3];
				v16 = (__int64)v13;
				if (v15)
				{
					v13 = (_QWORD*)v13[3];
					for (j = *(_QWORD**)(v15 + 16); j; j = (_QWORD*)j[2])
						v13 = j;
				}
				else
				{
					for (k = v13[1]; v13 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
						v13 = (_QWORD*)k;
					if (v13[3] != k)
						v13 = (_QWORD*)k;
				}
				v66 = v16;
				sub_1404849F0(a1 + 80, &v66);
			}
			else
			{
				v19 = 0;
				do
				{
					*v14 += v19;
					v19 = *v14;
					v14 += 4;
				} while (v14 != (int*)v13[7]);
				v20 = v13[3];
				if (v20)
				{
					v13 = (_QWORD*)v13[3];
					for (m = *(_QWORD**)(v20 + 16); m; m = (_QWORD*)m[2])
						v13 = m;
				}
				else
				{
					for (n = v13[1]; v13 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
						v13 = (_QWORD*)n;
					if (v13[3] != n)
						v13 = (_QWORD*)n;
				}
			}
		} while (v13 != *(_QWORD**)(a1 + 88));
	}
	if (*(_QWORD*)(a1 + 128))
	{
		v23 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
		if (v23)
		{
			do
			{
				sub_1401DE580(a1 + 112, *(_QWORD**)(v23 + 24));
				v24 = *(_QWORD*)(v23 + 48);
				v25 = *(_QWORD*)(v23 + 16);
				if (v24)
					sub_14018B900(v24, 0);
				sub_14018B900(v23, 0);
				v23 = v25;
			} while (v25);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 120) + 16i64) = *(_QWORD*)(a1 + 120);
		*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 120) + 24i64) = *(_QWORD*)(a1 + 120);
		*(_QWORD*)(a1 + 128) = 0i64;
	}
	if (qword_140C63838)
	{
		v26 = qword_140C63838(off_140A69E90, qword_140C63858);
	}
	else
	{
		if (dword_140C64974)
		{
			v27 = 0;
			goto LABEL_68;
		}
		if ((int)sub_1401F9580() < 0)
		{
			v27 = 0;
			goto LABEL_68;
		}
		v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64398 + 40i64))(qword_140C64398);
	}
	v27 = v26;
LABEL_68:
	for (ii = 0; ii < v27; ++ii)
	{
		if (qword_140C63848)
		{
			v29 = qword_140C63848(off_140A69E90, ii, qword_140C63858);
		}
		else
		{
			if (dword_140C64974 || (int)sub_1401F9580() < 0)
				continue;
			v29 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64398 + 32i64))(qword_140C64398, ii);
		}
		v30 = v29;
		if (v29)
		{
			v31 = *(_DWORD*)(v29 + 8);
			if (qword_140C63840)
			{
				v32 = qword_140C63840(off_140A69E58, v31, qword_140C63858);
				goto LABEL_82;
			}
			if (dword_140C64708)
			{
				v33 = 0i64;
			}
			else if ((int)sub_1401F9140() >= 0)
			{
				v32 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65028 + 24i64))(qword_140C65028, v31);
			LABEL_82:
				v33 = v32;
			}
			else
			{
				v33 = 0i64;
			}
			LODWORD(v64) = *(_DWORD*)(v30 + 12);
			v65 = v33;
			v34 = sub_140484600(a1 + 112, (int*)(v30 + 4));
			v35 = (_QWORD*)*((_QWORD*)v34 + 2);
			if (v35 == *((_QWORD**)v34 + 3))
			{
				sub_1400B4C50(v34, v35, &v64);
			}
			else
			{
				if (v35)
				{
					*v35 = v64;
					v35[1] = v33;
				}
				*((_QWORD*)v34 + 2) += 16i64;
			}
		}
	}
	v36 = *(_QWORD**)(a1 + 120);
	v37 = (_QWORD*)v36[2];
	if (v37 != v36)
	{
		do
		{
			v38 = (int*)v37[6];
			if (v38 == (int*)v37[7])
			{
				v39 = v37[3];
				v40 = (__int64)v37;
				if (v39)
				{
					v37 = (_QWORD*)v37[3];
					for (jj = *(_QWORD**)(v39 + 16); jj; jj = (_QWORD*)jj[2])
						v37 = jj;
				}
				else
				{
					for (kk = v37[1]; v37 == *(_QWORD**)(kk + 24); kk = *(_QWORD*)(kk + 8))
						v37 = (_QWORD*)kk;
					if (v37[3] != kk)
						v37 = (_QWORD*)kk;
				}
				v66 = v40;
				sub_140484B00(a1 + 112, &v66);
			}
			else
			{
				v43 = 0;
				do
				{
					*v38 += v43;
					v43 = *v38;
					v38 += 4;
				} while (v38 != (int*)v37[7]);
				v44 = v37[3];
				if (v44)
				{
					v37 = (_QWORD*)v37[3];
					for (mm = *(_QWORD**)(v44 + 16); mm; mm = (_QWORD*)mm[2])
						v37 = mm;
				}
				else
				{
					for (nn = v37[1]; v37 == *(_QWORD**)(nn + 24); nn = *(_QWORD*)(nn + 8))
						v37 = (_QWORD*)nn;
					if (v37[3] != nn)
						v37 = (_QWORD*)nn;
				}
			}
		} while (v37 != *(_QWORD**)(a1 + 120));
	}
	v47 = (_QWORD*)(a1 + 144);
	for (i1 = 0i64; i1 < *(_QWORD*)(a1 + 152); ++i1)
	{
		v49 = *(_QWORD*)(a1 + 160) + 8 * i1;
		while (*(_QWORD*)v49)
		{
			v50 = *(_QWORD*)v49;
			*(_QWORD*)v49 = *(_QWORD*)(*(_QWORD*)v49 + 8i64);
			sub_14018B900(v50, 0);
		}
	}
	v51 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	*v47 = 0i64;
	if (v51)
	{
		v52 = v51(off_140A69F00, qword_140C63858);
	}
	else
	{
		if (dword_140C63FAC)
		{
			v53 = 0;
			goto LABEL_123;
		}
		if ((int)sub_1401F9E00() < 0)
		{
			v53 = 0;
			goto LABEL_123;
		}
		v52 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64DD0 + 40i64))(qword_140C64DD0);
	}
	v53 = v52;
LABEL_123:
	for (i2 = 0; i2 < v53; ++i2)
	{
		if (qword_140C63848)
		{
			v55 = qword_140C63848(off_140A69F00, i2, qword_140C63858);
		}
		else
		{
			if (dword_140C63FAC)
			{
				v56 = 0i64;
				goto LABEL_132;
			}
			if ((int)sub_1401F9E00() < 0)
			{
				v56 = 0i64;
				goto LABEL_132;
			}
			v55 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64DD0 + 32i64))(qword_140C64DD0, i2);
		}
		v56 = v55;
	LABEL_132:
		LODWORD(v66) = *(_DWORD*)(v56 + 8) + (*(_DWORD*)(v56 + 4) << 10);
		v57 = (*(__int64(__fastcall**)(__int64*))(a1 + 168))(&v66);
		v58 = *(_QWORD**)(*(_QWORD*)(a1 + 160) + 8 * (v57 % *(_QWORD*)(a1 + 152)));
		if (!v58)
			goto LABEL_138;
		while (v57 != *v58 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 176))(&v66, v58 + 2))
		{
			v58 = (_QWORD*)v58[1];
			if (!v58)
				goto LABEL_138;
		}
		if (v58 == (_QWORD*)-24i64)
		{
		LABEL_138:
			if (*v47 == *(_QWORD*)(a1 + 152))
				sub_1400290D0(a1 + 144);
			v59 = (*(__int64(__fastcall**)(__int64*))(a1 + 168))(&v66);
			v60 = (int**)(*(_QWORD*)(a1 + 160) + 8 * (v59 % *(_QWORD*)(a1 + 152)));
			v61 = sub_14018B280(32i64, 0);
			if (v61)
			{
				v62 = *v60;
				*(_QWORD*)v61 = v59;
				*((_QWORD*)v61 + 1) = v62;
				LODWORD(v62) = v66;
				*((_QWORD*)v61 + 3) = v56;
				v61[4] = (int)v62;
			}
			else
			{
				v61 = 0i64;
			}
			*v60 = v61;
			++* v47;
		}
	}
	return sub_140485790(a1);
}
// 140A69DE8: using guessed type wchar_t *off_140A69DE8[2];
// 140A69E20: using guessed type wchar_t *off_140A69E20[2];
// 140A69E58: using guessed type wchar_t *off_140A69E58[2];
// 140A69E90: using guessed type wchar_t *off_140A69E90[2];
// 140A69F00: using guessed type wchar_t *off_140A69F00[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A24: using guessed type int dword_140C63A24;
// 140C63FAC: using guessed type int dword_140C63FAC;
// 140C64398: using guessed type __int64 qword_140C64398;
// 140C64708: using guessed type int dword_140C64708;
// 140C64974: using guessed type int dword_140C64974;
// 140C64A40: using guessed type __int64 qword_140C64A40;
// 140C64DD0: using guessed type __int64 qword_140C64DD0;
// 140C65028: using guessed type __int64 qword_140C65028;
// 140C65098: using guessed type __int64 qword_140C65098;
// 140C6550C: using guessed type int dword_140C6550C;

