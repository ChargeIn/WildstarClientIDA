//----- (00000001401074D0) ----------------------------------------------------
void __fastcall sub_1401074D0(__int64 a1, int* a2)
{
	int* v3; // rdx
	__int16 v4; // cx
	__int64 v5; // rax
	bool v6; // zf
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64* v10; // rsi
	unsigned __int64 v11; // rbx
	__int64 v12; // r13
	int* v13; // r15
	WCHAR* v14; // rax
	const __m128i* v15; // rbx
	WCHAR v16; // ax
	const __m128i* v17; // rcx
	const __m128i* v18; // rcx
	const __m128i* v19; // rcx
	__int64 i; // rax
	__int64 v21; // r15
	int* v22; // rdi
	__int64 v23; // rsi
	int* v24; // r14
	__int64 v25; // rsi
	__int64 v26; // rax
	int* v27; // r14
	__int64 v28; // rsi
	int* v29; // rdi
	__int64 v30; // rsi
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34; // rax
	int* v35; // rax
	int* v36; // rdi
	__int64 v37; // rbx
	unsigned int v38; // eax
	unsigned int v39; // eax
	int* v40; // rsi
	__int64 v41; // rdx
	int* v42; // rdx
	unsigned int v43; // [rsp+78h] [rbp-90h] BYREF
	unsigned int v44; // [rsp+7Ch] [rbp-8Ch] BYREF
	int v45; // [rsp+80h] [rbp-88h]
	__int64* v46; // [rsp+88h] [rbp-80h] BYREF
	__int64 v47; // [rsp+90h] [rbp-78h] BYREF
	__int64 v48; // [rsp+98h] [rbp-70h] BYREF
	int* v49; // [rsp+A0h] [rbp-68h]
	__int64 v51; // [rsp+B0h] [rbp-58h]
	__int64 v52; // [rsp+B8h] [rbp-50h] BYREF
	int v53; // [rsp+C0h] [rbp-48h]
	int v54; // [rsp+C4h] [rbp-44h]
	int* v55; // [rsp+C8h] [rbp-40h]
	__int64 v56; // [rsp+D0h] [rbp-38h]
	__int64 v57; // [rsp+D8h] [rbp-30h] BYREF
	__m128i* v58; // [rsp+E0h] [rbp-28h]
	__int64 v59; // [rsp+E8h] [rbp-20h]
	__int64 v60; // [rsp+F8h] [rbp-10h] BYREF
	int* v61; // [rsp+100h] [rbp-8h]
	__int64 v63; // [rsp+110h] [rbp+8h]
	__int128 v64; // [rsp+118h] [rbp+10h] BYREF
	__int128 v65; // [rsp+128h] [rbp+20h] BYREF
	int v66[132]; // [rsp+138h] [rbp+30h] BYREF

	v55 = a2;
	v3 = *(int**)(a1 + 64);
	v56 = a1;
	sub_1400FE2E0(&v57, v3);
	if ((v59 - (__int64)v58) >> 1)
	{
		v4 = v58->m128i_i16[((v59 - (__int64)v58) >> 1) - 1];
		if (v4 != 92 && v4 != 47)
		{
			v5 = 0i64;
			do
				v6 = *((_WORD*)&unk_1409D4F8C + ++v5) == 0;
			while (!v6);
			sub_14001C310(&v57, (int*)&unk_1409D4F8C, (int*)((char*)&unk_1409D4F8C + 2 * v5));
		}
		v7 = 0i64;
		do
			v6 = asc_1409D59FC[++v7] == 0;
		while (!v6);
		sub_14001C310(&v57, (int*)L"*.", (int*)&asc_1409D59FC[v7]);
		v8 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v8;
			while (*((_WORD*)a2 + v8));
		}
		sub_14001C310(&v57, a2, (int*)((char*)a2 + 2 * v8));
		if ((int)sub_1401B54E0(v9, v58, 0i64, &v46) >= 0)
		{
			v10 = v46;
			v45 = 0;
			if ((*(__int64(__fastcall**)(__int64*))(*v46 + 16))(v46))
			{
				v11 = 0i64;
				do
				{
					v12 = 260i64;
					v13 = v66;
					v14 = (WCHAR*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v46 + 24))(v46, v11);
					v15 = (const __m128i*)v14;
					if (v14)
					{
						if ((unsigned int)sub_1407DFF20(*v14) && v15->m128i_i16[1] == 58
							|| (!v15->m128i_i16[1] || v15->m128i_i16[2] != 58 ? (v16 = 0) : (v16 = 1), (unsigned int)sub_1407DFF20(v16)))
						{
							if (v15->m128i_i16[0])
							{
								while (v15->m128i_i16[0] != 58)
								{
									v15 = (const __m128i*)((char*)v15 + 2);
									if (!v15->m128i_i16[0])
										goto LABEL_27;
								}
								v15 = (const __m128i*)((char*)v15 + 2);
							}
						}
					LABEL_27:
						v17 = sub_1407DD8D8(v15, 0x2Fu);
						if (v17 || (v17 = sub_1407DD8D8(v15, 0x5Cu)) != 0i64)
						{
							v18 = (const __m128i*) & v17->m128i_i8[2];
							if (v18)
							{
								for (; v15 != v18; v15 = (const __m128i*)((char*)v15 + 2))
									;
							}
						}
						v19 = sub_1407DD8D8(v15, 0x2Eu);
						if (!v19)
						{
							for (i = 0i64; v15->m128i_i16[i]; ++i)
								;
							v19 = (const __m128i*)((char*)v15 + 2 * i);
						}
						if (v15 == v19)
							goto LABEL_42;
						do
						{
							if (v12 == 1)
								break;
							if (v13)
							{
								v13 = (int*)((char*)v13 + 2);
								--v12;
								*((_WORD*)v13 - 1) = v15->m128i_i16[0];
							}
							v15 = (const __m128i*)((char*)v15 + 2);
						} while (v15 != v19);
						if (v13)
							LABEL_42:
						*(_WORD*)v13 = 0;
					}
					v21 = v56;
					v22 = 0i64;
					v23 = *(_QWORD*)(v56 + 104);
					v24 = *(int**)(v56 + 96);
					v61 = 0i64;
					v63 = 0i64;
					v25 = (v23 - (__int64)v24) >> 1;
					if ((unsigned __int64)(v25 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v22 = sub_14018B280(2 * (v25 + 1), 0);
						v61 = v22;
						v63 = (__int64)v22 + 2 * v25 + 2;
					}
					sub_1407DB590(v22, v24, 2 * v25);
					if ((int*)((char*)v22 + 2 * v25))
						*((_WORD*)v22 + v25) = 0;
					v26 = 0i64;
					if (LOWORD(v66[0]))
					{
						do
							++v26;
						while (*((_WORD*)v66 + v26));
					}
					sub_14001C310(&v60, v66, (int*)((char*)v66 + 2 * v26));
					v27 = *(int**)(v21 + 64);
					v28 = *(_QWORD*)(v21 + 72) - (_QWORD)v27;
					v29 = 0i64;
					v49 = 0i64;
					v30 = v28 >> 1;
					v51 = 0i64;
					if ((unsigned __int64)(v30 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v29 = sub_14018B280(2 * (v30 + 1), 0);
						v49 = v29;
						v51 = (__int64)v29 + 2 * v30 + 2;
					}
					sub_1407DB590(v29, v27, 2 * v30);
					if ((int*)((char*)v29 + 2 * v30))
						*((_WORD*)v29 + v30) = 0;
					v31 = 0i64;
					do
						v6 = *((_WORD*)&unk_1409D50F4 + ++v31) == 0;
					while (!v6);
					sub_14001C310(&v48, (int*)&unk_1409D50F4, (int*)((char*)&unk_1409D50F4 + 2 * v31));
					v32 = 0i64;
					if (LOWORD(v66[0]))
					{
						do
							++v32;
						while (*((_WORD*)v66 + v32));
					}
					sub_14001C310(&v48, v66, (int*)((char*)v66 + 2 * v32));
					v33 = 0i64;
					do
						v6 = *((_WORD*)&unk_1409D511C + ++v33) == 0;
					while (!v6);
					sub_14001C310(&v48, (int*)&unk_1409D511C, (int*)((char*)&unk_1409D511C + 2 * v33));
					v34 = 0i64;
					if (*(_WORD*)v55)
					{
						do
							++v34;
						while (*((_WORD*)v55 + v34));
					}
					sub_14001C310(&v48, v55, (int*)((char*)v55 + 2 * v34));
					v35 = sub_14018B280(120i64, 0);
					v36 = v61;
					if (v35)
					{
						v37 = sub_140100930((__int64)v35, *(_QWORD*)(*(_QWORD*)(v21 + 8) + 16i64), *(_QWORD*)(v21 + 8), v61, 4);
						v47 = v37;
					}
					else
					{
						v37 = 0i64;
						v47 = 0i64;
					}
					v65 = xmmword_140B7B240;
					v38 = sub_140141F10(qword_140C63678, (__m128*) & v65);
					v64 = xmmword_140B7B240;
					v43 = v38;
					v39 = sub_140141F10(qword_140C63678, (__m128*) & v64);
					v40 = v49;
					v41 = *(_QWORD*)(*(_QWORD*)(v21 + 8) + 16i64);
					v44 = v39;
					v53 = *(_DWORD*)(v21 + 120);
					v54 = *(_DWORD*)(v21 + 124);
					v52 = 0i64;
					sub_140100F50(v37, v41, v49, (int*)&v52, 1065353216, 1, (_DWORD*)(v21 + 128), &v44, &v43, 0, 0, 0, 0);
					sub_1401429A0(qword_140C63678, v44);
					sub_1401429A0(qword_140C63678, v43);
					v42 = *(int**)(v21 + 40);
					if (v42 == *(int**)(v21 + 48))
					{
						sub_1400B9430((_QWORD*)(v21 + 24), v42, &v47);
					}
					else
					{
						if (v42)
							*(_QWORD*)v42 = v37;
						*(_QWORD*)(v21 + 40) += 8i64;
					}
					if (v40)
						sub_14018B900((__int64)v40, 0);
					if (v36)
						sub_14018B900((__int64)v36, 0);
					v10 = v46;
					v11 = (unsigned int)++v45;
				} while (v11 < (*(__int64(__fastcall**)(__int64*))(*v46 + 16))(v46));
			}
			(*(void(__fastcall**)(__int64*))(*v10 + 8))(v10);
		}
	}
	if (v58)
		sub_14018B900((__int64)v58, 0);
}
// 14010769A: conditional instruction was optimized away because r14.8==0
// 1401076A3: conditional instruction was optimized away because rdi.8==0
// 1401076CB: conditional instruction was optimized away because rdi.8==0
// 140107709: conditional instruction was optimized away because r12.8==0
// 14010770E: conditional instruction was optimized away because rsi.8==0
// 14010772D: conditional instruction was optimized away because rsi.8==0
// 1401075B9: variable 'v9' is possibly undefined
// 1409D59FC: using guessed type wchar_t asc_1409D59FC[3];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;

