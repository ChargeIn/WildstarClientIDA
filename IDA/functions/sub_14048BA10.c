//----- (000000014048BA10) ----------------------------------------------------
_QWORD* __fastcall sub_14048BA10(_QWORD* a1, _DWORD* a2)
{
	__int64 v2; // rdi
	int* v5; // rcx
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // edx
	__int16* v10; // rbx
	__int64 v11; // rcx
	__int16* v12; // rax
	_QWORD* v13; // rax
	__int64 v14; // rcx
	int* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	__int16* v18; // rbx
	__int64 v19; // rcx
	__int16* v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rbx
	unsigned int v26; // edi
	__int64 v27; // rcx
	__int16* v28; // rbx
	__int64 v29; // rcx
	__int16* v30; // rax
	_QWORD* v31; // rax
	__int64 v32; // rax
	__int64 v33; // rcx
	__int16* v34; // rbx
	__int64 v35; // rcx
	__int16* v36; // rax
	_QWORD* v37; // rax
	__int64 v38; // rax
	__int64 v39; // rbx
	int* v40; // rdi
	__int64 v41; // rax
	__int64 v42; // rcx
	__int16* v43; // rbx
	__int64 v44; // rcx
	__int16* v45; // rax
	_QWORD* v46; // rax
	__int16* v47; // rbx
	__int64 v48; // rcx
	__int16* v49; // rax
	_QWORD* v50; // rax
	unsigned int v51; // ebx
	__int64 v52; // rax
	__int64 v53; // r15
	int v54; // ebx
	__int64 v55; // rcx
	int* v56; // rdx
	__int64 v57; // rax
	int* v58; // rax
	__int64 v59; // rax
	_QWORD v61[4]; // [rsp+30h] [rbp-D0h] BYREF
	_QWORD v62[4]; // [rsp+50h] [rbp-B0h] BYREF
	_QWORD v63[4]; // [rsp+70h] [rbp-90h] BYREF
	_QWORD v64[4]; // [rsp+90h] [rbp-70h] BYREF
	_QWORD v65[4]; // [rsp+B0h] [rbp-50h] BYREF
	_QWORD v66[4]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v67; // [rsp+F0h] [rbp-10h] BYREF
	char v68[8]; // [rsp+F8h] [rbp-8h] BYREF
	_WORD* v69; // [rsp+100h] [rbp+0h]
	_WORD* v70; // [rsp+108h] [rbp+8h]
	__int64 v71; // [rsp+1B0h] [rbp+B0h]

	v2 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v5 = sub_14018B280(16i64, 0);
	a1[1] = v5;
	a1[2] = v5;
	a1[3] = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	switch (a2[2])
	{
	case 1:
		v6 = a2[3];
		if (sub_140444550(qword_140C658F0, v6))
		{
			v7 = sub_1402096E0(v6);
			if (v7)
			{
				v9 = *(_DWORD*)(v7 + 176);
				if ((int)a2[4] > 1)
				{
					v10 = sub_14034BDD0(v8, v9);
					v12 = sub_14034BDD0(v11, 23709);
					v13 = sub_14018EFA0(v62, (__int64)v12, v10, (unsigned int)a2[4]);
					if (v13 != a1)
						sub_14001C480((__int64)a1, (int*)v13[1], (int*)v13[2]);
					v14 = v62[1];
					goto LABEL_36;
				}
				v15 = (int*)sub_14034BDD0(v8, v9);
				if (*(_WORD*)v15)
				{
					do
						++v2;
					while (*((_WORD*)v15 + v2));
				}
				sub_14001C480((__int64)a1, v15, (int*)((char*)v15 + 2 * v2));
			}
		}
		return a1;
	case 2:
		v16 = sub_1401FF120(a2[3]);
		if (v16)
		{
			v18 = sub_14034BDD0(v17, *(_DWORD*)(v16 + 12));
			v20 = sub_14034BDD0(v19, 23708);
			v21 = sub_14018EFA0(v66, (__int64)v20, v18, (unsigned int)a2[4]);
			if (v21 != a1)
				sub_14001C480((__int64)a1, (int*)v21[1], (int*)v21[2]);
			v14 = v66[1];
			goto LABEL_36;
		}
		return a1;
	case 3:
		sub_140503450((__int64)&v67);
		sub_140503600((__int64)&v67, a2[3], 0, 0, 0);
		goto LABEL_41;
	case 4:
		v22 = sub_140246480(a2[3]);
		if (!v22)
			return a1;
		v25 = sub_1405BE150(v23, *(_DWORD*)(v22 + 4));
		if (!v25)
			return a1;
		v26 = sub_1405BE210(v24, a2[3], a2[4]);
		v28 = sub_14034BDD0(v27, *(_DWORD*)(v25 + 4));
		v30 = sub_14034BDD0(v29, 200437);
		v31 = sub_14018EFA0(v64, (__int64)v30, v28, v26);
		if (v31 != a1)
			sub_14001C480((__int64)a1, (int*)v31[1], (int*)v31[2]);
		v14 = v64[1];
		goto LABEL_36;
	case 5:
		v32 = sub_1405BE150((__int64)v5, a2[3]);
		if (!v32)
			return a1;
		v34 = sub_14034BDD0(v33, *(_DWORD*)(v32 + 4));
		v36 = sub_14034BDD0(v35, 223114);
		v37 = sub_14018EFA0(v61, (__int64)v36, v34);
		if (v37 != a1)
			sub_14001C480((__int64)a1, (int*)v37[1], (int*)v37[2]);
		v14 = v61[1];
		goto LABEL_36;
	case 6:
		v38 = sub_1401E8C20(a2[3]);
		v39 = v38;
		if (!v38)
			return a1;
		v40 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v38 + 8), 0i64);
		v41 = sub_1401FE020(*(_DWORD*)(v39 + 12));
		if (v40)
		{
			v43 = sub_14034BDD0(v42, v40[119]);
			v45 = sub_14034BDD0(v44, 719983);
			v46 = sub_14018EFA0(v63, (__int64)v45, v43);
			if (v46 != a1)
				sub_14001C480((__int64)a1, (int*)v46[1], (int*)v46[2]);
			v14 = v63[1];
		}
		else
		{
			if (!v41)
				return a1;
			v47 = sub_14034BDD0(v42, *(_DWORD*)(v41 + 20));
			v49 = sub_14034BDD0(v48, 719985);
			v50 = sub_14018EFA0(v65, (__int64)v49, v47);
			if (v50 != a1)
				sub_14001C480((__int64)a1, (int*)v50[1], (int*)v50[2]);
			v14 = v65[1];
		}
	LABEL_36:
		if (v14)
			sub_14018B900(v14, 0);
		return a1;
	case 7:
		v51 = a2[3];
		v52 = sub_1401E87E0(v51);
		if (v52 && sub_1401E8C20(*(_DWORD*)(v52 + 16)))
		{
			sub_140503450((__int64)&v67);
			sub_140503600((__int64)&v67, 0xFu, 0, 0, v51);
		LABEL_41:
			sub_140505290((__int64)&v67, (__int64)a1, (int)a2[4], 1);
			sub_140503580(&v67);
		}
		return a1;
	case 8:
	case 9:
		v53 = sub_140201320(a2[3]);
		if (v53)
		{
			v54 = 764328;
			if (a2[2] == 9)
				v54 = 764329;
			sub_1404DDE90(&v67);
			v56 = (int*)sub_14034BDD0(v55, v54);
			if (v56)
			{
				v57 = 0i64;
				if (*(_WORD*)v56)
				{
					do
						++v57;
					while (*((_WORD*)v56 + v57));
				}
				sub_14001C480((__int64)v68, v56, (int*)((char*)v56 + 2 * v57));
			}
			else if (v69 != v70)
			{
				*v69 = 0;
				v70 = v69;
			}
			v58 = sub_14018B280(96i64, 0);
			if (v58)
				v2 = sub_1404DDAF0((__int64)v58, *(_DWORD*)(v53 + 4));
			sub_1400B7480((__int64)&v67, (_QWORD*)v2);
			v59 = sub_1400B7660(&v67);
			if ((_QWORD*)v59 != a1)
				sub_14001C480((__int64)a1, *(int**)(v59 + 8), *(int**)(v59 + 16));
			if (v71)
				sub_14018B900(v71, 0);
			sub_1400B7390(&v67);
		}
		return a1;
	default:
		return a1;
	}
}
// 14048BAD0: variable 'v8' is possibly undefined
// 14048BADD: variable 'v11' is possibly undefined
// 14048BB53: variable 'v17' is possibly undefined
// 14048BB60: variable 'v19' is possibly undefined
// 14048BBC1: variable 'v23' is possibly undefined
// 14048BBDA: variable 'v24' is possibly undefined
// 14048BBE4: variable 'v27' is possibly undefined
// 14048BBF1: variable 'v29' is possibly undefined
// 14048BC3B: variable 'v33' is possibly undefined
// 14048BC48: variable 'v35' is possibly undefined
// 14048BCB9: variable 'v42' is possibly undefined
// 14048BCC6: variable 'v44' is possibly undefined
// 14048BD10: variable 'v48' is possibly undefined
// 14048BDF3: variable 'v55' is possibly undefined
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14048BA10: using guessed type char var_1B8[8];

