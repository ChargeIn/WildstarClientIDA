//----- (00000001405DB4D0) ----------------------------------------------------
__int64 __fastcall sub_1405DB4D0(__int64 a1, __int64 a2, _QWORD* a3, int a4)
{
	int* v5; // r14
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdi
	unsigned __int64 v11; // rbx
	int* v12; // r14
	__int64 v13; // rbx
	int* v14; // rax
	int* v15; // rdi
	unsigned __int64 v16; // rbx
	__int64 v17; // rax
	float v18; // xmm1_4

	*(_DWORD*)a1 = a4;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 40) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 32);
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 + 40);
	*(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 + 48);
	*(_QWORD*)(a1 + 72) = *(_QWORD*)(a2 + 56);
	v5 = *(int**)(a2 + 40);
	if (v5)
	{
		v8 = 0i64;
		if (*(_WORD*)v5)
		{
			do
				++v8;
			while (*((_WORD*)v5 + v8));
		}
		v9 = sub_14018B280(2 * v8 + 18, 0);
		if (v9)
		{
			*(_QWORD*)v9 = off_140B55060;
			*((_QWORD*)v9 + 1) = v8;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = v9 + 4;
		v11 = 2 * v8;
		sub_1407DB590(v9 + 4, v5, v11);
		*(_WORD*)((char*)v10 + v11) = 0;
		*(_QWORD*)(a1 + 80) = v10;
	}
	else
	{
		*(_QWORD*)(a1 + 80) = 0i64;
	}
	v12 = *(int**)(a2 + 32);
	if (v12)
	{
		v13 = 0i64;
		if (*(_WORD*)v12)
		{
			do
				++v13;
			while (*((_WORD*)v12 + v13));
		}
		v14 = sub_14018B280(2 * v13 + 18, 0);
		if (v14)
		{
			*(_QWORD*)v14 = off_140B55060;
			*((_QWORD*)v14 + 1) = v13;
		}
		else
		{
			v14 = 0i64;
		}
		v15 = v14 + 4;
		v16 = 2 * v13;
		sub_1407DB590(v14 + 4, v12, v16);
		*(_WORD*)((char*)v15 + v16) = 0;
		*(_QWORD*)(a1 + 88) = v15;
	}
	else
	{
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	if (!*(_QWORD*)(a1 + 96))
	{
		*(_QWORD*)(a1 + 96) = a3;
		*(_QWORD*)(a1 + 104) = *a3;
		*a3 = a1;
		v17 = *(_QWORD*)(a1 + 104);
		if (v17)
			*(_QWORD*)(v17 + 96) = a1 + 104;
	}
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a1 + 88);
	v18 = *(float*)(a2 + 28);
	if (v18 == 0.0)
	{
		*(_QWORD*)(a1 + 8) = 0i64;
		return a1;
	}
	else
	{
		if (a1 != -8)
			sub_1401E82F0((__int64*)(a1 + 8), v18);
		return a1;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

