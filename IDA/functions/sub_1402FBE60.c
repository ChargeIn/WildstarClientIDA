//----- (00000001402FBE60) ----------------------------------------------------
__int64 __fastcall sub_1402FBE60(_QWORD* a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
	__int64 v6; // rax
	__int64 v8; // rdi
	int* v11; // rcx
	int** v12; // rbx
	__int64 v13; // rax
	__int64 v15; // r8
	__int64 v16; // rsi
	__int64 v17; // rdx
	int* v18; // rax
	int* v19; // rdx
	int** v20; // rbx
	__int64 v21; // rax
	int v22[10]; // [rsp+20h] [rbp-28h] BYREF

	v6 = *a1;
	v8 = a3;
	v22[0] = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(v6 + 16))(a1, v22, 0i64))
	{
		v15 = a1[8];
		v16 = (__int64)(a1 + 50);
		if ((unsigned int)v8 < *(_DWORD*)(v15 + 624))
		{
			v17 = *(unsigned __int16*)(*(_QWORD*)(v15 + 632) + 2 * v8);
			if ((unsigned int)v17 < *(_DWORD*)(v15 + 608))
				v16 = a1[62]
				+ 96i64
				* *(unsigned __int16*)(352i64 * *(unsigned __int16*)(*(_QWORD*)(v15 + 616) + 4 * v17 + 2)
					+ *(_QWORD*)(v15 + 392)
					+ 6);
		}
		v18 = sub_14018B280(128i64, 0);
		v19 = v18;
		if (v18)
		{
			*v18 = a2;
			v18[1] = v8;
			*((_QWORD*)v18 + 3) = a5;
			*((_QWORD*)v18 + 1) = v16;
			*((_QWORD*)v18 + 4) = a6;
			*((_QWORD*)v18 + 2) = a4;
			*((_QWORD*)v18 + 9) = 0i64;
			*((_QWORD*)v18 + 10) = 0i64;
			*((_QWORD*)v18 + 6) = 3i64;
			v18[14] = 0;
			*((_QWORD*)v18 + 8) = 0i64;
			*((_QWORD*)v18 + 11) = 0i64;
			*((_QWORD*)v18 + 12) = 0i64;
			*((_QWORD*)v18 + 13) = 0i64;
			*((_QWORD*)v18 + 5) = &off_140B62AC0;
			*((_QWORD*)v18 + 14) = 0i64;
			*((_QWORD*)v18 + 15) = 0i64;
		}
		else
		{
			v19 = 0i64;
		}
		v20 = (int**)(a1 + 212);
		if (!*((_QWORD*)v19 + 14))
		{
			*((_QWORD*)v19 + 14) = v20;
			*((_QWORD*)v19 + 15) = *v20;
			*v20 = v19;
			v21 = *((_QWORD*)v19 + 15);
			if (v21)
				*(_QWORD*)(v21 + 112) = v19 + 30;
		}
		return 0i64;
	}
	else
	{
		v11 = sub_14018B280(64i64, 0);
		if (v11)
		{
			*(_QWORD*)v11 = &off_140B64078;
			*((_QWORD*)v11 + 2) = 0i64;
			*((_QWORD*)v11 + 3) = 0i64;
			*((_QWORD*)v11 + 1) = a1;
			v12 = (int**)(a1 + 9);
			if (!*((_QWORD*)v11 + 2))
			{
				*((_QWORD*)v11 + 2) = v12;
				*((_QWORD*)v11 + 3) = *v12;
				*v12 = v11;
				v13 = *((_QWORD*)v11 + 3);
				if (v13)
					*(_QWORD*)(v13 + 16) = v11 + 6;
			}
			v11[8] = a2;
			v11[9] = v8;
			*(_QWORD*)v11 = off_140B63F18;
			*((_QWORD*)v11 + 5) = a4;
			*((_QWORD*)v11 + 6) = a5;
			*((_QWORD*)v11 + 7) = a6;
		}
		return 1i64;
	}
}
// 140B62AC0: using guessed type __int64 (__fastcall *off_140B62AC0)();
// 140B63F18: using guessed type __int64 (__fastcall *off_140B63F18[45])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402FBE60: using guessed type int var_28[10];

