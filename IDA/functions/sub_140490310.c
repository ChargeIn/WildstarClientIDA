//----- (0000000140490310) ----------------------------------------------------
void __fastcall sub_140490310(_QWORD* a1)
{
	__int64 v1; // r13
	unsigned __int64 v3; // r14
	__int64 v4; // rbp
	_QWORD* v5; // rdi
	_QWORD* v6; // rbx
	__int64 v7; // rsi
	__int64 v8; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	unsigned __int64 k; // rdi
	__int64 v14; // rsi
	__int64 v15; // rcx
	__int64 v16; // rax
	_QWORD* m; // rax
	__int64 n; // rax
	__int64 v19; // rbx
	__int64 v20; // rcx
	__int64 v21; // rdi
	__int64 v22; // rsi
	__int64 v23; // rbx
	__int64 v24; // rbx
	__int64 v25; // rcx
	__int64 v26; // rsi
	__int64 v27; // rbx
	__int64 v28; // rcx
	__int64 v29; // rsi
	__int64 v30; // rsi
	__int64 v31; // rbx
	__int64 v32; // rsi
	__int64 v33; // rbx
	__int64 v34; // rsi
	__int64 v35; // rbx
	__int64 v36; // rsi
	__int64 v37; // rbx
	__int64 v38; // rsi
	__int64 v39; // rbx
	__int64 v40; // rsi
	__int64 v41; // rbx
	__int64 v42; // rbx
	__int64 v43; // rcx
	__int64 v44; // rdi
	__int64 v45; // rdi
	__int64 v46; // rbx
	__int64 v47; // rbp
	__int64 ii; // rdi
	__int64 v49; // rsi
	__int64 v50; // rbx
	__int64 v51; // rcx

	v1 = (__int64)(a1 + 1);
	*a1 = off_140B67370;
	v3 = 0i64;
	if ((__int64)(a1[3] - a1[2]) >> 5)
	{
		v4 = 0i64;
		do
		{
			v5 = *(_QWORD**)(a1[2] + v4 + 8);
			v6 = (_QWORD*)v5[2];
			while (v6 != v5)
			{
				v7 = v6[5];
				if (v7)
				{
					sub_1404963F0(v6[5]);
					sub_14018B900(v7, 0);
				}
				v8 = v6[3];
				if (v8)
				{
					v6 = (_QWORD*)v6[3];
					for (i = *(_QWORD**)(v8 + 16); i; i = (_QWORD*)i[2])
						v6 = i;
				}
				else
				{
					for (j = v6[1]; v6 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v6 = (_QWORD*)j;
					if (v6[3] != j)
						v6 = (_QWORD*)j;
				}
			}
			++v3;
			v4 += 32i64;
		} while (v3 < (__int64)(*(_QWORD*)(v1 + 16) - *(_QWORD*)(v1 + 8)) >> 5);
	}
	sub_140492E40(v1, *(_QWORD*)(v1 + 8), *(_QWORD*)(v1 + 16));
	sub_140008410((__int64)(a1 + 5));
	v11 = (_QWORD*)a1[10];
	v12 = (_QWORD*)v11[2];
	if (v12 != v11)
	{
		do
		{
			for (k = 0i64; k < v12[6]; ++k)
			{
				v14 = *(_QWORD*)(v12[5] + 8 * k);
				if (v14)
				{
					v15 = *(_QWORD*)(v14 + 16);
					if (v15)
						sub_14018B900(v15, 0);
					sub_14018B900(v14, 0);
				}
			}
			v16 = v12[3];
			if (v16)
			{
				v12 = (_QWORD*)v12[3];
				for (m = *(_QWORD**)(v16 + 16); m; m = (_QWORD*)m[2])
					v12 = m;
			}
			else
			{
				for (n = v12[1]; v12 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
					v12 = (_QWORD*)n;
				if (v12[3] != n)
					v12 = (_QWORD*)n;
			}
		} while (v12 != (_QWORD*)a1[10]);
	}
	if (a1[11])
	{
		v19 = *(_QWORD*)(a1[10] + 8i64);
		if (v19)
		{
			do
			{
				sub_14001A270((__int64)(a1 + 9), *(_QWORD**)(v19 + 24));
				v20 = *(_QWORD*)(v19 + 40);
				v21 = *(_QWORD*)(v19 + 16);
				if (v20)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
				sub_14018B900(v19, 0);
				v19 = v21;
			} while (v21);
		}
		*(_QWORD*)(a1[10] + 16i64) = a1[10];
		*(_QWORD*)(a1[10] + 8i64) = 0i64;
		*(_QWORD*)(a1[10] + 24i64) = a1[10];
		a1[11] = 0i64;
	}
	if (a1[47])
	{
		v22 = *(_QWORD*)(a1[46] + 8i64);
		if (v22)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 45), *(_QWORD*)(v22 + 24));
				v23 = *(_QWORD*)(v22 + 16);
				sub_14018B900(v22, 0);
				v22 = v23;
			} while (v23);
		}
		*(_QWORD*)(a1[46] + 16i64) = a1[46];
		*(_QWORD*)(a1[46] + 8i64) = 0i64;
		*(_QWORD*)(a1[46] + 24i64) = a1[46];
		a1[47] = 0i64;
	}
	sub_14018B900(a1[46], 0);
	if (a1[43])
	{
		v24 = *(_QWORD*)(a1[42] + 8i64);
		if (v24)
		{
			do
			{
				sub_1401DE580((__int64)(a1 + 41), *(_QWORD**)(v24 + 24));
				v25 = *(_QWORD*)(v24 + 48);
				v26 = *(_QWORD*)(v24 + 16);
				if (v25)
					sub_14018B900(v25, 0);
				sub_14018B900(v24, 0);
				v24 = v26;
			} while (v26);
		}
		*(_QWORD*)(a1[42] + 16i64) = a1[42];
		*(_QWORD*)(a1[42] + 8i64) = 0i64;
		*(_QWORD*)(a1[42] + 24i64) = a1[42];
		a1[43] = 0i64;
	}
	sub_14018B900(a1[42], 0);
	if (a1[39])
	{
		v27 = *(_QWORD*)(a1[38] + 8i64);
		if (v27)
		{
			do
			{
				sub_14001A270((__int64)(a1 + 37), *(_QWORD**)(v27 + 24));
				v28 = *(_QWORD*)(v27 + 40);
				v29 = *(_QWORD*)(v27 + 16);
				if (v28)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
				sub_14018B900(v27, 0);
				v27 = v29;
			} while (v29);
		}
		*(_QWORD*)(a1[38] + 16i64) = a1[38];
		*(_QWORD*)(a1[38] + 8i64) = 0i64;
		*(_QWORD*)(a1[38] + 24i64) = a1[38];
		a1[39] = 0i64;
	}
	sub_14018B900(a1[38], 0);
	if (a1[35])
	{
		v30 = *(_QWORD*)(a1[34] + 8i64);
		if (v30)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 33), *(_QWORD*)(v30 + 24));
				v31 = *(_QWORD*)(v30 + 16);
				sub_14018B900(v30, 0);
				v30 = v31;
			} while (v31);
		}
		*(_QWORD*)(a1[34] + 16i64) = a1[34];
		*(_QWORD*)(a1[34] + 8i64) = 0i64;
		*(_QWORD*)(a1[34] + 24i64) = a1[34];
		a1[35] = 0i64;
	}
	sub_14018B900(a1[34], 0);
	if (a1[31])
	{
		v32 = *(_QWORD*)(a1[30] + 8i64);
		if (v32)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 29), *(_QWORD*)(v32 + 24));
				v33 = *(_QWORD*)(v32 + 16);
				sub_14018B900(v32, 0);
				v32 = v33;
			} while (v33);
		}
		*(_QWORD*)(a1[30] + 16i64) = a1[30];
		*(_QWORD*)(a1[30] + 8i64) = 0i64;
		*(_QWORD*)(a1[30] + 24i64) = a1[30];
		a1[31] = 0i64;
	}
	sub_14018B900(a1[30], 0);
	if (a1[27])
	{
		v34 = *(_QWORD*)(a1[26] + 8i64);
		if (v34)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 25), *(_QWORD*)(v34 + 24));
				v35 = *(_QWORD*)(v34 + 16);
				sub_14018B900(v34, 0);
				v34 = v35;
			} while (v35);
		}
		*(_QWORD*)(a1[26] + 16i64) = a1[26];
		*(_QWORD*)(a1[26] + 8i64) = 0i64;
		*(_QWORD*)(a1[26] + 24i64) = a1[26];
		a1[27] = 0i64;
	}
	sub_14018B900(a1[26], 0);
	if (a1[23])
	{
		v36 = *(_QWORD*)(a1[22] + 8i64);
		if (v36)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 21), *(_QWORD*)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 16);
				sub_14018B900(v36, 0);
				v36 = v37;
			} while (v37);
		}
		*(_QWORD*)(a1[22] + 16i64) = a1[22];
		*(_QWORD*)(a1[22] + 8i64) = 0i64;
		*(_QWORD*)(a1[22] + 24i64) = a1[22];
		a1[23] = 0i64;
	}
	sub_14018B900(a1[22], 0);
	if (a1[19])
	{
		v38 = *(_QWORD*)(a1[18] + 8i64);
		if (v38)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 17), *(_QWORD*)(v38 + 24));
				v39 = *(_QWORD*)(v38 + 16);
				sub_14018B900(v38, 0);
				v38 = v39;
			} while (v39);
		}
		*(_QWORD*)(a1[18] + 16i64) = a1[18];
		*(_QWORD*)(a1[18] + 8i64) = 0i64;
		*(_QWORD*)(a1[18] + 24i64) = a1[18];
		a1[19] = 0i64;
	}
	sub_14018B900(a1[18], 0);
	if (a1[15])
	{
		v40 = *(_QWORD*)(a1[14] + 8i64);
		if (v40)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v40 + 24));
				v41 = *(_QWORD*)(v40 + 16);
				sub_14018B900(v40, 0);
				v40 = v41;
			} while (v41);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	sub_14018B900(a1[14], 0);
	if (a1[11])
	{
		v42 = *(_QWORD*)(a1[10] + 8i64);
		if (v42)
		{
			do
			{
				sub_14001A270((__int64)(a1 + 9), *(_QWORD**)(v42 + 24));
				v43 = *(_QWORD*)(v42 + 40);
				v44 = *(_QWORD*)(v42 + 16);
				if (v43)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v43 - 16) + 8i64))(v43 - 16);
				sub_14018B900(v42, 0);
				v42 = v44;
			} while (v44);
		}
		*(_QWORD*)(a1[10] + 16i64) = a1[10];
		*(_QWORD*)(a1[10] + 8i64) = 0i64;
		*(_QWORD*)(a1[10] + 24i64) = a1[10];
		a1[11] = 0i64;
	}
	sub_14018B900(a1[10], 0);
	if (a1[7])
	{
		v45 = *(_QWORD*)(a1[6] + 8i64);
		if (v45)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v45 + 24));
				v46 = *(_QWORD*)(v45 + 16);
				sub_14018B900(v45, 0);
				v45 = v46;
			} while (v46);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	v47 = *(_QWORD*)(v1 + 16);
	for (ii = *(_QWORD*)(v1 + 8); ii != v47; ii += 32i64)
	{
		if (*(_QWORD*)(ii + 16))
		{
			v49 = *(_QWORD*)(*(_QWORD*)(ii + 8) + 8i64);
			if (v49)
			{
				do
				{
					sub_1400083B0(ii, *(_QWORD*)(v49 + 24));
					v50 = *(_QWORD*)(v49 + 16);
					sub_14018B900(v49, 0);
					v49 = v50;
				} while (v50);
			}
			*(_QWORD*)(*(_QWORD*)(ii + 8) + 16i64) = *(_QWORD*)(ii + 8);
			*(_QWORD*)(*(_QWORD*)(ii + 8) + 8i64) = 0i64;
			*(_QWORD*)(*(_QWORD*)(ii + 8) + 24i64) = *(_QWORD*)(ii + 8);
			*(_QWORD*)(ii + 16) = 0i64;
		}
		sub_14018B900(*(_QWORD*)(ii + 8), 0);
	}
	v51 = *(_QWORD*)(v1 + 8);
	if (v51)
		sub_14018B900(v51, 0);
}
// 140B67370: using guessed type __int64 (__fastcall *off_140B67370[2])();

