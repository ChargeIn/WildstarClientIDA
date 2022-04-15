//----- (00000001405DC130) ----------------------------------------------------
__int64 __fastcall sub_1405DC130(__int64 a1, float* a2, _QWORD* a3, __int64 a4)
{
	__int64 v4; // r12
	__int64 v5; // r14
	__int64* v6; // r15
	int* v10; // rbp
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	int* v15; // rbp
	__int64 v16; // rbx
	int* v17; // rax
	int* v18; // rdi
	unsigned __int64 v19; // rbx
	int* v20; // rbp
	__int64 v21; // rbx
	int* v22; // rax
	int* v23; // rdi
	unsigned __int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rax
	float v27; // xmm1_4
	__int64 v29; // [rsp+20h] [rbp-28h]
	__int64 v30; // [rsp+28h] [rbp-20h]
	__int64 v31; // [rsp+30h] [rbp-18h]

	*(_DWORD*)a1 = a4;
	v6 = (__int64*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = 0i64;
	v30 = v4;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)a2;
	v29 = v5;
	*(_QWORD*)(a1 + 24) = *((_QWORD*)a2 + 1);
	*(_QWORD*)(a1 + 32) = *((_QWORD*)a2 + 2);
	*(_QWORD*)(a1 + 40) = *((_QWORD*)a2 + 3);
	*(_QWORD*)(a1 + 48) = *((_QWORD*)a2 + 4);
	*(_QWORD*)(a1 + 56) = *((_QWORD*)a2 + 5);
	*(_QWORD*)(a1 + 64) = *((_QWORD*)a2 + 6);
	*(_QWORD*)(a1 + 72) = *((_QWORD*)a2 + 7);
	v10 = (int*)*((_QWORD*)a2 + 2);
	if (v10)
	{
		v11 = 0i64;
		if (*(_WORD*)v10)
		{
			do
				++v11;
			while (*((_WORD*)v10 + v11));
		}
		v12 = sub_14018B280(2 * v11 + 18, 0);
		if (v12)
		{
			*(_QWORD*)v12 = off_140B55060;
			*((_QWORD*)v12 + 1) = v11;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = v12 + 4;
		v14 = 2 * v11;
		sub_1407DB590(v12 + 4, v10, v14);
		*(_WORD*)((char*)v13 + v14) = 0;
		*(_QWORD*)(a1 + 80) = v13;
	}
	else
	{
		*(_QWORD*)(a1 + 80) = 0i64;
	}
	v15 = (int*)*((_QWORD*)a2 + 4);
	if (v15)
	{
		v16 = 0i64;
		if (*(_WORD*)v15)
		{
			do
				++v16;
			while (*((_WORD*)v15 + v16));
		}
		v17 = sub_14018B280(2 * v16 + 18, 0);
		if (v17)
		{
			*(_QWORD*)v17 = off_140B55060;
			*((_QWORD*)v17 + 1) = v16;
		}
		else
		{
			v17 = 0i64;
		}
		v18 = v17 + 4;
		v19 = 2 * v16;
		sub_1407DB590(v17 + 4, v15, v19);
		*(_WORD*)((char*)v18 + v19) = 0;
		*(_QWORD*)(a1 + 88) = v18;
	}
	else
	{
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	v20 = (int*)*((_QWORD*)a2 + 5);
	if (v20)
	{
		v21 = 0i64;
		if (*(_WORD*)v20)
		{
			do
				++v21;
			while (*((_WORD*)v20 + v21));
		}
		v22 = sub_14018B280(2 * v21 + 18, 0);
		if (v22)
		{
			*((_QWORD*)v22 + 1) = v21;
			*(_QWORD*)v22 = off_140B55060;
		}
		else
		{
			v22 = 0i64;
		}
		v23 = v22 + 4;
		v24 = 2 * v21;
		sub_1407DB590(v22 + 4, v20, v24);
		*(_WORD*)((char*)v23 + v24) = 0;
		*(_QWORD*)(a1 + 96) = v23;
	}
	else
	{
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	v25 = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 48) = v25;
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a1 + 96);
	if (!*(_QWORD*)(a1 + 120))
	{
		*(_QWORD*)(a1 + 120) = a3;
		*(_QWORD*)(a1 + 128) = *a3;
		*a3 = a1;
		v26 = *(_QWORD*)(a1 + 128);
		if (v26)
			*(_QWORD*)(v26 + 120) = a1 + 128;
	}
	v27 = a2[6];
	if (v27 == 0.0)
	{
		*v6 = 0i64;
		return a1;
	}
	else
	{
		if (v6)
			sub_1401E82F0(v6, v27);
		sub_1405DCEE0((unsigned int*)a1, 1, (__int64)a3, a4, v29, v30, v31);
		return a1;
	}
}
// 1405DC130: could not find valid save-restore pair for r12
// 1405DC130: could not find valid save-restore pair for r14
// 1405DC159: variable 'v4' is possibly undefined
// 1405DC166: variable 'v5' is possibly undefined
// 1405DC38A: variable 'a3' is possibly undefined
// 1405DC38A: variable 'a4' is possibly undefined
// 1405DC38A: variable 'v31' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

