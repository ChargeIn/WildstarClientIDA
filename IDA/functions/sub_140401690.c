//----- (0000000140401690) ----------------------------------------------------
__int64 __fastcall sub_140401690(__int64 a1, int* a2, __int64 a3)
{
	int* v4; // rax
	__int64 v5; // rbp
	int v6; // esi
	int** v7; // rbx
	int i; // edi
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	__int64 v12; // rdi
	int** v13; // rbx
	int* v14; // rax
	int* v15; // rax
	__int16* v16; // rax
	int* v17; // rdx
	__int64 v18; // rax
	__int64 v19; // r15
	unsigned __int64* v20; // rbx
	__int64 v21; // rsi
	unsigned __int64 v22; // rcx
	int* v23; // rdx
	__int64 v24; // rax
	__int64 v25; // rcx
	__int16* v26; // rax
	int* v27; // rdx
	__int64 v28; // rax
	__int64 v29; // rcx
	__int16* v30; // rax
	int* v31; // rdx
	__int64 v32; // rax
	__int64 v33; // rcx
	int* v34; // rbx
	__int16* v35; // rax
	int* v36; // rdx
	__int64 v37; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)(a1 + 16) = a3;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 32) = v4;
	*(_QWORD*)(a1 + 40) = v4;
	*(_QWORD*)(a1 + 48) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	v5 = a1 + 56;
	v6 = 1;
	v7 = (int**)(a1 + 72);
	for (i = 1; i >= 0; --i)
	{
		*(v7 - 1) = 0i64;
		*v7 = 0i64;
		v7[1] = 0i64;
		v9 = sub_14018B280(16i64, 0);
		*(v7 - 1) = v9;
		*v7 = v9;
		v7[1] = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		v7 += 4;
	}
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 128) = v10;
	*(_QWORD*)(a1 + 136) = v10;
	*(_QWORD*)(a1 + 144) = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	v11 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 160) = v11;
	*(_QWORD*)(a1 + 168) = v11;
	*(_QWORD*)(a1 + 176) = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	v12 = a1 + 184;
	v13 = (int**)(a1 + 200);
	do
	{
		*(v13 - 1) = 0i64;
		*v13 = 0i64;
		v13[1] = 0i64;
		v14 = sub_14018B280(16i64, 0);
		*(v13 - 1) = v14;
		*v13 = v14;
		v13[1] = v14 + 4;
		if (v14)
			*(_WORD*)v14 = 0;
		v13 += 4;
		--v6;
	} while (v6 >= 0);
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	v15 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 256) = v15;
	*(_QWORD*)(a1 + 264) = v15;
	*(_QWORD*)(a1 + 272) = v15 + 4;
	if (v15)
		*(_WORD*)v15 = 0;
	*(_DWORD*)(a1 + 280) = -1;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_QWORD*)(a1 + 304) = 0i64;
	v16 = sub_14034BDD0((__int64)(v15 + 4), a2[8]);
	v17 = (int*)&unk_1409E84A4;
	if (v16)
		v17 = (int*)v16;
	v18 = 0i64;
	if (*(_WORD*)v17)
	{
		do
			++v18;
		while (*((_WORD*)v17 + v18));
	}
	sub_14001C480(a1 + 24, v17, (int*)((char*)v17 + 2 * v18));
	v19 = 2i64;
	v20 = (unsigned __int64*)(a2 + 4);
	v21 = 2i64;
	do
	{
		v22 = *v20;
		if (*v20)
		{
			if (v22 <= qword_140C3FE70)
				v23 = (int*)(v22 + qword_140C3FE68);
			else
				v23 = 0i64;
		}
		else
		{
			v23 = 0i64;
		}
		v24 = 0i64;
		if (*(_WORD*)v23)
		{
			do
				++v24;
			while (*((_WORD*)v23 + v24));
		}
		sub_14001C480(v5, v23, (int*)((char*)v23 + 2 * v24));
		++v20;
		v5 += 32i64;
		--v21;
	} while (v21);
	v26 = sub_14034BDD0(v25, a2[9]);
	v27 = (int*)&unk_1409E8484;
	if (v26)
		v27 = (int*)v26;
	v28 = 0i64;
	if (*(_WORD*)v27)
	{
		do
			++v28;
		while (*((_WORD*)v27 + v28));
	}
	sub_14001C480(a1 + 120, v27, (int*)((char*)v27 + 2 * v28));
	v30 = sub_14034BDD0(v29, a2[10]);
	v31 = (int*)&unk_1409E8464;
	if (v30)
		v31 = (int*)v30;
	v32 = 0i64;
	if (*(_WORD*)v31)
	{
		do
			++v32;
		while (*((_WORD*)v31 + v32));
	}
	sub_14001C480(a1 + 152, v31, (int*)((char*)v31 + 2 * v32));
	v34 = a2 + 11;
	do
	{
		v35 = sub_14034BDD0(v33, *v34);
		v36 = (int*)&unk_1409E8424;
		if (v35)
			v36 = (int*)v35;
		v37 = 0i64;
		if (*(_WORD*)v36)
		{
			do
				++v37;
			while (*((_WORD*)v36 + v37));
		}
		sub_14001C480(v12, v36, (int*)((char*)v36 + 2 * v37));
		++v34;
		v12 += 32i64;
		--v19;
	} while (v19);
	return a1;
}
// 14040190B: variable 'v25' is possibly undefined
// 14040193F: variable 'v29' is possibly undefined
// 140401982: variable 'v33' is possibly undefined
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

