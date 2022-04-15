#include "../winhttp.h"

//----- (0000000140582DD0) ----------------------------------------------------
int** __fastcall sub_140582DD0(int** a1, __int64 a2)
{
	int* v2; // r15
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx
	__int64 v9; // rax
	int* v10; // r15
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	__int64 v15; // rbx
	int* v16; // r15
	__int64 v17; // rbx
	int* v18; // rax
	int* v19; // rdi
	unsigned __int64 v20; // rbx

	v2 = *a1;
	if (*(_QWORD*)a2)
	{
		v5 = *(_QWORD*)(*(_QWORD*)a2 - 8i64);
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*(_QWORD*)v6 = off_140B55060;
			*((_QWORD*)v6 + 1) = v5;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, *(int**)a2, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*a1 = v7;
	}
	else
	{
		*a1 = 0i64;
	}
	if (v2)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v2 - 2) + 8i64))(v2 - 4);
	v9 = *(_QWORD*)(a2 + 8);
	v10 = a1[1];
	if (v9)
	{
		v11 = *(_QWORD*)(v9 - 8);
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
		sub_1407DB590(v12 + 4, *(int**)(a2 + 8), v14);
		*(_WORD*)((char*)v13 + v14) = 0;
		a1[1] = v13;
	}
	else
	{
		a1[1] = 0i64;
	}
	if (v10)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
	*((_WORD*)a1 + 8) = *(_WORD*)(a2 + 16);
	*((_WORD*)a1 + 9) = *(_WORD*)(a2 + 18);
	*((_DWORD*)a1 + 5) = *(_DWORD*)(a2 + 20);
	sub_140590380((__int64)(a1 + 3), a2 + 24);
	v15 = *(_QWORD*)(a2 + 56);
	v16 = a1[7];
	if (v15)
	{
		v17 = *(_QWORD*)(v15 - 8);
		v18 = sub_14018B280(2 * v17 + 18, 0);
		if (v18)
		{
			*(_QWORD*)v18 = off_140B55060;
			*((_QWORD*)v18 + 1) = v17;
		}
		else
		{
			v18 = 0i64;
		}
		v19 = v18 + 4;
		v20 = 2 * v17;
		sub_1407DB590(v18 + 4, *(int**)(a2 + 56), v20);
		*(_WORD*)((char*)v19 + v20) = 0;
		a1[7] = v19;
	}
	else
	{
		a1[7] = 0i64;
	}
	if (v16)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
	*((_DWORD*)a1 + 16) = *(_DWORD*)(a2 + 64);
	*((_DWORD*)a1 + 17) = *(_DWORD*)(a2 + 68);
	*((_DWORD*)a1 + 18) = *(_DWORD*)(a2 + 72);
	*(int**)((char*)a1 + 76) = *(int**)(a2 + 76);
	*((_DWORD*)a1 + 21) = *(_DWORD*)(a2 + 84);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

