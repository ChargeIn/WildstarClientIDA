#include "../winhttp.h"

//----- (00000001405E7E50) ----------------------------------------------------
__int64 __fastcall sub_1405E7E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax

	if (a4 && *(_DWORD*)(a4 + 400))
		return *(_QWORD*)(a4 + 312);
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1))
		return a2;
	if (!a2)
		return a2;
	if (!a3)
		return a2;
	v8 = sub_140565090(v7, a2, a3);
	result = sub_1403ACD90(qword_140C65B70, v8, a3);
	if (!result)
		return a2;
	return result;
}
// 1405E7E9B: variable 'v7' is possibly undefined
// 140C65B70: using guessed type __int64 qword_140C65B70;

