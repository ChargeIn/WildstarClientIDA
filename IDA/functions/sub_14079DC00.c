//----- (000000014079DC00) ----------------------------------------------------
void __fastcall sub_14079DC00(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v7; // rbp
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	_QWORD* v10; // rdi
	__int64 v11; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v14; // rdi
	__int64 v15; // rbx
	_QWORD* v16; // rax
	_QWORD* v17; // rbx
	_QWORD* v18; // rdi
	__int64 v19; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v22; // rdi
	__int64 v23; // rbx
	_QWORD* v24; // rax
	_QWORD* v25; // rbx
	_QWORD* v26; // rdi
	__int64 v27; // rax
	_QWORD* jj; // rax
	__int64 kk; // rax
	__int64 v30; // rsi
	__int64 v31; // rbx
	__int64 v32; // rbx
	__int64 v33; // rcx
	__int64 v34; // rbp
	__int64 v35; // rsi
	__int64 v36; // rbx
	__int64 v37; // rdi
	__int64 v38; // rbx
	__int64 v39; // rdi
	__int64 v40; // rbx
	__int64 v41; // rdi
	__int64 v42; // rbx
	__int64 v43; // rdi
	__int64 v44; // rbx

	*a1 = off_140B78430;
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			sub_14018B900(v3[5], 0);
			v4 = v3[3];
			if (v4)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[2]);
	}
	sub_140008410((__int64)(a1 + 1));
	v7 = (__int64)(a1 + 5);
	sub_140008410((__int64)(a1 + 5));
	v8 = (_QWORD*)a1[10];
	v9 = (_QWORD*)v8[2];
	if (v9 != v8)
	{
		do
		{
			*(_QWORD*)(v9[5] + 8i64) = 0i64;
			v10 = (_QWORD*)v9[5];
			if (v10)
			{
				if (*v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v10 - 16i64) + 8i64))(*v10 - 16i64);
				sub_14018B900((__int64)v10, 0);
			}
			v11 = v9[3];
			if (v11)
			{
				v9 = (_QWORD*)v9[3];
				for (k = *(_QWORD**)(v11 + 16); k; k = (_QWORD*)k[2])
					v9 = k;
			}
			else
			{
				for (m = v9[1]; v9 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v9 = (_QWORD*)m;
				if (v9[3] != m)
					v9 = (_QWORD*)m;
			}
		} while (v9 != (_QWORD*)a1[10]);
	}
	if (a1[11])
	{
		v14 = *(_QWORD*)(a1[10] + 8i64);
		if (v14)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 9), *(_QWORD*)(v14 + 24));
				v15 = *(_QWORD*)(v14 + 16);
				sub_14018B900(v14, 0);
				v14 = v15;
			} while (v15);
		}
		*(_QWORD*)(a1[10] + 16i64) = a1[10];
		*(_QWORD*)(a1[10] + 8i64) = 0i64;
		*(_QWORD*)(a1[10] + 24i64) = a1[10];
		a1[11] = 0i64;
	}
	v16 = (_QWORD*)a1[14];
	v17 = (_QWORD*)v16[2];
	if (v17 != v16)
	{
		do
		{
			*(_QWORD*)(v17[5] + 8i64) = 0i64;
			v18 = (_QWORD*)v17[5];
			if (v18)
			{
				if (*v18)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v18 - 16i64) + 8i64))(*v18 - 16i64);
				sub_14018B900((__int64)v18, 0);
			}
			v19 = v17[3];
			if (v19)
			{
				v17 = (_QWORD*)v17[3];
				for (n = *(_QWORD**)(v19 + 16); n; n = (_QWORD*)n[2])
					v17 = n;
			}
			else
			{
				for (ii = v17[1]; v17 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v17 = (_QWORD*)ii;
				if (v17[3] != ii)
					v17 = (_QWORD*)ii;
			}
		} while (v17 != (_QWORD*)a1[14]);
	}
	if (a1[15])
	{
		v22 = *(_QWORD*)(a1[14] + 8i64);
		if (v22)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v22 + 24));
				v23 = *(_QWORD*)(v22 + 16);
				sub_14018B900(v22, 0);
				v22 = v23;
			} while (v23);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	v24 = (_QWORD*)a1[18];
	v25 = (_QWORD*)v24[2];
	if (v25 != v24)
	{
		do
		{
			*(_QWORD*)(v25[5] + 8i64) = 0i64;
			v26 = (_QWORD*)v25[5];
			if (v26)
			{
				if (*v26)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v26 - 16i64) + 8i64))(*v26 - 16i64);
				sub_14018B900((__int64)v26, 0);
			}
			v27 = v25[3];
			if (v27)
			{
				v25 = (_QWORD*)v25[3];
				for (jj = *(_QWORD**)(v27 + 16); jj; jj = (_QWORD*)jj[2])
					v25 = jj;
			}
			else
			{
				for (kk = v25[1]; v25 == *(_QWORD**)(kk + 24); kk = *(_QWORD*)(kk + 8))
					v25 = (_QWORD*)kk;
				if (v25[3] != kk)
					v25 = (_QWORD*)kk;
			}
		} while (v25 != (_QWORD*)a1[18]);
	}
	if (a1[19])
	{
		v30 = *(_QWORD*)(a1[18] + 8i64);
		if (v30)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 17), *(_QWORD*)(v30 + 24));
				v31 = *(_QWORD*)(v30 + 16);
				sub_14018B900(v30, 0);
				v30 = v31;
			} while (v31);
		}
		*(_QWORD*)(a1[18] + 16i64) = a1[18];
		*(_QWORD*)(a1[18] + 8i64) = 0i64;
		*(_QWORD*)(a1[18] + 24i64) = a1[18];
		a1[19] = 0i64;
	}
	if (a1[23])
	{
		v32 = *(_QWORD*)(a1[22] + 8i64);
		if (v32)
		{
			do
			{
				sub_14001A270((__int64)(a1 + 21), *(_QWORD**)(v32 + 24));
				v33 = *(_QWORD*)(v32 + 40);
				v34 = *(_QWORD*)(v32 + 16);
				if (v33)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v33 - 16) + 8i64))(v33 - 16);
				sub_14018B900(v32, 0);
				v32 = v34;
			} while (v34);
			v7 = (__int64)(a1 + 5);
		}
		*(_QWORD*)(a1[22] + 16i64) = a1[22];
		*(_QWORD*)(a1[22] + 8i64) = 0i64;
		*(_QWORD*)(a1[22] + 24i64) = a1[22];
		a1[23] = 0i64;
	}
	sub_14018B900(a1[22], 0);
	if (a1[19])
	{
		v35 = *(_QWORD*)(a1[18] + 8i64);
		if (v35)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 17), *(_QWORD*)(v35 + 24));
				v36 = *(_QWORD*)(v35 + 16);
				sub_14018B900(v35, 0);
				v35 = v36;
			} while (v36);
		}
		*(_QWORD*)(a1[18] + 16i64) = a1[18];
		*(_QWORD*)(a1[18] + 8i64) = 0i64;
		*(_QWORD*)(a1[18] + 24i64) = a1[18];
		a1[19] = 0i64;
	}
	sub_14018B900(a1[18], 0);
	if (a1[15])
	{
		v37 = *(_QWORD*)(a1[14] + 8i64);
		if (v37)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v37 + 24));
				v38 = *(_QWORD*)(v37 + 16);
				sub_14018B900(v37, 0);
				v37 = v38;
			} while (v38);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	sub_14018B900(a1[14], 0);
	if (a1[11])
	{
		v39 = *(_QWORD*)(a1[10] + 8i64);
		if (v39)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 9), *(_QWORD*)(v39 + 24));
				v40 = *(_QWORD*)(v39 + 16);
				sub_14018B900(v39, 0);
				v39 = v40;
			} while (v40);
		}
		*(_QWORD*)(a1[10] + 16i64) = a1[10];
		*(_QWORD*)(a1[10] + 8i64) = 0i64;
		*(_QWORD*)(a1[10] + 24i64) = a1[10];
		a1[11] = 0i64;
	}
	sub_14018B900(a1[10], 0);
	if (*(_QWORD*)(v7 + 16))
	{
		v41 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 8i64);
		if (v41)
		{
			do
			{
				sub_1400083B0(v7, *(_QWORD*)(v41 + 24));
				v42 = *(_QWORD*)(v41 + 16);
				sub_14018B900(v41, 0);
				v41 = v42;
			} while (v42);
		}
		*(_QWORD*)(*(_QWORD*)(v7 + 8) + 16i64) = *(_QWORD*)(v7 + 8);
		*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24i64) = *(_QWORD*)(v7 + 8);
		*(_QWORD*)(v7 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v7 + 8), 0);
	if (a1[3])
	{
		v43 = *(_QWORD*)(a1[2] + 8i64);
		if (v43)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 1), *(_QWORD*)(v43 + 24));
				v44 = *(_QWORD*)(v43 + 16);
				sub_14018B900(v43, 0);
				v43 = v44;
			} while (v44);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
// 140B78430: using guessed type __int64 (__fastcall *off_140B78430[7])();

