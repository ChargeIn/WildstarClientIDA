//----- (00000001405F91B0) ----------------------------------------------------
void __fastcall sub_1405F91B0(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // rsi
	_QWORD** v14; // rax
	_QWORD* v15; // rdi
	__int64 v16; // rcx
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v20; // rax
	_QWORD* v21; // rbx
	__int64 v22; // rsi
	_QWORD** v23; // rax
	_QWORD* v24; // rdi
	__int64 v25; // rcx
	__int64 v26; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v29; // rdi
	__int64 v30; // rbx
	_QWORD* v31; // rax
	_QWORD* v32; // rbx
	__int64 v33; // rsi
	_QWORD* v34; // rcx
	_QWORD* v35; // rcx
	_QWORD** v36; // rax
	_QWORD* v37; // rbx
	__int64 v38; // rcx
	_QWORD* v39; // rax
	_QWORD* v40; // rbx
	__int64 v41; // rcx
	_QWORD* v42; // rdx
	__int64 v43; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v46; // rsi
	__int64 v47; // rbx
	__int64 v48; // rdi
	__int64 v49; // rbx
	__int64 v50; // rdi
	__int64 v51; // rbx
	__int64 v52; // rdi
	__int64 v53; // rbx
	__int64 v54; // rdi
	__int64 v55; // rbx
	__int64 v56; // rdi
	__int64 v57; // rbx
	__int64 v58; // rdi
	__int64 v59; // rbx
	__int64 v60; // rdi
	__int64 v61; // rbx
	__int64 v62; // rdi
	__int64 v63; // rbx
	__int64 v64; // rdi
	__int64 v65; // rbx
	__int64 v66; // rdi
	__int64 v67; // rbx
	__int64 v68; // rcx
	__int64 v69; // rdi
	__int64 v70; // rbx
	__int64 v71; // rdi
	__int64 v72; // rbx
	_QWORD** v73; // rax
	_QWORD* v74; // rbx
	__int64 v75; // rcx

	sub_14043B6B0((__int64)a1, (__int64)(a1 + 12));
	sub_14043B6B0(v2, (__int64)(a1 + 16));
	sub_14043B6B0(v3, (__int64)(a1 + 20));
	sub_14043B6B0(v4, (__int64)(a1 + 24));
	sub_14043B6B0(v5, (__int64)(a1 + 28));
	sub_14043B6B0(v6, (__int64)(a1 + 32));
	sub_14043B6B0(v7, (__int64)(a1 + 36));
	sub_14043B6B0(v8, (__int64)(a1 + 40));
	sub_14043B6B0(v9, (__int64)(a1 + 44));
	sub_14043B6B0(v10, (__int64)(a1 + 48));
	v11 = (_QWORD*)a1[3];
	v12 = (_QWORD*)v11[2];
	if (v12 != v11)
	{
		do
		{
			v13 = v12[5];
			if (v13)
			{
				v14 = *(_QWORD***)(v13 + 8);
				v15 = *v14;
				if (*v14 != v14)
				{
					do
					{
						v16 = (__int64)v15;
						v15 = (_QWORD*)*v15;
						sub_14018B900(v16, 0);
					} while (v15 != *(_QWORD**)(v13 + 8));
				}
				**(_QWORD**)(v13 + 8) = *(_QWORD*)(v13 + 8);
				*(_QWORD*)(*(_QWORD*)(v13 + 8) + 8i64) = *(_QWORD*)(v13 + 8);
				sub_14018B900(*(_QWORD*)(v13 + 8), 0);
				sub_14018B900(v13, 0);
			}
			v17 = v12[3];
			if (v17)
			{
				v12 = (_QWORD*)v12[3];
				for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
					v12 = i;
			}
			else
			{
				for (j = v12[1]; v12 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v12 = (_QWORD*)j;
				if (v12[3] != j)
					v12 = (_QWORD*)j;
			}
		} while (v12 != (_QWORD*)a1[3]);
	}
	sub_140008410((__int64)(a1 + 2));
	v20 = (_QWORD*)a1[7];
	v21 = (_QWORD*)v20[2];
	if (v21 != v20)
	{
		do
		{
			v22 = v21[5];
			if (v22)
			{
				v23 = *(_QWORD***)(v22 + 8);
				v24 = *v23;
				if (*v23 != v23)
				{
					do
					{
						v25 = (__int64)v24;
						v24 = (_QWORD*)*v24;
						sub_14018B900(v25, 0);
					} while (v24 != *(_QWORD**)(v22 + 8));
				}
				**(_QWORD**)(v22 + 8) = *(_QWORD*)(v22 + 8);
				*(_QWORD*)(*(_QWORD*)(v22 + 8) + 8i64) = *(_QWORD*)(v22 + 8);
				sub_14018B900(*(_QWORD*)(v22 + 8), 0);
				sub_14018B900(v22, 0);
			}
			v26 = v21[3];
			if (v26)
			{
				v21 = (_QWORD*)v21[3];
				for (k = *(_QWORD**)(v26 + 16); k; k = (_QWORD*)k[2])
					v21 = k;
			}
			else
			{
				for (m = v21[1]; v21 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v21 = (_QWORD*)m;
				if (v21[3] != m)
					v21 = (_QWORD*)m;
			}
		} while (v21 != (_QWORD*)a1[7]);
	}
	if (a1[8])
	{
		v29 = *(_QWORD*)(a1[7] + 8);
		if (v29)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 6), *(_QWORD*)(v29 + 24));
				v30 = *(_QWORD*)(v29 + 16);
				sub_14018B900(v29, 0);
				v29 = v30;
			} while (v30);
		}
		*(_QWORD*)(a1[7] + 16) = a1[7];
		*(_QWORD*)(a1[7] + 8) = 0i64;
		*(_QWORD*)(a1[7] + 24) = a1[7];
		a1[8] = 0i64;
	}
	v31 = (_QWORD*)a1[1];
	v32 = (_QWORD*)*v31;
	if ((_QWORD*)*v31 != v31)
	{
		do
		{
			v33 = v32[2];
			if (v33)
			{
				sub_140195D70(v33 + 8);
				*(_DWORD*)(v33 + 8) = 0;
				v34 = *(_QWORD**)(v33 + 24);
				if (v34)
					*v34 = *(_QWORD*)(v33 + 32);
				v35 = *(_QWORD**)(v33 + 32);
				if (v35)
					*v35 = *(_QWORD*)(v33 + 24);
				*(_QWORD*)(v33 + 24) = 0i64;
				*(_QWORD*)(v33 + 32) = 0i64;
				sub_14018B900(v33, 0);
			}
			v32 = (_QWORD*)*v32;
		} while (v32 != (_QWORD*)a1[1]);
	}
	v36 = (_QWORD**)a1[1];
	v37 = *v36;
	if (*v36 != v36)
	{
		do
		{
			v38 = (__int64)v37;
			v37 = (_QWORD*)*v37;
			sub_14018B900(v38, 0);
		} while (v37 != (_QWORD*)a1[1]);
	}
	*(_QWORD*)a1[1] = a1[1];
	*(_QWORD*)(a1[1] + 8) = a1[1];
	v39 = (_QWORD*)a1[53];
	v40 = (_QWORD*)v39[2];
	if (v40 != v39)
	{
		do
		{
			v41 = v40[5];
			if (v41)
			{
				if (*(_QWORD*)v41)
					**(_QWORD**)v41 = *(_QWORD*)(v41 + 8);
				v42 = *(_QWORD**)(v41 + 8);
				if (v42)
					*v42 = *(_QWORD*)v41;
				*(_QWORD*)v41 = 0i64;
				*(_QWORD*)(v41 + 8) = 0i64;
				sub_14018B900(v41, 0);
			}
			v43 = v40[3];
			if (v43)
			{
				v40 = (_QWORD*)v40[3];
				for (n = *(_QWORD**)(v43 + 16); n; n = (_QWORD*)n[2])
					v40 = n;
			}
			else
			{
				for (ii = v40[1]; v40 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v40 = (_QWORD*)ii;
				if (v40[3] != ii)
					v40 = (_QWORD*)ii;
			}
		} while (v40 != (_QWORD*)a1[53]);
	}
	if (a1[54])
	{
		v46 = *(_QWORD*)(a1[53] + 8);
		if (v46)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 52), *(_QWORD*)(v46 + 24));
				v47 = *(_QWORD*)(v46 + 16);
				sub_14018B900(v46, 0);
				v46 = v47;
			} while (v47);
		}
		*(_QWORD*)(a1[53] + 16) = a1[53];
		*(_QWORD*)(a1[53] + 8) = 0i64;
		*(_QWORD*)(a1[53] + 24) = a1[53];
		a1[54] = 0i64;
	}
	sub_14018B900(a1[53], 0);
	if (a1[50])
	{
		v48 = *(_QWORD*)(a1[49] + 8);
		if (v48)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 48), *(_QWORD*)(v48 + 24));
				v49 = *(_QWORD*)(v48 + 16);
				sub_14018B900(v48, 0);
				v48 = v49;
			} while (v49);
		}
		*(_QWORD*)(a1[49] + 16) = a1[49];
		*(_QWORD*)(a1[49] + 8) = 0i64;
		*(_QWORD*)(a1[49] + 24) = a1[49];
		a1[50] = 0i64;
	}
	sub_14018B900(a1[49], 0);
	if (a1[46])
	{
		v50 = *(_QWORD*)(a1[45] + 8);
		if (v50)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 44), *(_QWORD*)(v50 + 24));
				v51 = *(_QWORD*)(v50 + 16);
				sub_14018B900(v50, 0);
				v50 = v51;
			} while (v51);
		}
		*(_QWORD*)(a1[45] + 16) = a1[45];
		*(_QWORD*)(a1[45] + 8) = 0i64;
		*(_QWORD*)(a1[45] + 24) = a1[45];
		a1[46] = 0i64;
	}
	sub_14018B900(a1[45], 0);
	if (a1[42])
	{
		v52 = *(_QWORD*)(a1[41] + 8);
		if (v52)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 40), *(_QWORD*)(v52 + 24));
				v53 = *(_QWORD*)(v52 + 16);
				sub_14018B900(v52, 0);
				v52 = v53;
			} while (v53);
		}
		*(_QWORD*)(a1[41] + 16) = a1[41];
		*(_QWORD*)(a1[41] + 8) = 0i64;
		*(_QWORD*)(a1[41] + 24) = a1[41];
		a1[42] = 0i64;
	}
	sub_14018B900(a1[41], 0);
	if (a1[38])
	{
		v54 = *(_QWORD*)(a1[37] + 8);
		if (v54)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 36), *(_QWORD*)(v54 + 24));
				v55 = *(_QWORD*)(v54 + 16);
				sub_14018B900(v54, 0);
				v54 = v55;
			} while (v55);
		}
		*(_QWORD*)(a1[37] + 16) = a1[37];
		*(_QWORD*)(a1[37] + 8) = 0i64;
		*(_QWORD*)(a1[37] + 24) = a1[37];
		a1[38] = 0i64;
	}
	sub_14018B900(a1[37], 0);
	if (a1[34])
	{
		v56 = *(_QWORD*)(a1[33] + 8);
		if (v56)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 32), *(_QWORD*)(v56 + 24));
				v57 = *(_QWORD*)(v56 + 16);
				sub_14018B900(v56, 0);
				v56 = v57;
			} while (v57);
		}
		*(_QWORD*)(a1[33] + 16) = a1[33];
		*(_QWORD*)(a1[33] + 8) = 0i64;
		*(_QWORD*)(a1[33] + 24) = a1[33];
		a1[34] = 0i64;
	}
	sub_14018B900(a1[33], 0);
	if (a1[30])
	{
		v58 = *(_QWORD*)(a1[29] + 8);
		if (v58)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 28), *(_QWORD*)(v58 + 24));
				v59 = *(_QWORD*)(v58 + 16);
				sub_14018B900(v58, 0);
				v58 = v59;
			} while (v59);
		}
		*(_QWORD*)(a1[29] + 16) = a1[29];
		*(_QWORD*)(a1[29] + 8) = 0i64;
		*(_QWORD*)(a1[29] + 24) = a1[29];
		a1[30] = 0i64;
	}
	sub_14018B900(a1[29], 0);
	if (a1[26])
	{
		v60 = *(_QWORD*)(a1[25] + 8);
		if (v60)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 24), *(_QWORD*)(v60 + 24));
				v61 = *(_QWORD*)(v60 + 16);
				sub_14018B900(v60, 0);
				v60 = v61;
			} while (v61);
		}
		*(_QWORD*)(a1[25] + 16) = a1[25];
		*(_QWORD*)(a1[25] + 8) = 0i64;
		*(_QWORD*)(a1[25] + 24) = a1[25];
		a1[26] = 0i64;
	}
	sub_14018B900(a1[25], 0);
	if (a1[22])
	{
		v62 = *(_QWORD*)(a1[21] + 8);
		if (v62)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 20), *(_QWORD*)(v62 + 24));
				v63 = *(_QWORD*)(v62 + 16);
				sub_14018B900(v62, 0);
				v62 = v63;
			} while (v63);
		}
		*(_QWORD*)(a1[21] + 16) = a1[21];
		*(_QWORD*)(a1[21] + 8) = 0i64;
		*(_QWORD*)(a1[21] + 24) = a1[21];
		a1[22] = 0i64;
	}
	sub_14018B900(a1[21], 0);
	if (a1[18])
	{
		v64 = *(_QWORD*)(a1[17] + 8);
		if (v64)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 16), *(_QWORD*)(v64 + 24));
				v65 = *(_QWORD*)(v64 + 16);
				sub_14018B900(v64, 0);
				v64 = v65;
			} while (v65);
		}
		*(_QWORD*)(a1[17] + 16) = a1[17];
		*(_QWORD*)(a1[17] + 8) = 0i64;
		*(_QWORD*)(a1[17] + 24) = a1[17];
		a1[18] = 0i64;
	}
	sub_14018B900(a1[17], 0);
	if (a1[14])
	{
		v66 = *(_QWORD*)(a1[13] + 8);
		if (v66)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 12), *(_QWORD*)(v66 + 24));
				v67 = *(_QWORD*)(v66 + 16);
				sub_14018B900(v66, 0);
				v66 = v67;
			} while (v67);
		}
		*(_QWORD*)(a1[13] + 16) = a1[13];
		*(_QWORD*)(a1[13] + 8) = 0i64;
		*(_QWORD*)(a1[13] + 24) = a1[13];
		a1[14] = 0i64;
	}
	sub_14018B900(a1[13], 0);
	v68 = a1[10];
	if (v68)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v68 - 16) + 8i64))(v68 - 16);
	if (a1[8])
	{
		v69 = *(_QWORD*)(a1[7] + 8);
		if (v69)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 6), *(_QWORD*)(v69 + 24));
				v70 = *(_QWORD*)(v69 + 16);
				sub_14018B900(v69, 0);
				v69 = v70;
			} while (v70);
		}
		*(_QWORD*)(a1[7] + 16) = a1[7];
		*(_QWORD*)(a1[7] + 8) = 0i64;
		*(_QWORD*)(a1[7] + 24) = a1[7];
		a1[8] = 0i64;
	}
	sub_14018B900(a1[7], 0);
	if (a1[4])
	{
		v71 = *(_QWORD*)(a1[3] + 8);
		if (v71)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 2), *(_QWORD*)(v71 + 24));
				v72 = *(_QWORD*)(v71 + 16);
				sub_14018B900(v71, 0);
				v71 = v72;
			} while (v72);
		}
		*(_QWORD*)(a1[3] + 16) = a1[3];
		*(_QWORD*)(a1[3] + 8) = 0i64;
		*(_QWORD*)(a1[3] + 24) = a1[3];
		a1[4] = 0i64;
	}
	sub_14018B900(a1[3], 0);
	v73 = (_QWORD**)a1[1];
	v74 = *v73;
	if (*v73 != v73)
	{
		do
		{
			v75 = (__int64)v74;
			v74 = (_QWORD*)*v74;
			sub_14018B900(v75, 0);
		} while (v74 != (_QWORD*)a1[1]);
	}
	*(_QWORD*)a1[1] = a1[1];
	*(_QWORD*)(a1[1] + 8) = a1[1];
	sub_14018B900(a1[1], 0);
}
// 1405F91DF: variable 'v2' is possibly undefined
// 1405F91EB: variable 'v3' is possibly undefined
// 1405F91F7: variable 'v4' is possibly undefined
// 1405F9203: variable 'v5' is possibly undefined
// 1405F920F: variable 'v6' is possibly undefined
// 1405F921B: variable 'v7' is possibly undefined
// 1405F9227: variable 'v8' is possibly undefined
// 1405F9236: variable 'v9' is possibly undefined
// 1405F9245: variable 'v10' is possibly undefined

