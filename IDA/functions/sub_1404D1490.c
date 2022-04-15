#include "../winhttp.h"

//----- (00000001404D1490) ----------------------------------------------------
void __fastcall sub_1404D1490(__int64 a1, unsigned int a2, unsigned int a3)
{
	unsigned __int64 v3; // rbx
	__int64 v4; // rdi
	int v6; // ecx
	unsigned int v7; // eax
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF

	v3 = a3;
	v4 = a2;
	if (!(unsigned int)sub_1404D2240(a1, a2))
	{
		sub_1403CC530(qword_140C65898, 0x8Bu);
		return;
	}
	v6 = -1;
	if (*(_DWORD*)(a1 + 24) != -1)
		v6 = *(_DWORD*)(a1 + 24);
	v7 = 0;
	if (v6)
		v7 = v6;
	if ((unsigned int)v4 >= v7)
		v8 = 0i64;
	else
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v4);
	v9 = *(_QWORD*)(v8 + 24);
	if (!v9)
	{
		LODWORD(v3) = -1;
	LABEL_12:
		v10 = 0i64;
		v10 = __PAIR64__(v3, **(_DWORD**)(v8 + 8));
		sub_1403F4900(qword_140C65898, 0x7CEu, (__int64)&v10);
		return;
	}
	if (v9 == 1)
	{
		LODWORD(v3) = 0;
		goto LABEL_12;
	}
	if (v3 < v9)
		goto LABEL_12;
	sub_1403CC530(qword_140C65898, 0x8Cu);
}
// 140C65898: using guessed type __int64 qword_140C65898;

