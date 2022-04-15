#include "../winhttp.h"

//----- (00000001409580A0) ----------------------------------------------------
__int64 __fastcall sub_1409580A0(__int64 a1)
{
	_DWORD* StackBase; // rbx
	int v2; // edi
	__int64 result; // rax

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v2 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (a1)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
	*(StackBase - 1) = v2;
	return result;
}

