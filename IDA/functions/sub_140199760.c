//----- (0000000140199760) ----------------------------------------------------
__int64 __fastcall sub_140199760(int* a1, __m128i* a2, __int64(__fastcall* a3)(__int64*, __int64), __int64 a4)
{
	__m128i* i; // rdi
	const __m128i* v5; // r14
	int* v6; // rax
	int* v7; // r15
	char* v8; // r13
	int* v9; // rax
	__int64 v10; // rax
	int* v11; // rsi
	__int64 v12; // rbx
	signed __int64 v13; // rbx
	__int64 v14; // r14
	int* v15; // rdi
	unsigned __int64 v16; // r14
	__int64* v17; // rax
	__int64 v18; // rbx
	unsigned __int64 v19; // rbx
	__int64 v20; // rcx
	__int64 v21; // rax
	unsigned int* v22; // r14
	int v23; // edi
	int* v24; // rdi
	__int64 v25; // rax
	int* v26; // rsi
	unsigned __int64 v27; // r8
	unsigned __int64 v28; // rbx
	unsigned __int64 v29; // rbx
	int* v30; // rsi
	int* v31; // rbx
	__int64 v32; // r8
	unsigned __int64 v33; // rsi
	__int64 v34; // rdi
	unsigned __int64 v35; // rbx
	__int64 v36; // rbx
	int* v37; // rax
	int* v38; // rbx
	__int64 v39; // rcx
	int v40; // eax
	int* v41; // rbx
	unsigned __int64 v42; // r12
	int* v43; // rsi
	__int64 v44; // rax
	int* v45; // r14
	unsigned __int64 v46; // r8
	unsigned __int64 v47; // rdi
	unsigned __int64 v48; // rdi
	char* v49; // r9
	int* v50; // r14
	int* v51; // rdi
	__int64 v52; // rax
	unsigned int* v54; // rax
	__int64 v55; // r8
	unsigned __int64 v56; // rdi
	unsigned __int64 v57; // r14
	__int64 v58; // rax
	int* v59; // r9
	unsigned __int64 v60; // rdx
	__int64 v61; // r10
	_WORD* v62; // rcx
	unsigned __int64 v63; // r14
	bool v64; // cf
	__int64* v65; // rax
	char* v66; // r14
	char* v67; // r12
	int* v68; // rcx
	__int64 v69; // r8
	unsigned __int64 v70; // rdi
	__int64 v71; // rdi
	int* v72; // rax
	int* v73; // rdx
	signed __int64 v74; // r14
	__int64 v76; // [rsp+28h] [rbp-49h] BYREF
	char* v77; // [rsp+30h] [rbp-41h]
	int* v78; // [rsp+38h] [rbp-39h]
	int* v79; // [rsp+40h] [rbp-31h]
	__int64 v80; // [rsp+48h] [rbp-29h] BYREF
	int* v81; // [rsp+50h] [rbp-21h]
	int* v82; // [rsp+58h] [rbp-19h]
	__int64 v83; // [rsp+60h] [rbp-11h]
	__int64 v84; // [rsp+68h] [rbp-9h] BYREF
	char* v85; // [rsp+70h] [rbp-1h]
	char* v86; // [rsp+78h] [rbp+7h]
	int* v87; // [rsp+80h] [rbp+Fh]
	__int64 v88; // [rsp+D8h] [rbp+67h] BYREF
	unsigned __int64 v89; // [rsp+E0h] [rbp+6Fh] BYREF
	__int64(__fastcall * v90)(__int64*, __int64); // [rsp+E8h] [rbp+77h]
	__int64 v91; // [rsp+F0h] [rbp+7Fh]

	v91 = a4;
	v90 = a3;
	v88 = (__int64)a1;
	for (i = a2; i->m128i_i16[0] == 32; i = (__m128i*)((char*)i + 2))
		;
	v5 = sub_1407DD988(i, 0x20u);
	v6 = sub_14018B280(16i64, 0);
	v7 = v6;
	v85 = (char*)v6;
	v8 = (char*)v6;
	v86 = (char*)v6;
	v87 = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	v9 = sub_14018B280(16i64, 0);
	v77 = (char*)v9;
	v78 = v9;
	v79 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	v10 = 0i64;
	if (v5)
	{
		v11 = 0i64;
		if (i->m128i_i16[0])
		{
			do
				++v10;
			while (i->m128i_i16[v10]);
		}
		v12 = (2 * v10) >> 1;
		if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v11 = sub_14018B280(2 * (v12 + 1), 0);
		v13 = 2 * v12;
		sub_1407DB590(v11, i->m128i_i32, v13);
		if ((int*)((char*)v11 + v13))
			*(_WORD*)((char*)v11 + v13) = 0;
		v14 = (char*)v5 - (char*)i;
		v15 = 0i64;
		v16 = v14 >> 1;
		v17 = &v88;
		v88 = v13 >> 1;
		if (v13 >> 1 >= v16)
			v17 = (__int64*)&v89;
		v89 = v16;
		v18 = (2 * *v17) >> 1;
		if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v15 = sub_14018B280(2 * (v18 + 1), 0);
		v19 = 2 * v18;
		sub_1407DB590(v15, v11, v19);
		v8 = (char*)v15 + v19;
		if ((int*)((char*)v15 + v19))
			*(_WORD*)v8 = 0;
		v20 = (__int64)v7;
		v7 = v15;
		if (v20)
			sub_14018B900(v20, 0);
		if (v11)
			sub_14018B900((__int64)v11, 0);
		v21 = sub_14019D200(v20, (unsigned __int16*)v15);
		v22 = (unsigned int*)v21;
		if (!v21)
		{
			v23 = -2147467259;
			goto LABEL_91;
		}
		v24 = *(int**)(v21 + 8);
		v25 = 0i64;
		if (*(_WORD*)v24)
		{
			do
				++v25;
			while (*((_WORD*)v24 + v25));
		}
		v26 = (int*)((char*)v24 + 2 * v25);
		v27 = ((char*)v78 - v77) >> 1;
		v28 = (2 * v25) >> 1;
		if (v28 > v27)
		{
			sub_1407DB590((int*)v77, v24, 2 * v27);
			sub_14001C310(&v76, (int*)((char*)v24 + 2 * (((char*)v78 - v77) >> 1)), v26);
			v30 = v78;
		}
		else
		{
			v29 = 2 * v28;
			sub_1407DB590((int*)v77, v24, v29);
			v30 = v78;
			v31 = (int*)&v77[v29];
			if (v31 != v78)
			{
				sub_1407DB590(v31, v78, 2ui64);
				v30 = (int*)((char*)v78 - 2 * (((char*)v78 - (char*)v31) >> 1));
				v78 = v30;
			}
		}
		v32 = v22[4];
		v33 = ((char*)v30 - v77) >> 1;
		if (*(_DWORD*)qword_140C63750 < (int)v32)
			v32 = *(unsigned int*)qword_140C63750;
		(*(void(__fastcall**)(unsigned int*, __int64*, __int64))(*(_QWORD*)v22 + 16i64))(v22, &v84, v32);
		v34 = 0i64;
		do
			++v34;
		while (*((_WORD*)&unk_1409E20EC + v34));
		v81 = 0i64;
		v82 = 0i64;
		v83 = 0i64;
		v35 = v34 + ((v86 - v85) >> 1) + 1;
		if (v35 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v36 = 2 * v35;
			v37 = sub_14018B280(v36, 0);
			v81 = v37;
			v82 = v37;
			v83 = (__int64)v37 + v36;
			if (v37)
				*(_WORD*)v37 = 0;
		}
		sub_14001C310(&v80, (int*)&unk_1409E20EC, (int*)((char*)&unk_1409E20EC + 2 * v34));
		sub_14001C310(&v80, (int*)v85, (int*)v86);
		v38 = v81;
		sub_14001C310(&v76, v81, v82);
		if (v38)
			sub_14018B900((__int64)v38, 0);
		if (v85)
			sub_14018B900((__int64)v85, 0);
		goto LABEL_89;
	}
	if (i->m128i_i16[0])
	{
		do
			++v10;
		while (i->m128i_i16[v10]);
	}
	if ((2 * v10) >> 1)
	{
		sub_14001C310(&v84, i->m128i_i32, (int*)((char*)i->m128i_i32 + 2 * v10));
		v8 = v86;
		v7 = (int*)v85;
	}
	else
	{
		sub_1407DB590(v7, i->m128i_i32, 0i64);
	}
	v88 = 0i64;
	v40 = sub_14019D3A0(v39, (unsigned __int16*)v7, (int**)&v88);
	v41 = (int*)v88;
	v23 = v40;
	if (v40 >= 0)
	{
		v42 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v88 + 16i64))(v88);
		if (!v42)
		{
			v23 = -2147467259;
			goto LABEL_51;
		}
		v43 = *(int**)((*(__int64(__fastcall**)(int*, _QWORD))(*(_QWORD*)v41 + 24i64))(v41, 0i64) + 8);
		v44 = 0i64;
		if (*(_WORD*)v43)
		{
			do
				++v44;
			while (*((_WORD*)v43 + v44));
		}
		v45 = (int*)((char*)v43 + 2 * v44);
		v46 = ((char*)v78 - v77) >> 1;
		v47 = (2 * v44) >> 1;
		if (v47 > v46)
		{
			sub_1407DB590((int*)v77, v43, 2 * v46);
			sub_14001C310(&v76, (int*)((char*)v43 + 2 * (((char*)v78 - v77) >> 1)), v45);
			v50 = v78;
		}
		else
		{
			v48 = 2 * v47;
			sub_1407DB590((int*)v77, v43, v48);
			v49 = v77;
			v50 = v78;
			v51 = (int*)&v77[v48];
			if (v51 == v78)
			{
			LABEL_60:
				v33 = ((char*)v50 - v49) >> 1;
				if (v42 == 1)
				{
					v52 = 0i64;
					while (*((_WORD*)&unk_1409E20D4 + ++v52) != 0)
						;
					sub_14001C310(&v76, (int*)&unk_1409E20D4, (int*)((char*)&unk_1409E20D4 + 2 * v52));
					v54 = (unsigned int*)(*(__int64(__fastcall**)(int*, _QWORD))(*(_QWORD*)v41 + 24i64))(v41, 0i64);
					v55 = v54[4];
					if (*(_DWORD*)qword_140C63750 < (int)v55)
						v55 = *(unsigned int*)qword_140C63750;
					(*(void(__fastcall**)(unsigned int*, __int64*, __int64))(*(_QWORD*)v54 + 16i64))(v54, &v84, v55);
					sub_14001C310(&v76, (int*)v85, (int*)v86);
					if (v85)
						sub_14018B900((__int64)v85, 0);
				}
				else
				{
					v56 = 1i64;
					v57 = (v8 - (char*)v7) >> 1;
					do
					{
						v58 = (*(__int64(__fastcall**)(int*, unsigned __int64))(*(_QWORD*)v41 + 24i64))(v41, v56);
						v59 = (int*)v77;
						v60 = (v8 - (char*)v7) >> 1;
						v61 = *(_QWORD*)(v58 + 8);
						if (v57 < v33)
						{
							v62 = (_WORD*)(v61 + 2 * v57);
							do
							{
								if (*(_WORD*)&v77[(_QWORD)v62 - v61] != *v62)
									break;
								++v60;
								++v62;
							} while (v60 < v33);
						}
						++v56;
						v33 = v60;
					} while (v56 < v42);
					v63 = ((char*)v78 - v77) >> 1;
					if (v60 < v63)
					{
						v64 = v63 < v60;
						v88 = ((char*)v78 - v77) >> 1;
						v65 = &v88;
						v89 = v60;
						v66 = v77;
						if (!v64)
							v65 = (__int64*)&v89;
						v67 = &v77[2 * *v65];
						v68 = 0i64;
						v69 = 0i64;
						v70 = ((2 * *v65) >> 1) + 1;
						if (v70 <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v71 = 2 * v70;
							v72 = sub_14018B280(v71, 0);
							v59 = (int*)v77;
							v69 = (__int64)v72 + v71;
							v68 = v72;
						}
						v73 = v68;
						if (v66 != v67)
						{
							v74 = v66 - (char*)v68;
							do
							{
								if (v73)
									*(_WORD*)v73 = *(_WORD*)((char*)v73 + v74);
								v73 = (int*)((char*)v73 + 2);
							} while ((char*)v73 + v74 != v67);
							v59 = (int*)v77;
						}
						if (v73)
						{
							*(_WORD*)v73 = 0;
							v59 = (int*)v77;
						}
						v77 = (char*)v68;
						v78 = v73;
						v79 = (int*)v69;
						if (v59)
							sub_14018B900((__int64)v59, 0);
					}
				}
				(*(void(__fastcall**)(int*))(*(_QWORD*)v41 + 8i64))(v41);
			LABEL_89:
				v23 = v90(&v76, v91);
				if (v23 >= 0)
					v23 = v33 == (v8 - (char*)v7) >> 1;
				goto LABEL_91;
			}
			sub_1407DB590(v51, v78, 2ui64);
			v50 = (int*)((char*)v78 - 2 * (((char*)v78 - (char*)v51) >> 1));
			v78 = v50;
		}
		v49 = v77;
		goto LABEL_60;
	}
LABEL_51:
	if (v41)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v41 + 8i64))(v41);
LABEL_91:
	if (v77)
		sub_14018B900((__int64)v77, 0);
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return (unsigned int)v23;
}
// 140199CB6: conditional instruction was optimized away because r12.8>=2u
// 140199910: variable 'v20' is possibly undefined
// 140199B30: variable 'v39' is possibly undefined
// 140C63750: using guessed type __int64 qword_140C63750;

