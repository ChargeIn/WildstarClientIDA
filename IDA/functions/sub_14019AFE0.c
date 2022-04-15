//----- (000000014019AFE0) ----------------------------------------------------
_QWORD* __fastcall sub_14019AFE0(__int64 a1, _QWORD* a2, int a3)
{
	__int64 v4; // rbx
	unsigned __int64 v5; // r12
	__int16* v6; // r13
	int v7; // edx
	unsigned __int16* v8; // rcx
	__int64 v9; // r8
	unsigned __int64 v10; // rax
	int* v12; // rax
	__int64 v13; // rdi
	__int64 v14; // r14
	int* v15; // rax
	__int64 v16; // rsi
	_WORD* v17; // rbx
	int* v18; // rax
	int* v19; // rdi
	__int16 v20; // r15
	__int64* v21; // rax
	unsigned __int64 v22; // rdx
	__int64 v23; // rcx
	__int64* v24; // rax
	__int64 v25; // r12
	int* v26; // rax
	__int64 v27; // r14
	int* v28; // rbx
	__int64 v29; // rdx
	__int64 v30; // rax
	__int64 v31; // rax
	bool v32; // zf
	wchar_t* v33; // r8
	wchar_t* v34; // rdx
	__int64 v35; // rax
	__int64 v36; // rax
	__int64 v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	unsigned __int64 v40; // rdx
	__int64 v41; // rcx
	__int64* v42; // rax
	__int64 v43; // r15
	int* v44; // rax
	int* v45; // r14
	int* v46; // rbx
	__int64 v47; // rdx
	_WORD* v48; // rax
	__int64 v49; // rcx
	__int64 v50; // rax
	unsigned __int64 v51; // [rsp+20h] [rbp-38h]
	__int64 v52; // [rsp+28h] [rbp-30h] BYREF
	_WORD* v53; // [rsp+30h] [rbp-28h]
	int* v54; // [rsp+38h] [rbp-20h]
	_WORD* v55; // [rsp+40h] [rbp-18h]
	__int64 v56; // [rsp+90h] [rbp+38h] BYREF
	_QWORD* v57; // [rsp+98h] [rbp+40h]
	unsigned __int64 v58; // [rsp+A8h] [rbp+50h] BYREF

	v57 = a2;
	v4 = a1 + 32 * (a3 + 1i64);
	v5 = *(_QWORD*)(v4 + 16);
	v6 = *(__int16**)(v4 + 8);
	v51 = v5;
	if ((unsigned __int64)v6 < v5)
	{
		v7 = 0;
		v8 = *(unsigned __int16**)(v4 + 8);
		v9 = 0x500002600i64;
		do
		{
			if (v7)
				goto LABEL_10;
			v10 = *v8;
			if ((unsigned int)v10 <= 0x22 && _bittest64(&v9, v10))
				v7 = 1;
			++v8;
		} while ((unsigned __int64)v8 < v5);
		if (!v7)
		{
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			sub_14001C1B0(a2, *(int**)(v4 + 8), *(_QWORD*)(v4 + 16));
			return a2;
		}
	}
LABEL_10:
	v12 = sub_14018B280(16i64, 0);
	v13 = (__int64)v12;
	if (v12)
		*(_WORD*)v12 = 0;
	v14 = 2 * ((__int64)(*(_QWORD*)(v4 + 16) - *(_QWORD*)(v4 + 8)) >> 1) + 6;
	v15 = sub_14018B280(v14, 0);
	v16 = (__int64)v15;
	if (v15)
		*(_WORD*)v15 = 0;
	if (v13)
		sub_14018B900(v13, 0);
	v53 = (_WORD*)v16;
	v17 = (_WORD*)v16;
	v55 = (_WORD*)(v14 + v16);
	if (v16 + 2 == v14 + v16)
	{
		v18 = sub_14018B280(4i64, 0);
		v17 = v18;
		if (v18)
			*(_WORD*)v18 = 0;
		if (v16)
			sub_14018B900(v16, 0);
		v16 = (__int64)v17;
		v53 = v17;
		v55 = v17 + 2;
	}
	v19 = (int*)(v17 + 1);
	if (v17 != (_WORD*)-2i64)
		*(_WORD*)v19 = 0;
	v54 = (int*)(v17 + 1);
	for (*v17 = 34; (unsigned __int64)v6 < v5; ++v6)
	{
		v20 = *v6;
		switch (*v6)
		{
		case 9:
			v38 = 0i64;
			do
				v32 = aT[++v38] == 0;
			while (!v32);
			v33 = &aT[v38];
			v34 = L"\\t";
			break;
		case 10:
			v37 = 0i64;
			do
				v32 = aN[++v37] == 0;
			while (!v32);
			v33 = &aN[v37];
			v34 = L"\\n";
			break;
		case 13:
			v36 = 0i64;
			do
				v32 = aR[++v36] == 0;
			while (!v32);
			v33 = &aR[v36];
			v34 = L"\\r";
			break;
		case 34:
			v35 = 0i64;
			do
				v32 = asc_1409E3DDC[++v35] == 0;
			while (!v32);
			v33 = &asc_1409E3DDC[v35];
			v34 = L"\\\"";
			break;
		case 92:
			v31 = 0i64;
			do
				v32 = asc_1409E3F8C[++v31] == 0;
			while (!v32);
			v33 = &asc_1409E3F8C[v31];
			v34 = L"\\\\";
			break;
		default:
			if ((_WORD*)((char*)v19 + 2) == v55)
			{
				v56 = 1i64;
				v21 = &v56;
				v22 = ((__int64)v19 - v16) >> 1;
				v58 = v22;
				if (v22)
					v21 = (__int64*)&v58;
				v23 = *v21;
				v56 = ((__int64)v19 - v16) >> 1;
				v24 = &v56;
				v58 = v22 + v23;
				if (v22 + v23 >= v22)
					v24 = (__int64*)&v58;
				v25 = 2 * (*v24 + 1);
				v26 = sub_14018B280(v25, 0);
				v27 = (__int64)v26;
				v28 = v26;
				if ((int*)v16 != v19)
				{
					v29 = v16 - (_QWORD)v26;
					do
					{
						if (v28)
							*(_WORD*)v28 = *(_WORD*)((char*)v28 + v29);
						v28 = (int*)((char*)v28 + 2);
					} while ((int*)((char*)v28 + v29) != v19);
				}
				if (v28)
					*(_WORD*)v28 = 0;
				if (v16)
					sub_14018B900(v16, 0);
				v30 = v27 + v25;
				v5 = v51;
				v16 = v27;
				v53 = (_WORD*)v27;
				v19 = v28;
				v55 = (_WORD*)v30;
			}
			if (v19 != (int*)-2i64)
				*((_WORD*)v19 + 1) = 0;
			*(_WORD*)v19 = v20;
			v54 = (int*)((char*)v19 + 2);
			v19 = (int*)((char*)v19 + 2);
			continue;
		}
		sub_14001C310(&v52, (int*)v34, (int*)v33);
		v19 = v54;
		v16 = (__int64)v53;
	}
	if ((_WORD*)((char*)v19 + 2) == v55)
	{
		v56 = 1i64;
		v39 = &v56;
		v40 = ((__int64)v19 - v16) >> 1;
		v58 = v40;
		if (v40)
			v39 = (__int64*)&v58;
		v41 = *v39;
		v56 = ((__int64)v19 - v16) >> 1;
		v42 = &v56;
		v58 = v40 + v41;
		if (v40 + v41 >= v40)
			v42 = (__int64*)&v58;
		v43 = 2 * (*v42 + 1);
		v44 = sub_14018B280(v43, 0);
		v45 = v44;
		v46 = v44;
		if ((int*)v16 != v19)
		{
			v47 = v16 - (_QWORD)v44;
			do
			{
				if (v46)
					*(_WORD*)v46 = *(_WORD*)((char*)v46 + v47);
				v46 = (int*)((char*)v46 + 2);
			} while ((int*)((char*)v46 + v47) != v19);
		}
		if (v46)
			*(_WORD*)v46 = 0;
		if (v16)
			sub_14018B900(v16, 0);
		v16 = (__int64)v45;
		v19 = v46;
		v55 = (_WORD*)((char*)v45 + v43);
	}
	v48 = (_WORD*)v19 + 1;
	if (v19 != (int*)-2i64)
		*v48 = 0;
	*(_WORD*)v19 = 34;
	v49 = (__int64)v57;
	v57[2] = v48;
	v50 = (__int64)v55;
	*(_QWORD*)(v49 + 8) = v16;
	*(_QWORD*)(v49 + 24) = v50;
	return (_QWORD*)v49;
}
// 1409E3C2C: using guessed type wchar_t aR[3];
// 1409E3C74: using guessed type wchar_t aT[3];
// 1409E3DDC: using guessed type wchar_t asc_1409E3DDC[3];
// 1409E3EB4: using guessed type wchar_t aN[3];
// 1409E3F8C: using guessed type wchar_t asc_1409E3F8C[3];

