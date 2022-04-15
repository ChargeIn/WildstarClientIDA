#include "../winhttp.h"

//----- (000000014044A4E0) ----------------------------------------------------
int** __fastcall sub_14044A4E0(__int64 a1, int** a2, __int64 a3, __int64 a4, int* a5)
{
	int v8; // eax
	int v9; // ecx
	int* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax

	if (a4 == *(_QWORD*)(a1 + 8)
		|| a3
		|| (v8 = a5[1], v9 = *(_DWORD*)(a4 + 36), v8 < v9)
		|| v8 == v9 && *a5 < *(_DWORD*)(a4 + 32))
	{
		v10 = sub_14018B280(40i64, 0);
		if (v10 != (int*)-32i64)
		{
			v10[8] = *a5;
			v10[9] = a5[1];
		}
		*(_QWORD*)(a4 + 16) = v10;
		v12 = *(_QWORD*)(a1 + 8);
		if (a4 == v12)
		{
			*(_QWORD*)(v12 + 8) = v10;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v10;
		}
		else if (a4 == *(_QWORD*)(v12 + 16))
		{
			*(_QWORD*)(v12 + 16) = v10;
		}
	}
	else
	{
		v10 = sub_14018B280(40i64, 0);
		if (v10 != (int*)-32i64)
		{
			v10[8] = *a5;
			v10[9] = a5[1];
		}
		*(_QWORD*)(a4 + 24) = v10;
		v11 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v11 + 24))
			*(_QWORD*)(v11 + 24) = v10;
	}
	*((_QWORD*)v10 + 1) = a4;
	*((_QWORD*)v10 + 2) = 0i64;
	*((_QWORD*)v10 + 3) = 0i64;
	sub_1400081C0((__int64)v10, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v10;
	return a2;
}

