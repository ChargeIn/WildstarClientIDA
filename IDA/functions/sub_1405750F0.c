#include "../winhttp.h"

//----- (00000001405750F0) ----------------------------------------------------
int** __fastcall sub_1405750F0(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	int v8; // ecx
	bool v9; // al
	int* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax

	if (a4 == *(_QWORD*)(a1 + 8)
		|| a3
		|| ((v8 = *(_DWORD*)(a4 + 32), *(_DWORD*)a5 == v8)
			? (v9 = *(_DWORD*)(a5 + 4) < *(_DWORD*)(a4 + 36))
			: (v9 = *(_DWORD*)a5 < v8),
			v9))
	{
		v10 = sub_14018B280(48i64, 0);
		if (v10 != (int*)-32i64)
		{
			*((_QWORD*)v10 + 4) = *(_QWORD*)a5;
			*((_QWORD*)v10 + 5) = *(_QWORD*)(a5 + 8);
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
		v10 = sub_14018B280(48i64, 0);
		if (v10 != (int*)-32i64)
		{
			*((_QWORD*)v10 + 4) = *(_QWORD*)a5;
			*((_QWORD*)v10 + 5) = *(_QWORD*)(a5 + 8);
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

