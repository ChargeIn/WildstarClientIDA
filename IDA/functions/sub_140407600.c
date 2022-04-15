//----- (0000000140407600) ----------------------------------------------------
__int64 __fastcall sub_140407600(__int64 a1, _QWORD* a2, int a3)
{
	unsigned int v4; // r12d
	int v5; // edx
	int* v7; // rbx
	__int64 v8; // rcx
	__int16* v9; // rax
	__int64 v10; // rcx
	int v11; // edx
	int* v12; // rbx
	__int64 v13; // rcx
	__int16* v14; // rax
	__int64 v15; // rcx
	int v16; // edx
	int* v17; // rbx
	__int64 v18; // rcx
	__int16* v19; // rax
	__int64 v20; // rcx
	int v21; // edx
	int* v22; // rbx
	__int16* v23; // rax
	__int64 v24; // rcx
	unsigned __int64 v25; // rcx
	int* v26; // r8
	unsigned __int64 v27; // rcx
	int* v28; // r8
	unsigned __int64 v29; // rsi
	int** v30; // rdi
	int* v31; // r14
	__int64 v32; // rbx
	_QWORD* v33; // rax
	bool v34; // bl
	int v35; // edi
	char* v36; // rbx
	__int64 v37; // rcx
	__int64 v39; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v40; // [rsp+28h] [rbp-D8h]
	__int64 v41; // [rsp+40h] [rbp-C0h] BYREF
	int* v42; // [rsp+48h] [rbp-B8h] BYREF
	int* v43; // [rsp+50h] [rbp-B0h]
	__int64 v44; // [rsp+58h] [rbp-A8h]
	__int64 v45; // [rsp+60h] [rbp-A0h] BYREF
	int* v46; // [rsp+68h] [rbp-98h]
	int* v47; // [rsp+70h] [rbp-90h]
	__int64 v48; // [rsp+78h] [rbp-88h]
	__int64 v49; // [rsp+80h] [rbp-80h] BYREF
	int* v50; // [rsp+88h] [rbp-78h]
	int* v51; // [rsp+90h] [rbp-70h]
	__int64 v52; // [rsp+98h] [rbp-68h]
	__int64 v53; // [rsp+A0h] [rbp-60h] BYREF
	int* v54; // [rsp+A8h] [rbp-58h]
	int* v55; // [rsp+B0h] [rbp-50h]
	__int64 v56; // [rsp+B8h] [rbp-48h]
	_QWORD v57[4]; // [rsp+C0h] [rbp-40h] BYREF
	_QWORD v58[4]; // [rsp+E0h] [rbp-20h] BYREF
	char v59; // [rsp+108h] [rbp+8h] BYREF

	v4 = 0;
	v5 = *(_DWORD*)(a2[1] + 36i64);
	if (v5)
	{
		v9 = sub_14034BDD0(a1, v5);
		sub_140407B90(v10, &v41, (int*)v9, a3);
	}
	else
	{
		v7 = sub_14018B280(2i64, 0);
		v42 = v7;
		v44 = (__int64)v7 + 2;
		sub_1407DB590(v7, dword_1409E8784, 0i64);
		v43 = v7;
		if (v7)
			*(_WORD*)v7 = 0;
	}
	v11 = *(_DWORD*)(a2[1] + 40i64);
	if (v11)
	{
		v14 = sub_14034BDD0(v8, v11);
		sub_140407B90(v15, &v45, (int*)v14, a3);
	}
	else
	{
		v12 = sub_14018B280(2i64, 0);
		v46 = v12;
		v48 = (__int64)v12 + 2;
		sub_1407DB590(v12, dword_1409E8784, 0i64);
		v47 = v12;
		if (v12)
			*(_WORD*)v12 = 0;
	}
	v16 = *(_DWORD*)(a2[1] + 44i64);
	if (v16)
	{
		v19 = sub_14034BDD0(v13, v16);
		sub_140407B90(v20, &v49, (int*)v19, a3);
	}
	else
	{
		v17 = sub_14018B280(2i64, 0);
		v50 = v17;
		v52 = (__int64)v17 + 2;
		sub_1407DB590(v17, dword_1409E8784, 0i64);
		v51 = v17;
		if (v17)
			*(_WORD*)v17 = 0;
	}
	v21 = *(_DWORD*)(a2[1] + 48i64);
	if (v21)
	{
		v23 = sub_14034BDD0(v18, v21);
		sub_140407B90(v24, &v53, (int*)v23, a3);
	}
	else
	{
		v22 = sub_14018B280(2i64, 0);
		v54 = v22;
		v56 = (__int64)v22 + 2;
		sub_1407DB590(v22, dword_1409E8784, 0i64);
		v55 = v22;
		if (v22)
			*(_WORD*)v22 = 0;
	}
	v25 = *(_QWORD*)(a2[1] + 16i64);
	if (v25)
	{
		if (v25 <= qword_140C3FE70)
			v26 = (int*)(v25 + qword_140C3FE68);
		else
			v26 = 0i64;
	}
	else
	{
		v26 = 0i64;
	}
	sub_140407B90(v25, v57, v26, a3);
	v27 = *(_QWORD*)(a2[1] + 24i64);
	if (v27)
	{
		if (v27 <= qword_140C3FE70)
			v28 = (int*)(v27 + qword_140C3FE68);
		else
			v28 = 0i64;
	}
	else
	{
		v28 = 0i64;
	}
	sub_140407B90(v27, v58, v28, a3);
	v29 = 0i64;
	v30 = &v42;
	while (1)
	{
		v31 = *v30;
		if (*v30 != v30[1])
		{
			if (sub_1400EC6C0(*(_QWORD*)(qword_140C65898 + 29504), *v30))
				break;
			v32 = *(_QWORD*)(qword_140C65898 + 29504);
			v33 = sub_14018F0E0(&v39, (unsigned __int16*)v31);
			v34 = sub_1400EC7D0(v32, (const char*)v33[1]);
			if (v40)
				sub_14018B900(v40, 0);
			if (v34)
				break;
		}
		++v29;
		v30 += 4;
		if (v29 >= 6)
		{
			if (&v41 != a2 + 15)
				sub_14001C480((__int64)(a2 + 15), v42, v43);
			if (&v45 != a2 + 19)
				sub_14001C480((__int64)(a2 + 19), v46, v47);
			if (&v49 != a2 + 23)
				sub_14001C480((__int64)(a2 + 23), v50, v51);
			if (&v53 != a2 + 27)
				sub_14001C480((__int64)(a2 + 27), v54, v55);
			if (v57 != a2 + 7)
				sub_14001C480((__int64)(a2 + 7), (int*)v57[1], (int*)v57[2]);
			if (v58 != a2 + 11)
				sub_14001C480((__int64)(a2 + 11), (int*)v58[1], (int*)v58[2]);
			v4 = 1;
			break;
		}
	}
	v35 = 5;
	v36 = &v59;
	do
	{
		v37 = *((_QWORD*)v36 - 4);
		v36 -= 32;
		if (v37)
			sub_14018B900(v37, 0);
		--v35;
	} while (v35 >= 0);
	return v4;
}
// 14040768B: variable 'v10' is possibly undefined
// 1404076D6: variable 'v8' is possibly undefined
// 1404076E6: variable 'v15' is possibly undefined
// 14040772E: variable 'v13' is possibly undefined
// 14040773D: variable 'v20' is possibly undefined
// 140407785: variable 'v18' is possibly undefined
// 140407794: variable 'v24' is possibly undefined
// 1409E8784: using guessed type int dword_1409E8784[6];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;

