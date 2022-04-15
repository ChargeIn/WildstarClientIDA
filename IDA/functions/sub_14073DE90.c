//----- (000000014073DE90) ----------------------------------------------------
__int64 __fastcall sub_14073DE90(__int64 a1, int* a2, int* a3, _QWORD* a4, int a5, int a6, __int64 a7)
{
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	__int64 v15; // rbx
	int* v16; // rax
	int* v17; // rdi
	unsigned __int64 v18; // rbx
	__int64 v19; // rbx
	int* v20; // rax
	int* v21; // rdi
	unsigned __int64 v22; // rbx
	__int64 v23; // rbx
	int* v24; // rax
	_WORD* v25; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B74C90;
	*(_DWORD*)(a1 + 16) = 0;
	if (a2)
	{
		v11 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v11;
			while (*((_WORD*)a2 + v11));
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
		sub_1407DB590(v12 + 4, a2, v14);
		*(_WORD*)((char*)v13 + v14) = 0;
		*(_QWORD*)(a1 + 24) = v13;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	if (a3)
	{
		v15 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v15;
			while (*((_WORD*)a3 + v15));
		}
		v16 = sub_14018B280(2 * v15 + 18, 0);
		if (v16)
		{
			*(_QWORD*)v16 = off_140B55060;
			*((_QWORD*)v16 + 1) = v15;
		}
		else
		{
			v16 = 0i64;
		}
		v17 = v16 + 4;
		v18 = 2 * v15;
		sub_1407DB590(v16 + 4, a3, v18);
		*(_WORD*)((char*)v17 + v18) = 0;
		*(_QWORD*)(a1 + 32) = v17;
	}
	else
	{
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	*(_QWORD*)(a1 + 40) = 0i64;
	if (a3)
	{
		v19 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v19;
			while (*((_WORD*)a3 + v19));
		}
		v20 = sub_14018B280(2 * v19 + 18, 0);
		if (v20)
		{
			*(_QWORD*)v20 = off_140B55060;
			*((_QWORD*)v20 + 1) = v19;
		}
		else
		{
			v20 = 0i64;
		}
		v21 = v20 + 4;
		v22 = 2 * v19;
		sub_1407DB590(v20 + 4, a3, v22);
		*(_WORD*)((char*)v21 + v22) = 0;
		*(_QWORD*)(a1 + 48) = v21;
	}
	else
	{
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	*(_QWORD*)(a1 + 56) = *a4;
	*(_QWORD*)(a1 + 64) = a4[1];
	*(_DWORD*)(a1 + 72) = a5;
	*(_DWORD*)(a1 + 76) = a6;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 88) = a7;
	if (!a6)
	{
		v23 = *(_QWORD*)(a1 + 32);
		v24 = sub_14018B280(18i64, 0);
		if (v24)
		{
			*(_QWORD*)v24 = off_140B55060;
			*((_QWORD*)v24 + 1) = 0i64;
		}
		else
		{
			v24 = 0i64;
		}
		v25 = v24 + 4;
		*v25 = 0;
		*(_QWORD*)(a1 + 32) = v25;
		if (v23)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
	}
	sub_14073E320(a1);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B74C90: using guessed type __int64 (__fastcall *off_140B74C90[3])();

