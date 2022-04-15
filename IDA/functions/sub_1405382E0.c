#include "../winhttp.h"

//----- (00000001405382E0) ----------------------------------------------------
__int64 __fastcall sub_1405382E0(__int64 a1, __int64 a2)
{
	int* v4; // rax
	_QWORD* v5; // r9
	_QWORD* v6; // r8
	__int64 v7; // rcx
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	*(_OWORD*)(a1 + 32) = *(_OWORD*)(a2 + 32);
	v4 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 56) = v4;
	*(_QWORD*)v4 = v4;
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) = *(_QWORD*)(a1 + 56);
	v5 = *(_QWORD**)(a2 + 56);
	v6 = (_QWORD*)*v5;
	v9 = **(_QWORD**)(a1 + 56);
	sub_140538EE0(v7, &v9, v6, v5);
	sub_1405383A0((_OWORD*)(a1 + 64), (char*)(a2 + 64));
	sub_1405383A0((_OWORD*)(a1 + 432), (char*)(a2 + 432));
	sub_1403FE910((__int64*)(a1 + 800), a2 + 800);
	sub_14048B2A0(a1 + 816, a2 + 816);
	return a1;
}
// 140538340: variable 'v7' is possibly undefined

