#include "../winhttp.h"

//----- (0000000140713080) ----------------------------------------------------
__int64 __fastcall sub_140713080(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rax

	v1 = *(_QWORD*)(a1 + 8);
	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 72) + 32i64))(*(_QWORD*)(qword_140C658F8 + 72));
	return *(_DWORD*)(v2 + 48 * v1 + 44) - *(_DWORD*)(v2 + 48 * v1 + 40);
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

