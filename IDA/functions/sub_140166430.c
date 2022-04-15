#include "../winhttp.h"

//----- (0000000140166430) ----------------------------------------------------
__int64 __fastcall sub_140166430(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebp
	int v4; // edi
	char* v5; // rax
	int v6; // ebp
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	int* v11; // rdx
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	int* v14; // [rsp+28h] [rbp-20h]

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u) - 1;
	v5 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v13, v5);
	v6 = v3 - 1;
	v7 = (__int64)v14;
	if (v6 >= 0 && v6 < *(_DWORD*)(v2 + 1160) && v4 >= 0 && v4 < *(_DWORD*)(v2 + 1144))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v6);
		v9 = 0i64;
		if (v4 >= *(_DWORD*)(v8 + 24))
			v10 = 0i64;
		else
			v10 = *(_QWORD*)(*(_QWORD*)(v8 + 16) + 8i64 * v4);
		v11 = (int*)&word_140B7B704;
		if (v14)
			v11 = v14;
		if (*(_WORD*)v11)
		{
			do
				++v9;
			while (*((_WORD*)v11 + v9));
		}
		sub_14001C480(v10 + 16, v11, (int*)((char*)v11 + 2 * v9));
	}
	if (v7)
		sub_14018B900(v7, 0);
	return 0i64;
}
// 140B7B704: using guessed type __int16 word_140B7B704;

