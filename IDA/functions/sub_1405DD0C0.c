#include "../winhttp.h"

//----- (00000001405DD0C0) ----------------------------------------------------
__int64 __fastcall sub_1405DD0C0(__int64 a1, __int64 a2, _QWORD* a3, int a4)
{
	int* v4; // r14
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
	*(_QWORD*)(a1 + 8) = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 8);
	v4 = *(int**)(a2 + 16);
	if (v4)
	{
		v8 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v8;
			while (*((_WORD*)v4 + v8));
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
		sub_1407DB590(v9 + 4, v4, v11);
		*(_WORD*)((char*)v10 + v11) = 0;
		*(_QWORD*)(a1 + 24) = v10;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v12 = *(int**)(a2 + 24);
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
		*(_QWORD*)(a1 + 32) = v15;
	}
	else
	{
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 36);
	*(_QWORD*)(a1 + 56) = a3;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 64) = *a3;
	*a3 = a1;
	v17 = *(_QWORD*)(a1 + 64);
	if (v17)
		*(_QWORD*)(v17 + 56) = a1 + 64;
	v18 = *(float*)(a2 + 32);
	if (v18 == 0.0)
	{
		*(_QWORD*)(a1 + 40) = 0i64;
		return a1;
	}
	else
	{
		if (a1 != -40)
			sub_1401E82F0((__int64*)(a1 + 40), v18);
		return a1;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

