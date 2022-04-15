#include "../winhttp.h"

//----- (00000001407B4EE0) ----------------------------------------------------
__int64 __fastcall sub_1407B4EE0(__int64 a1, __int64 a2, __int64 a3)
{
	int v5; // eax
	int* v6; // rbx
	unsigned int v7; // edi
	int* v9; // [rsp+48h] [rbp+20h] BYREF

	v9 = 0i64;
	v5 = sub_1407B23F0(a3, &v9);
	v6 = v9;
	v7 = v5;
	if (v5 >= 0)
		v7 = (*(__int64(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)a1 + 200i64))(a1, a2, v9);
	if (v6)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v6 + 8i64))(v6);
	return v7;
}

