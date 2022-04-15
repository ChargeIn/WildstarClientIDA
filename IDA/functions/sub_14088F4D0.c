#include "../winhttp.h"

//----- (000000014088F4D0) ----------------------------------------------------
void __fastcall sub_14088F4D0(__int64 a1, int a2, int a3)
{
	int v6; // esi
	__int64 i; // rbx
	float v8; // xmm0_4
	int v9; // [rsp+38h] [rbp+10h] BYREF

	++* (_DWORD*)(a1 + 80);
	if ((*(_BYTE*)(a1 + 98) & 2) != 0 && *(_DWORD*)(a1 + 92) != -1)
		a3 = *(_DWORD*)(a1 + 92);
	sub_14088ED70(a1, a2, a3);
	v6 = a3 + sub_140892310(*(_QWORD*)(a1 + 128)) + a2;
	for (i = *(_QWORD*)(a1 + 200); i; i = *(_QWORD*)(i + 24))
	{
		v8 = sub_140835CA0((_DWORD*)(*(_QWORD*)i + 8i64), (float)(v6 - *(_DWORD*)(i + 16)), 0, &v9);
		sub_14088C040(*(_QWORD*)(i + 8), *(_DWORD*)(*(_QWORD*)i + 4i64), v8);
	}
	if ((*(_BYTE*)(a1 + 98) & 2) != 0)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
	sub_14088B630(a1);
}

