#include "../winhttp.h"

//----- (000000014003AAA0) ----------------------------------------------------
bool __fastcall sub_14003AAA0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // rax
	char v6[24]; // [rsp+20h] [rbp-18h] BYREF

	v4 = (*(__int64(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)a1 + 24i64))(a1, v6, a2);
	return *(_QWORD*)(v4 + 8) == *(_QWORD*)(a3 + 8) && *(_DWORD*)v4 == *(_DWORD*)a3;
}
// 14003AAA0: using guessed type char var_18[24];

