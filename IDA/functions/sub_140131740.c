#include "../winhttp.h"

//----- (0000000140131740) ----------------------------------------------------
__int64 __fastcall sub_140131740(_QWORD* a1)
{
	__int64 v2; // rdi
	char* v3; // rax
	int* v4; // rbx
	int v5; // esi
	__int64 v6; // rdx
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int* v9; // [rsp+28h] [rbp-20h]

	v2 = sub_140131630(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v8, v3);
	v4 = v9;
	v5 = *(_DWORD*)(v2 + 1496);
	v6 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v6;
		while (*((_WORD*)v9 + v6));
	}
	sub_14001C480(v2 + 1464, v9, (int*)((char*)v9 + 2 * v6));
	*(_DWORD*)(v2 + 1496) = v5;
	sub_14018B900((__int64)v4, 0);
	return 0i64;
}

