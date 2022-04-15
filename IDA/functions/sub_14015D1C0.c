//----- (000000014015D1C0) ----------------------------------------------------
__int64 __fastcall sub_14015D1C0(__int64 a1, __int64 a2, int a3, unsigned int* a4, int a5)
{
	__int64 v7; // r15
	int* v8; // rax
	__int64 v9; // rsi
	unsigned int* v10; // rdi
	unsigned int v11; // eax
	__int64 v12; // rdx
	int v13; // ecx
	__int64 v14; // rdi
	int* v15; // rax
	int* v16; // r14
	int* v17; // rdx
	__int64 v18; // rcx

	*(_QWORD*)a1 = a2;
	*(_WORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 12) = a3;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	if (a5 > 0)
	{
		v7 = (unsigned int)a5;
		do
		{
			v8 = sub_14018B280(200i64, 0);
			if (v8)
				v9 = sub_14015CCD0((__int64)v8, *(_QWORD*)a1, &unk_1409DC31C, &stru_1409DC334);
			else
				v9 = 0i64;
			v10 = (unsigned int*)(v9 + 160);
			if ((unsigned int*)(v9 + 160) != a4)
			{
				sub_1401429A0(qword_140C63678, *v10);
				v11 = *a4;
				*v10 = *a4;
				if ((unsigned __int64)v11 < *(_QWORD*)(qword_140C63678 + 48))
				{
					v12 = 32i64 * v11 + *(_QWORD*)(qword_140C63678 + 40);
					v13 = *(_DWORD*)(v12 + 16);
					if ((unsigned int)(v13 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v12 + 16) = v13 + 1;
				}
			}
			v14 = *(_QWORD*)(a1 + 24);
			v15 = sub_14018DB00(*(_QWORD*)(a1 + 16), v14 + 1, 8i64);
			v16 = v15;
			*(_QWORD*)&v15[2 * v14] = v9;
			v17 = *(int**)(a1 + 16);
			if (v17 != v15)
			{
				sub_1407DB590(v15, v17, 8i64 * *(_QWORD*)(a1 + 24));
				v18 = *(_QWORD*)(a1 + 16);
				if (v18)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
				*(_QWORD*)(a1 + 16) = v16;
			}
			*(_QWORD*)(a1 + 24) = v14 + 1;
			--v7;
		} while (v7);
	}
	return a1;
}
// 1409DC334: using guessed type __m128i stru_1409DC334;
// 140C63678: using guessed type __int64 qword_140C63678;

