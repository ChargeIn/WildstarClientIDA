//----- (00000001401356F0) ----------------------------------------------------
void __fastcall sub_1401356F0(_QWORD* a1, __int64 a2)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v5; // rsi
	_QWORD** v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rsi
	__int64 i; // rbx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rbp
	__int64 v16; // rcx
	_QWORD** v17; // rax
	_QWORD* v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rsi
	__int64 j; // rbx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rsi
	__int64 k; // rbx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rsi
	__int64 m; // rbx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rsi
	__int64 n; // rbx
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rbx
	__int64 v37; // rcx
	__int64 v38; // rbp
	__int64 v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rcx
	__int64 v42; // rcx
	__int64 v43; // rcx
	__int64 v44; // rcx
	__int64 v45; // rcx

	v2 = (_QWORD*)a1[57];
	v3 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			v5 = v3[2];
			if (v5)
			{
				sub_140134750(v3[2], a2);
				sub_14018B900(v5, 0);
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != (_QWORD*)a1[57]);
	}
	v6 = (_QWORD**)a1[57];
	v7 = *v6;
	if (*v6 != v6)
	{
		do
		{
			v8 = (__int64)v7;
			v7 = (_QWORD*)*v7;
			sub_14018B900(v8, 0);
		} while (v7 != (_QWORD*)a1[57]);
	}
	*(_QWORD*)a1[57] = a1[57];
	*(_QWORD*)(a1[57] + 8i64) = a1[57];
	v9 = a1[65];
	for (i = a1[64]; i != v9; i += 32i64)
	{
		v11 = *(_QWORD*)(i + 8);
		if (v11)
			sub_14018B900(v11, 0);
	}
	v12 = a1[64];
	if (v12)
		sub_14018B900(v12, 0);
	if (a1[60])
	{
		v13 = *(_QWORD*)(a1[59] + 8i64);
		if (v13)
		{
			do
			{
				sub_1400B9080((__int64)(a1 + 58), *(_QWORD**)(v13 + 24));
				v14 = *(_QWORD*)(v13 + 72);
				v15 = *(_QWORD*)(v13 + 16);
				if (v14)
					sub_14018B900(v14, 0);
				v16 = *(_QWORD*)(v13 + 40);
				if (v16)
					sub_14018B900(v16, 0);
				sub_14018B900(v13, 0);
				v13 = v15;
			} while (v15);
		}
		*(_QWORD*)(a1[59] + 16i64) = a1[59];
		*(_QWORD*)(a1[59] + 8i64) = 0i64;
		*(_QWORD*)(a1[59] + 24i64) = a1[59];
		a1[60] = 0i64;
	}
	sub_14018B900(a1[59], 0);
	v17 = (_QWORD**)a1[57];
	v18 = *v17;
	if (*v17 != v17)
	{
		do
		{
			v19 = (__int64)v18;
			v18 = (_QWORD*)*v18;
			sub_14018B900(v19, 0);
		} while (v18 != (_QWORD*)a1[57]);
	}
	*(_QWORD*)a1[57] = a1[57];
	*(_QWORD*)(a1[57] + 8i64) = a1[57];
	sub_14018B900(a1[57], 0);
	v20 = a1[54];
	for (j = a1[53]; j != v20; j += 32i64)
	{
		v22 = *(_QWORD*)(j + 8);
		if (v22)
			sub_14018B900(v22, 0);
	}
	v23 = a1[53];
	if (v23)
		sub_14018B900(v23, 0);
	v24 = a1[50];
	for (k = a1[49]; k != v24; k += 32i64)
	{
		v26 = *(_QWORD*)(k + 8);
		if (v26)
			sub_14018B900(v26, 0);
	}
	v27 = a1[49];
	if (v27)
		sub_14018B900(v27, 0);
	v28 = a1[46];
	for (m = a1[45]; m != v28; m += 32i64)
	{
		v30 = *(_QWORD*)(m + 8);
		if (v30)
			sub_14018B900(v30, 0);
	}
	v31 = a1[45];
	if (v31)
		sub_14018B900(v31, 0);
	v32 = a1[42];
	for (n = a1[41]; n != v32; n += 32i64)
	{
		v34 = *(_QWORD*)(n + 8);
		if (v34)
			sub_14018B900(v34, 0);
	}
	v35 = a1[41];
	if (v35)
		sub_14018B900(v35, 0);
	if (a1[37])
	{
		v36 = *(_QWORD*)(a1[36] + 8i64);
		if (v36)
		{
			do
			{
				sub_140044CA0((__int64)(a1 + 35), *(_QWORD**)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 40);
				v38 = *(_QWORD*)(v36 + 16);
				if (v37)
					sub_14018B900(v37, 0);
				sub_14018B900(v36, 0);
				v36 = v38;
			} while (v38);
		}
		*(_QWORD*)(a1[36] + 16i64) = a1[36];
		*(_QWORD*)(a1[36] + 8i64) = 0i64;
		*(_QWORD*)(a1[36] + 24i64) = a1[36];
		a1[37] = 0i64;
	}
	sub_14018B900(a1[36], 0);
	v39 = a1[28];
	if (v39)
		sub_14018B900(v39, 0);
	v40 = a1[24];
	if (v40)
		sub_14018B900(v40, 0);
	v41 = a1[20];
	if (v41)
		sub_14018B900(v41, 0);
	v42 = a1[16];
	if (v42)
		sub_14018B900(v42, 0);
	v43 = a1[12];
	if (v43)
		sub_14018B900(v43, 0);
	v44 = a1[7];
	if (v44)
		sub_14018B900(v44, 0);
	v45 = a1[3];
	if (v45)
		sub_14018B900(v45, 0);
}
// 14013572C: variable 'a2' is possibly undefined

