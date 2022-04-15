#include "../winhttp.h"

//----- (000000014058FA40) ----------------------------------------------------
__int64 __fastcall sub_14058FA40(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // rdi
	unsigned __int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rbx
	__int64 v13; // rbx
	__int64 v14; // rbx
	int* v15; // rax
	int* v16; // rdi
	unsigned __int64 v17; // rbx

	if (*(_QWORD*)a2)
	{
		v4 = *(_QWORD*)(*(_QWORD*)a2 - 8i64);
		v5 = sub_14018B280(2 * v4 + 18, 0);
		if (v5)
		{
			*(_QWORD*)v5 = off_140B55060;
			*((_QWORD*)v5 + 1) = v4;
		}
		else
		{
			v5 = 0i64;
		}
		v6 = v5 + 4;
		v7 = 2 * v4;
		sub_1407DB590(v5 + 4, *(int**)a2, v7);
		*(_WORD*)((char*)v6 + v7) = 0;
		*(_QWORD*)a1 = v6;
	}
	else
	{
		*(_QWORD*)a1 = 0i64;
	}
	v8 = *(_QWORD*)(a2 + 8);
	if (v8)
	{
		v9 = *(_QWORD*)(v8 - 8);
		v10 = sub_14018B280(2 * v9 + 18, 0);
		if (v10)
		{
			*(_QWORD*)v10 = off_140B55060;
			*((_QWORD*)v10 + 1) = v9;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = v10 + 4;
		v12 = 2 * v9;
		sub_1407DB590(v10 + 4, *(int**)(a2 + 8), v12);
		*(_WORD*)((char*)v11 + v12) = 0;
		*(_QWORD*)(a1 + 8) = v11;
	}
	else
	{
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	*(_WORD*)(a1 + 16) = *(_WORD*)(a2 + 16);
	*(_WORD*)(a1 + 18) = *(_WORD*)(a2 + 18);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	sub_14058FC50(a1 + 24, a2 + 24);
	v13 = *(_QWORD*)(a2 + 56);
	if (v13)
	{
		v14 = *(_QWORD*)(v13 - 8);
		v15 = sub_14018B280(2 * v14 + 18, 0);
		if (v15)
		{
			*(_QWORD*)v15 = off_140B55060;
			*((_QWORD*)v15 + 1) = v14;
		}
		else
		{
			v15 = 0i64;
		}
		v16 = v15 + 4;
		v17 = 2 * v14;
		sub_1407DB590(v15 + 4, *(int**)(a2 + 56), v17);
		*(_WORD*)((char*)v16 + v17) = 0;
		*(_QWORD*)(a1 + 56) = v16;
	}
	else
	{
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
	*(_QWORD*)(a1 + 76) = *(_QWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 84);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

