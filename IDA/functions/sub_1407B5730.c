//----- (00000001407B5730) ----------------------------------------------------
__int64 __fastcall sub_1407B5730(__int64 a1, int** a2)
{
	int* v2; // r14
	int* v3; // rsi
	__int64 v4; // rdi
	__int64 v5; // rbx
	char* v6; // rdi
	char* v7; // rax
	__int64 i; // rbx
	__int64 v9; // rax
	bool v10; // zf
	unsigned __int64 v11; // rbx
	char* v12; // rax
	unsigned __int64 v13; // rbx
	char* v14; // rax
	__int64 v15; // r14
	__int64* v16; // rax
	__int64 v17; // rcx
	const wchar_t* v18; // rax
	__int64 v19; // rax
	int* v20; // r13
	int* v21; // r12
	int* v22; // r15
	__int64 v23; // rbx
	__int64 v24; // rax
	unsigned __int64 v25; // rbx
	int* v26; // rbx
	int* v27; // rbx
	unsigned __int64 v28; // r14
	char* v29; // rax
	unsigned __int64 v30; // rbx
	char* v31; // rax
	__int64 v32; // r14
	__int64* v33; // rax
	__int64 v34; // rcx
	const wchar_t* v35; // rax
	__int64 v36; // rax
	int* v37; // r13
	int* v38; // r12
	int* v39; // r15
	__int64 v40; // rbx
	__int64 v41; // rax
	unsigned __int64 v42; // rbx
	int* v43; // rbx
	int* v44; // rbx
	unsigned __int64 v45; // r14
	char* v46; // rax
	unsigned __int64 v47; // rbx
	char* v48; // rax
	__int64 v49; // r14
	__int64* v50; // rax
	__int64 v51; // rcx
	const wchar_t* v52; // rax
	__int64 v53; // rax
	int* v54; // r13
	int* v55; // r12
	int* v56; // r15
	__int64 v57; // rbx
	__int64 v58; // rax
	unsigned __int64 v59; // rbx
	int* v60; // rbx
	int* v61; // rbx
	unsigned __int64 v62; // r14
	char* v63; // rax
	unsigned __int64 v64; // rbx
	char* v65; // rax
	__int64 v66; // r14
	__int64* v67; // rax
	__int64 v68; // rcx
	const wchar_t* v69; // rax
	__int64 v70; // rax
	int* v71; // r13
	int* v72; // r12
	int* v73; // r15
	__int64 v74; // rbx
	__int64 v75; // rax
	unsigned __int64 v76; // rbx
	int* v77; // rbx
	int* v78; // rbx
	unsigned __int64 v79; // r14
	char* v80; // rax
	char* v81; // rax
	__int64 j; // rbx
	__int64 v83; // rax
	__int64 v84; // rdi
	unsigned __int64 v85; // rbx
	char* v86; // rax
	unsigned int v87; // edi
	__int64 v88; // rax
	__int64 v89; // rax
	int* v90; // rbx
	int v91; // eax
	__int64 v93; // [rsp+30h] [rbp-50h] BYREF
	int* v94; // [rsp+38h] [rbp-48h]
	char* v95; // [rsp+40h] [rbp-40h]
	__int64 v96; // [rsp+48h] [rbp-38h]
	int v97; // [rsp+A0h] [rbp+20h]
	unsigned __int64 v99; // [rsp+B0h] [rbp+30h] BYREF
	__int64 v100; // [rsp+B8h] [rbp+38h] BYREF

	v2 = *(int**)(a1 + 24);
	v3 = 0i64;
	v4 = (__int64)(*(_QWORD*)(a1 + 32) - (_QWORD)v2) >> 1;
	v94 = 0i64;
	v96 = 0i64;
	if ((unsigned __int64)(v4 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v4 + 1), 0);
		v94 = v3;
		v96 = (__int64)v3 + 2 * v4 + 2;
	}
	v5 = 2 * v4;
	sub_1407DB590(v3, v2, 2 * v4);
	v6 = (char*)v3 + v5;
	v95 = (char*)v3 + v5;
	if ((int*)((char*)v3 + v5))
		*(_WORD*)v6 = 0;
	if (v5 >> 1)
	{
		HIWORD(v97) = 92;
		v7 = (char*)sub_14002C8A0(v3, (__int64)v3 + v5, v97);
		if (v7 != v6)
		{
			for (i = (v7 - (char*)v3) >> 1; i != -1; i = (v12 - (char*)v3) >> 1)
			{
				v9 = 0i64;
				do
					v10 = *((_WORD*)&unk_1409FB414 + ++v9) == 0;
				while (!v10);
				sub_1401905C0(
					&v93,
					(int*)((char*)v3 + 2 * i),
					(int*)&unk_1409FB414,
					(int*)((char*)&unk_1409FB414 + 2 * v9));
				v6 = v95;
				v3 = v94;
				v11 = i + 2;
				if (v11 >= (v95 - (char*)v94) >> 1)
					break;
				HIWORD(v97) = 92;
				v12 = (char*)sub_14002C8A0((_WORD*)v94 + v11, (__int64)v95, v97);
				if (v12 == v6)
					break;
			}
		}
	}
	v13 = (v6 - (char*)v3) >> 1;
	if (v13)
	{
		HIWORD(v97) = 10;
		v14 = (char*)sub_14002C8A0(v3, (__int64)v6, v97);
		if (v14 != v6)
		{
			v15 = (v14 - (char*)v3) >> 1;
			if (v15 != -1)
			{
				v100 = 1i64;
				do
				{
					v16 = (__int64*)&v99;
					v99 = v13 - v15;
					if (v13 != v15)
						v16 = &v100;
					v17 = *v16;
					v18 = L"\\n";
					do
					{
						v10 = v18[1] == 0;
						++v18;
					} while (!v10);
					v19 = 0i64;
					do
						v10 = aN_1[++v19] == 0;
					while (!v10);
					v20 = (int*)&aN_1[v19];
					v21 = (int*)((char*)v3 + 2 * v15);
					v22 = (int*)((char*)v3 + 2 * v17 + 2 * v15);
					v23 = (2 * v19) >> 1;
					v24 = ((char*)v22 - (char*)v21) >> 1;
					if (v24 < v23)
					{
						v27 = (int*)&aN_1[v24];
						sub_1407DB590(v21, (int*)L"\\n", 2 * ((2 * v24) >> 1));
						sub_1401905C0(&v93, v22, v27, v20);
						v6 = v95;
						v3 = v94;
					}
					else
					{
						v25 = 2 * v23;
						sub_1407DB590(v21, (int*)L"\\n", v25);
						v26 = (int*)((char*)v21 + v25);
						if (v26 != v22)
						{
							sub_1407DB590(v26, v22, 2 * ((v6 - (char*)v22) >> 1) + 2);
							v6 -= 2 * (((char*)v22 - (char*)v26) >> 1);
							v95 = v6;
						}
					}
					v28 = v15 + 2;
					v13 = (v6 - (char*)v3) >> 1;
					if (v28 >= v13)
						break;
					HIWORD(v97) = 10;
					v29 = (char*)sub_14002C8A0((_WORD*)v3 + v28, (__int64)v6, v97);
					if (v29 == v6)
						break;
					v15 = (v29 - (char*)v3) >> 1;
				} while (v15 != -1);
			}
		}
	}
	v30 = (v6 - (char*)v3) >> 1;
	if (v30)
	{
		HIWORD(v97) = 13;
		v31 = (char*)sub_14002C8A0(v3, (__int64)v6, v97);
		if (v31 != v6)
		{
			v32 = (v31 - (char*)v3) >> 1;
			if (v32 != -1)
			{
				v100 = 1i64;
				do
				{
					v33 = (__int64*)&v99;
					v99 = v30 - v32;
					if (v30 != v32)
						v33 = &v100;
					v34 = *v33;
					v35 = L"\\r";
					do
					{
						v10 = v35[1] == 0;
						++v35;
					} while (!v10);
					v36 = 0i64;
					do
						v10 = aR_0[++v36] == 0;
					while (!v10);
					v37 = (int*)&aR_0[v36];
					v38 = (int*)((char*)v3 + 2 * v32);
					v39 = (int*)((char*)v3 + 2 * v34 + 2 * v32);
					v40 = (2 * v36) >> 1;
					v41 = ((char*)v39 - (char*)v38) >> 1;
					if (v41 < v40)
					{
						v44 = (int*)&aR_0[v41];
						sub_1407DB590(v38, (int*)L"\\r", 2 * ((2 * v41) >> 1));
						sub_1401905C0(&v93, v39, v44, v37);
						v6 = v95;
						v3 = v94;
					}
					else
					{
						v42 = 2 * v40;
						sub_1407DB590(v38, (int*)L"\\r", v42);
						v43 = (int*)((char*)v38 + v42);
						if (v43 != v39)
						{
							sub_1407DB590(v43, v39, 2 * ((v6 - (char*)v39) >> 1) + 2);
							v6 -= 2 * (((char*)v39 - (char*)v43) >> 1);
							v95 = v6;
						}
					}
					v45 = v32 + 2;
					v30 = (v6 - (char*)v3) >> 1;
					if (v45 >= v30)
						break;
					HIWORD(v97) = 13;
					v46 = (char*)sub_14002C8A0((_WORD*)v3 + v45, (__int64)v6, v97);
					if (v46 == v6)
						break;
					v32 = (v46 - (char*)v3) >> 1;
				} while (v32 != -1);
			}
		}
	}
	v47 = (v6 - (char*)v3) >> 1;
	if (v47)
	{
		HIWORD(v97) = 9;
		v48 = (char*)sub_14002C8A0(v3, (__int64)v6, v97);
		if (v48 != v6)
		{
			v49 = (v48 - (char*)v3) >> 1;
			if (v49 != -1)
			{
				v100 = 1i64;
				do
				{
					v50 = (__int64*)&v99;
					v99 = v47 - v49;
					if (v47 != v49)
						v50 = &v100;
					v51 = *v50;
					v52 = L"\\t";
					do
					{
						v10 = v52[1] == 0;
						++v52;
					} while (!v10);
					v53 = 0i64;
					do
						v10 = aT_7[++v53] == 0;
					while (!v10);
					v54 = (int*)&aT_7[v53];
					v55 = (int*)((char*)v3 + 2 * v49);
					v56 = (int*)((char*)v3 + 2 * v51 + 2 * v49);
					v57 = (2 * v53) >> 1;
					v58 = ((char*)v56 - (char*)v55) >> 1;
					if (v58 < v57)
					{
						v61 = (int*)&aT_7[v58];
						sub_1407DB590(v55, (int*)L"\\t", 2 * ((2 * v58) >> 1));
						sub_1401905C0(&v93, v56, v61, v54);
						v6 = v95;
						v3 = v94;
					}
					else
					{
						v59 = 2 * v57;
						sub_1407DB590(v55, (int*)L"\\t", v59);
						v60 = (int*)((char*)v55 + v59);
						if (v60 != v56)
						{
							sub_1407DB590(v60, v56, 2 * ((v6 - (char*)v56) >> 1) + 2);
							v6 -= 2 * (((char*)v56 - (char*)v60) >> 1);
							v95 = v6;
						}
					}
					v62 = v49 + 2;
					v47 = (v6 - (char*)v3) >> 1;
					if (v62 >= v47)
						break;
					HIWORD(v97) = 9;
					v63 = (char*)sub_14002C8A0((_WORD*)v3 + v62, (__int64)v6, v97);
					if (v63 == v6)
						break;
					v49 = (v63 - (char*)v3) >> 1;
				} while (v49 != -1);
			}
		}
	}
	v64 = (v6 - (char*)v3) >> 1;
	if (v64)
	{
		HIWORD(v97) = 8;
		v65 = (char*)sub_14002C8A0(v3, (__int64)v6, v97);
		if (v65 != v6)
		{
			v66 = (v65 - (char*)v3) >> 1;
			if (v66 != -1)
			{
				v100 = 1i64;
				do
				{
					v67 = (__int64*)&v99;
					v99 = v64 - v66;
					if (v64 != v66)
						v67 = &v100;
					v68 = *v67;
					v69 = L"\\b";
					do
					{
						v10 = v69[1] == 0;
						++v69;
					} while (!v10);
					v70 = 0i64;
					do
						v10 = aB_7[++v70] == 0;
					while (!v10);
					v71 = (int*)&aB_7[v70];
					v72 = (int*)((char*)v3 + 2 * v66);
					v73 = (int*)((char*)v3 + 2 * v68 + 2 * v66);
					v74 = (2 * v70) >> 1;
					v75 = ((char*)v73 - (char*)v72) >> 1;
					if (v75 < v74)
					{
						v78 = (int*)&aB_7[v75];
						sub_1407DB590(v72, (int*)L"\\b", 2 * ((2 * v75) >> 1));
						sub_1401905C0(&v93, v73, v78, v71);
						v6 = v95;
						v3 = v94;
					}
					else
					{
						v76 = 2 * v74;
						sub_1407DB590(v72, (int*)L"\\b", v76);
						v77 = (int*)((char*)v72 + v76);
						if (v77 != v73)
						{
							sub_1407DB590(v77, v73, 2 * ((v6 - (char*)v73) >> 1) + 2);
							v6 -= 2 * (((char*)v73 - (char*)v77) >> 1);
							v95 = v6;
						}
					}
					v79 = v66 + 2;
					v64 = (v6 - (char*)v3) >> 1;
					if (v79 >= v64)
						break;
					HIWORD(v97) = 8;
					v80 = (char*)sub_14002C8A0((_WORD*)v3 + v79, (__int64)v6, v97);
					if (v80 == v6)
						break;
					v66 = (v80 - (char*)v3) >> 1;
				} while (v66 != -1);
			}
		}
	}
	if ((v6 - (char*)v3) >> 1)
	{
		HIWORD(v97) = 34;
		v81 = (char*)sub_14002C8A0(v3, (__int64)v6, v97);
		if (v81 != v6)
		{
			for (j = (v81 - (char*)v3) >> 1; j != -1; j = (v86 - (char*)v3) >> 1)
			{
				v83 = 0i64;
				do
					v10 = *((_WORD*)&unk_1409FB44C + ++v83) == 0;
				while (!v10);
				sub_1401905C0(
					&v93,
					(int*)((char*)v3 + 2 * j),
					(int*)&unk_1409FB44C,
					(int*)((char*)&unk_1409FB44C + 2 * v83));
				v84 = (__int64)v95;
				v3 = v94;
				v85 = j + 2;
				if (v85 >= (v95 - (char*)v94) >> 1)
					break;
				HIWORD(v97) = 34;
				v86 = (char*)sub_14002C8A0((_WORD*)v94 + v85, (__int64)v95, v97);
				if (v86 == (char*)v84)
					break;
			}
		}
	}
	v87 = 0;
	v88 = 0i64;
	do
		v10 = *((_WORD*)&unk_1409FB52C + ++v88) == 0;
	while (!v10);
	sub_1401905C0(&v93, v3, (int*)&unk_1409FB52C, (int*)((char*)&unk_1409FB52C + 2 * v88));
	v89 = 0i64;
	do
		v10 = *((_WORD*)&unk_1409FB554 + ++v89) == 0;
	while (!v10);
	sub_14001C310(&v93, (int*)&unk_1409FB554, (int*)((char*)&unk_1409FB554 + 2 * v89));
	v90 = v94;
	v91 = sub_1401C5740(v94, 2 * ((v95 - (char*)v94) >> 1) + 2, a2);
	if (v91 < 0)
		v87 = v91;
	if (v90)
		sub_14018B900((__int64)v90, 0);
	return v87;
}
// 140B53AEC: using guessed type wchar_t aN_1[3];
// 140B53AF4: using guessed type wchar_t aR_0[3];
// 140B53AFC: using guessed type wchar_t aT_7[3];
// 140B53B04: using guessed type wchar_t aB_7[3];

