#include "../winhttp.h"

//----- (000000014073E140) ----------------------------------------------------
__int64 __fastcall sub_14073E140(__int64 a1, int* a2, int* a3, int a4, int a5, __int64 a6, _QWORD* a7)
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
	_QWORD* v23; // rcx
	int v24; // eax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp+8h] BYREF

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 16) = 0;
	*(_QWORD*)a1 = off_140B74C90;
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
	v23 = a7;
	*(_QWORD*)(a1 + 56) = *a7;
	*(_QWORD*)(a1 + 64) = v23[1];
	v24 = a5;
	*(_DWORD*)(a1 + 72) = a4;
	*(_DWORD*)(a1 + 76) = v24;
	*(_QWORD*)(a1 + 80) = a6;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	*(struct _FILETIME*)(a1 + 88) = SystemTimeAsFileTime;
	*(_QWORD*)(a1 + 96) = 0i64;
	sub_14073E320(a1);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B74C90: using guessed type __int64 (__fastcall *off_140B74C90[3])();

