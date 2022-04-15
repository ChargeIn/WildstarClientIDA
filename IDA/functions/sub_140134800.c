//----- (0000000140134800) ----------------------------------------------------
void __fastcall sub_140134800(__int64 a1, int* a2, int a3, char a4, char a5)
{
	__int64 v8; // rax
	__int64 v9; // rdx
	int v10; // r8d
	__int64 v11; // rcx
	unsigned __int64 v12; // r8
	__int64 v13; // rbp
	__int64 v14; // rsi
	__int64 v15; // rcx
	unsigned __int64 v16; // r8
	__int64 v17; // rbp
	__int64 v18; // rbx
	__int64 v19; // rcx
	unsigned __int64 v20; // r8
	__int64 v21; // rbp
	__int64 v22; // rsi
	int* v23; // rcx
	unsigned __int64 v24; // r8
	__int64 v25; // rbp
	__int64 v26; // rsi
	__int64 v27; // rdi
	int* v28; // rcx
	unsigned __int64 v29; // r8
	__int64 v30; // rsi
	__int64 v31; // rbx

	if (*(_QWORD*)a1)
	{
		v8 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v8;
			while (*((_WORD*)a2 + v8));
		}
		sub_14001C480(a1 + 24, a2, (int*)((char*)a2 + 2 * v8));
		v10 = *(_DWORD*)(a1 + 56);
		if (v10 != -2)
			sub_1400579E0(*(_QWORD*)(*(_QWORD*)a1 + 400i64), v9, v10);
		*(_DWORD*)(a1 + 56) = a3;
		if (a4)
		{
			v11 = *(_QWORD*)(a1 + 72);
			v12 = *(_QWORD*)(a1 + 80) - v11;
			if (v12 < 6)
			{
				sub_1407DB590((int*)v11, &dword_1409D8D1C, v12);
				sub_14001B050(
					(_QWORD*)(a1 + 64),
					(int*)((char*)&dword_1409D8D1C + *(_QWORD*)(a1 + 80) - *(_QWORD*)(a1 + 72)),
					(int*)&unk_1409D8D22);
			}
			else
			{
				*(_DWORD*)v11 = 1867279951;
				*(_WORD*)(v11 + 4) = 25697;
				v13 = *(_QWORD*)(a1 + 80);
				v14 = *(_QWORD*)(a1 + 72) + 6i64;
				if (v14 != v13)
				{
					sub_1407DB590((int*)(*(_QWORD*)(a1 + 72) + 6i64), *(int**)(a1 + 80), 1ui64);
					*(_QWORD*)(a1 + 80) += v14 - v13;
				}
			}
			v15 = *(_QWORD*)(a1 + 104);
			v16 = *(_QWORD*)(a1 + 112) - v15;
			if (v16 < 9)
			{
				sub_1407DB590((int*)v15, (int*)&qword_140A22AB8, v16);
				sub_14001B050(
					(_QWORD*)(a1 + 96),
					(int*)((char*)&qword_140A22AB8 + *(_QWORD*)(a1 + 112) - *(_QWORD*)(a1 + 104)),
					&dword_140A22AC1);
			}
			else
			{
				*(_QWORD*)v15 = 0x726F747365526E4Fi64;
				*(_BYTE*)(v15 + 8) = 101;
				v17 = *(_QWORD*)(a1 + 112);
				v18 = *(_QWORD*)(a1 + 104) + 9i64;
				if (v18 != v17)
				{
					sub_1407DB590((int*)(*(_QWORD*)(a1 + 104) + 9i64), *(int**)(a1 + 112), 1ui64);
					*(_QWORD*)(a1 + 112) += v18 - v17;
				}
			}
			v19 = *(_QWORD*)(a1 + 136);
			v20 = *(_QWORD*)(a1 + 144) - v19;
			if (v20 < 6)
			{
				sub_1407DB590((int*)v19, &dword_1409D8D64, v20);
				sub_14001B050(
					(_QWORD*)(a1 + 128),
					(int*)((char*)&dword_1409D8D64 + *(_QWORD*)(a1 + 144) - *(_QWORD*)(a1 + 136)),
					(int*)&unk_1409D8D6A);
			}
			else
			{
				*(_DWORD*)v19 = 1632857679;
				*(_WORD*)(v19 + 4) = 25974;
				v21 = *(_QWORD*)(a1 + 144);
				v22 = *(_QWORD*)(a1 + 136) + 6i64;
				if (v22 != v21)
				{
					sub_1407DB590((int*)(*(_QWORD*)(a1 + 136) + 6i64), *(int**)(a1 + 144), 1ui64);
					*(_QWORD*)(a1 + 144) += v22 - v21;
				}
			}
			v23 = *(int**)(a1 + 200);
			v24 = *(_QWORD*)(a1 + 208) - (_QWORD)v23;
			if (v24 < 0x12)
			{
				sub_1407DB590(v23, (int*)&qword_140A22AC8, v24);
				sub_14001B050(
					(_QWORD*)(a1 + 192),
					(int*)((char*)&qword_140A22AC8 + *(_QWORD*)(a1 + 208) - *(_QWORD*)(a1 + 200)),
					&dword_140A22ADA);
			}
			else
			{
				qmemcpy(v23, "GetAsyncLoadStatus", 18);
				v25 = *(_QWORD*)(a1 + 208);
				v26 = *(_QWORD*)(a1 + 200) + 18i64;
				if (v26 != v25)
				{
					sub_1407DB590((int*)(*(_QWORD*)(a1 + 200) + 18i64), *(int**)(a1 + 208), 1ui64);
					*(_QWORD*)(a1 + 208) += v26 - v25;
				}
			}
			if (a5)
			{
				v27 = a1 + 160;
				v28 = *(int**)(v27 + 8);
				v29 = *(_QWORD*)(v27 + 16) - (_QWORD)v28;
				if (v29 < 0xB)
				{
					sub_1407DB590(v28, (int*)&qword_140A22AE0, v29);
					sub_14001B050(
						(_QWORD*)v27,
						(int*)((char*)&qword_140A22AE0 + *(_QWORD*)(v27 + 16) - *(_QWORD*)(v27 + 8)),
						&dword_140A22AEB);
				}
				else
				{
					qmemcpy(v28, "OnConfigure", 11);
					v30 = *(_QWORD*)(v27 + 16);
					v31 = *(_QWORD*)(v27 + 8) + 11i64;
					if (v31 != v30)
					{
						sub_1407DB590((int*)(*(_QWORD*)(v27 + 8) + 11i64), *(int**)(v27 + 16), 1ui64);
						*(_QWORD*)(v27 + 16) += v31 - v30;
					}
				}
			}
		}
	}
}
// 14013485B: variable 'v9' is possibly undefined
// 1409D8D1C: using guessed type int dword_1409D8D1C;
// 1409D8D64: using guessed type int dword_1409D8D64;
// 140A22AB8: using guessed type __int64 qword_140A22AB8;
// 140A22AC1: using guessed type int dword_140A22AC1;
// 140A22AC8: using guessed type __int64 qword_140A22AC8;
// 140A22ADA: using guessed type int dword_140A22ADA;
// 140A22AE0: using guessed type __int64 qword_140A22AE0;
// 140A22AEB: using guessed type int dword_140A22AEB;

