//----- (00000001403DE240) ----------------------------------------------------
__int64 __fastcall sub_1403DE240(__int64 a1, int* a2, __int64 a3, double a4)
{
	__int64 v4; // rax
	int v7; // r14d
	int* v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // r8
	int v11; // eax
	int v12; // r14d
	int* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // r8
	__int64 v17; // rax
	int v18; // edx
	__int64 v19; // r14
	__int64 v20; // rdx
	int v21; // eax
	int* v22; // rax
	__int64 v23; // rcx
	int v24; // edx
	__int64 v25; // rdx
	int v26; // eax
	int v27; // eax
	int v28; // edx
	int v29; // eax
	int v30; // edx
	__int64 v31; // rcx
	__int16* v32; // rbx
	__int64* v33; // rax
	__int64 v34; // r14
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // r15
	int* v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rcx
	__int16* v41; // rbx
	__int16* v42; // rsi
	__int64* v43; // rax
	__int64 v44; // rcx
	int* v45; // rax
	__int64 v46; // rcx
	__int64 v47; // rcx
	__int16* v48; // rbx
	__int16* v49; // rsi
	__int64* v50; // rax
	__int64 v52; // [rsp+38h] [rbp-19h] BYREF
	int* v53; // [rsp+40h] [rbp-11h]
	int* v54; // [rsp+48h] [rbp-9h]
	__int64 v55; // [rsp+50h] [rbp-1h]
	__int64 v56; // [rsp+58h] [rbp+7h] BYREF
	__int64 v57; // [rsp+60h] [rbp+Fh]
	_QWORD v58[3]; // [rsp+78h] [rbp+27h] BYREF

	v4 = *(_QWORD*)(a1 + 120);
	if (v4)
		v7 = *(_DWORD*)(v4 + 8);
	else
		v7 = 0;
	v8 = sub_14018B280(2i64, 0);
	v53 = v8;
	v55 = (__int64)v8 + 2;
	sub_1407DB590(v8, dword_1409E7DEC, 0i64);
	v54 = v8;
	if (v8)
		*(_WORD*)v8 = 0;
	v11 = a2[2];
	if (v11 == 5)
	{
		v12 = *(_DWORD*)(a1 + 28384);
		*(_QWORD*)(a1 + 28384) = 0i64;
		v13 = (int*)sub_14034BDD0(v9, 589725);
		v14 = 0i64;
		if (*(_WORD*)v13)
		{
			do
				++v14;
			while (*((_WORD*)v13 + v14));
		}
		if ((2 * v14) >> 1)
		{
			sub_14001C310(&v52, v13, (int*)((char*)v13 + 2 * v14));
			v8 = v53;
		}
		else
		{
			sub_1407DB590(v8, v13, 0i64);
		}
		v17 = *(_QWORD*)(a1 + 120);
		if (v17 && *(_DWORD*)(v17 + 264) == v12)
		{
			sub_14055BAC0((_QWORD*)a1, v15, v16, a4);
			sub_14042CEA0(*(_QWORD*)(a1 + 29504));
			goto LABEL_110;
		}
		goto LABEL_68;
	}
	if (v7 == *a2 && v7)
	{
		v18 = *(_DWORD*)(a1 + 28384);
		if (v18)
			v19 = sub_1403D90D0(a1, v18);
		else
			v19 = 0i64;
		v20 = *(_QWORD*)(a1 + 120);
		*(_QWORD*)(a1 + 28384) = 0i64;
		if (v20)
		{
			v9 = (unsigned int)a2[1];
			if (*(_DWORD*)(v20 + 264) == (_DWORD)v9)
				sub_14055BAC0((_QWORD*)a1, v20, v10, a4);
		}
		v21 = a2[2];
		if (v21)
		{
			if (v21 == 4)
			{
				v22 = (int*)sub_14034BDD0(v9, 431554);
				v23 = 0i64;
				if (*(_WORD*)v22)
				{
					do
						++v23;
					while (*((_WORD*)v22 + v23));
				}
			}
			else
			{
				v22 = (int*)sub_14034BDD0(v9, 431616);
				v23 = 0i64;
				if (*(_WORD*)v22)
				{
					do
						++v23;
					while (*((_WORD*)v22 + v23));
				}
			}
		}
		else
		{
			v22 = (int*)sub_14034BDD0(v9, 431349);
			v23 = 0i64;
			if (*(_WORD*)v22)
			{
				do
					++v23;
				while (*((_WORD*)v22 + v23));
			}
		}
	LABEL_56:
		if ((2 * v23) >> 1)
		{
			sub_14001C310(&v52, v22, (int*)((char*)v22 + 2 * v23));
			v8 = v53;
		}
		else
		{
			sub_1407DB590(v8, v22, 0i64);
		}
		if (v19)
		{
			v32 = &word_140B7B704;
			if (*(_QWORD*)(v19 + 16))
				v32 = *(__int16**)(v19 + 16);
		}
		else
		{
			v32 = sub_14034BDD0(v31, 108);
		}
		v33 = sub_14018EFA0(&v56, (__int64)v8, v32);
		if (v33 != &v52)
		{
			sub_14001C480((__int64)&v52, (int*)v33[1], (int*)v33[2]);
			v8 = v53;
		}
		if (v57)
			sub_14018B900(v57, 0);
	LABEL_68:
		sub_14042CEA0(*(_QWORD*)(a1 + 29504));
		goto LABEL_110;
	}
	if (v7 == a2[1] && v7)
	{
		v24 = *(_DWORD*)(a1 + 28384);
		if (v24)
			v19 = sub_1403D90D0(a1, v24);
		else
			v19 = 0i64;
		v25 = *(_QWORD*)(a1 + 120);
		*(_QWORD*)(a1 + 28384) = 0i64;
		if (v25)
		{
			v9 = (unsigned int)*a2;
			if (*(_DWORD*)(v25 + 264) == (_DWORD)v9)
				sub_14055BAC0((_QWORD*)a1, v25, v10, a4);
		}
		v26 = a2[2];
		if (v26)
		{
			if (v26 == 4)
			{
				v29 = sub_1403C9210();
				v30 = 431553;
				if (v29 == 3)
					v30 = 448363;
				v22 = (int*)sub_14034BDD0(448363i64, v30);
				v23 = 0i64;
				if (*(_WORD*)v22)
				{
					do
						++v23;
					while (*((_WORD*)v22 + v23));
				}
			}
			else
			{
				v27 = sub_1403C9210();
				v28 = 431618;
				if (v27 == 3)
					v28 = 448365;
				v22 = (int*)sub_14034BDD0(448365i64, v28);
				v23 = 0i64;
				if (*(_WORD*)v22)
				{
					do
						++v23;
					while (*((_WORD*)v22 + v23));
				}
			}
		}
		else
		{
			v22 = (int*)sub_14034BDD0(v9, 431350);
			v23 = 0i64;
			if (*(_WORD*)v22)
			{
				do
					++v23;
				while (*((_WORD*)v22 + v23));
			}
		}
		goto LABEL_56;
	}
	if (v11 != 4)
	{
		v34 = sub_1403D90D0(qword_140C65898, *a2);
		v35 = sub_1403D90D0(qword_140C65898, a2[1]);
		v36 = (unsigned int)a2[2];
		v37 = v35;
		if ((_DWORD)v36)
		{
			if ((_DWORD)v36 == 4)
				goto LABEL_110;
			v38 = (int*)sub_14034BDD0(v36, 431617);
			v39 = 0i64;
			if (*(_WORD*)v38)
			{
				do
					++v39;
				while (*((_WORD*)v38 + v39));
			}
			if ((2 * v39) >> 1)
			{
				sub_14001C310(&v52, v38, (int*)((char*)v38 + 2 * v39));
				v8 = v53;
			}
			else
			{
				sub_1407DB590(v8, v38, 0i64);
			}
			v41 = &word_140B7B704;
			if (v34)
			{
				v42 = &word_140B7B704;
				if (*(_QWORD*)(v34 + 16))
					v42 = *(__int16**)(v34 + 16);
			}
			else
			{
				v42 = sub_14034BDD0(v40, 108);
			}
			if (v37)
			{
				if (*(_QWORD*)(v37 + 16))
					v41 = *(__int16**)(v37 + 16);
			}
			else
			{
				v41 = sub_14034BDD0(v40, 108);
			}
			v43 = sub_14018EFA0(&v56, (__int64)v8, v41, v42);
			if (v43 != &v52)
			{
				sub_14001C480((__int64)&v52, (int*)v43[1], (int*)v43[2]);
				v8 = v53;
			}
			v44 = v57;
		}
		else
		{
			v45 = (int*)sub_14034BDD0(v36, 431352);
			v46 = 0i64;
			if (*(_WORD*)v45)
			{
				do
					++v46;
				while (*((_WORD*)v45 + v46));
			}
			if ((2 * v46) >> 1)
			{
				sub_14001C310(&v52, v45, (int*)((char*)v45 + 2 * v46));
				v8 = v53;
			}
			else
			{
				sub_1407DB590(v8, v45, 0i64);
			}
			v48 = &word_140B7B704;
			if (v37)
			{
				v49 = &word_140B7B704;
				if (*(_QWORD*)(v37 + 16))
					v49 = *(__int16**)(v37 + 16);
			}
			else
			{
				v49 = sub_14034BDD0(v47, 108);
			}
			if (v34)
			{
				if (*(_QWORD*)(v34 + 16))
					v48 = *(__int16**)(v34 + 16);
			}
			else
			{
				v48 = sub_14034BDD0(v47, 108);
			}
			v50 = sub_14018EFA0(v58, (__int64)v8, v48, v49);
			if (v50 != &v52)
			{
				sub_14001C480((__int64)&v52, (int*)v50[1], (int*)v50[2]);
				v8 = v53;
			}
			v44 = v58[1];
		}
		if (v44)
			sub_14018B900(v44, 0);
	}
LABEL_110:
	if ((((char*)v54 - (char*)v8) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		sub_140003890((__int64*)qword_140C658A0, 0xAu, 0i64, v8, 0, 0i64);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return 0i64;
}
// 1403DE2D2: variable 'v9' is possibly undefined
// 1403DE365: variable 'v15' is possibly undefined
// 1403DE365: variable 'v16' is possibly undefined
// 1403DE3C7: variable 'v10' is possibly undefined
// 1403DE5A6: variable 'v31' is possibly undefined
// 1403DE6DD: variable 'v40' is possibly undefined
// 1403DE7D9: variable 'v47' is possibly undefined
// 1409E7DEC: using guessed type int dword_1409E7DEC[6];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

