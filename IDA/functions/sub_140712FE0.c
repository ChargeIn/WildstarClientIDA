#include "../winhttp.h"

//----- (0000000140712FE0) ----------------------------------------------------
__int64 __fastcall sub_140712FE0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	__int64 v4; // rbx
	__int64 v5; // rax

	v2 = qword_140C658F8;
	v3 = *(_QWORD*)(a1 + 8);
	v4 = a2
		+ *(int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 72) + 32i64))(*(_QWORD*)(qword_140C658F8 + 72))
			+ 48 * v3
			+ 8);
	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 112) + 32i64))(*(_QWORD*)(v2 + 112));
	return sub_1402141A0(*(_DWORD*)(v5 + 4 * v4));
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

