//----- (00000001402D16B0) ----------------------------------------------------
void __fastcall sub_1402D16B0(__int64 a1, int* a2, unsigned __int64 a3, unsigned __int64* a4)
{
	__int64 v4; // r12
	unsigned __int64 v6; // rsi
	int* v7; // rbx
	unsigned __int64 v9; // r14
	int* v10; // r15
	unsigned __int64 v11; // r12
	__int64 v12; // rsi
	int* v13; // rdi
	int* i; // rax
	unsigned __int64 v15; // rsi
	__int64* v16; // rax
	unsigned __int64 v17; // r12
	__int64 v18; // r13
	int* v19; // rax
	int* v20; // rdx
	int* v21; // r12
	unsigned __int64 v22; // rdi
	int* v23; // r14
	unsigned __int64 v24; // rdi
	__int64 v25; // rcx
	int* v26; // rdi
	unsigned __int64 v27; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v28; // [rsp+70h] [rbp+18h] BYREF

	if (a3)
	{
		v28 = a3;
		v4 = *(_QWORD*)(a1 + 16);
		v6 = a3;
		v7 = a2;
		if ((*(_QWORD*)(a1 + 24) - v4) >> 3 < a3)
		{
			v16 = (__int64*)&v28;
			v17 = (v4 - *(_QWORD*)(a1 + 8)) >> 3;
			v27 = v17;
			if (v17 >= a3)
				v16 = (__int64*)&v27;
			v18 = 2 * ((unsigned __int64)sub_14018A3E0(8 * (v17 + *v16)) >> 3);
			v19 = sub_14018B280(v18 * 4, 0);
			v20 = *(int**)(a1 + 8);
			v21 = v19;
			v22 = 2 * (((char*)v7 - (char*)v20) >> 3);
			sub_1407DB590(v19, v20, v22 * 4);
			v23 = &v21[v22];
			do
			{
				v23 += 2;
				*((_QWORD*)v23 - 1) = *a4;
				--v6;
			} while (v6);
			v24 = 2 * ((__int64)(*(_QWORD*)(a1 + 16) - (_QWORD)v7) >> 3);
			sub_1407DB590(v23, v7, v24 * 4);
			v25 = *(_QWORD*)(a1 + 8);
			v26 = &v23[v24];
			if (v25)
				sub_14018B900(v25, 0);
			*(_QWORD*)(a1 + 8) = v21;
			*(_QWORD*)(a1 + 24) = &v21[v18];
			*(_QWORD*)(a1 + 16) = v26;
		}
		else
		{
			v9 = *a4;
			v10 = *(int**)(a1 + 16);
			v11 = (v4 - (__int64)a2) >> 3;
			if (v11 <= a3)
			{
				v15 = a3 - v11;
				if (a3 != v11)
					memset64(v10, v9, v15);
				*(_QWORD*)(a1 + 16) += 8 * v15;
				sub_1407DB590(*(int**)(a1 + 16), a2, ((char*)v10 - (char*)a2) & 0xFFFFFFFFFFFFFFF8ui64);
				for (*(_QWORD*)(a1 + 16) += 8 * v11; v7 != v10; v7 += 2)
					*(_QWORD*)v7 = v9;
			}
			else
			{
				v12 = 2 * a3;
				v13 = &v10[-2 * a3];
				sub_1407DB590(*(int**)(a1 + 16), v13, 8 * a3);
				*(_QWORD*)(a1 + 16) += v12 * 4;
				sub_1407DB590(&v10[-2 * (((char*)v13 - (char*)v7) >> 3)], v7, 8 * (((char*)v13 - (char*)v7) >> 3));
				for (i = &v7[v12]; v7 != i; v7 += 2)
					*(_QWORD*)v7 = v9;
			}
		}
	}
}
// 1402D1844: conditional instruction was optimized away because rsi.8!=0

