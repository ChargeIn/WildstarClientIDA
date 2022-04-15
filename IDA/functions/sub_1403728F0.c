#include "../winhttp.h"

//----- (00000001403728F0) ----------------------------------------------------
__int64 __fastcall sub_1403728F0(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rbx
	unsigned __int64 v6; // rbp
	int** v7; // r14
	int* v8; // rax
	unsigned int v9; // esi
	int* v10; // rcx
	__int64 v11; // rcx
	int v12; // eax
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	__int64 v15; // [rsp+28h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 24);
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 32) = a2;
	v4 = v3 + 1920;
	LODWORD(v14) = a2;
	v15 = v2;
	if (*(_QWORD*)v4 == *(_QWORD*)(v4 + 8))
		sub_1400290D0(v4);
	v6 = (*(__int64(__fastcall**)(__int64*))(v4 + 24))(&v14);
	v7 = (int**)(*(_QWORD*)(v4 + 16) + 8 * (v6 % *(_QWORD*)(v4 + 8)));
	v8 = sub_14018B280(40i64, 0);
	v9 = 0;
	if (v8)
	{
		v10 = *v7;
		*(_QWORD*)v8 = v6;
		*((_QWORD*)v8 + 1) = v10;
		*((_QWORD*)v8 + 2) = v14;
		v11 = v15;
		*((_QWORD*)v8 + 4) = a1;
		*((_QWORD*)v8 + 3) = v11;
	}
	else
	{
		v8 = 0i64;
	}
	*v7 = v8;
	++* (_QWORD*)v4;
	v12 = sub_1403729C0(a1);
	if (v12 < 0)
		return (unsigned int)v12;
	return v9;
}

