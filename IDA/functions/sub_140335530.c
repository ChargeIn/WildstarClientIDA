#include "../winhttp.h"

//----- (0000000140335530) ----------------------------------------------------
__int64 __fastcall sub_140335530(__int64 a1, __int64 a2)
{
	int* v3; // rax
	__int64 v4; // rdx

	*(_QWORD*)a1 = off_140B648F0;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)(a1 + 24) = a2;
	v3 = sub_14018B280(a2, 0);
	v4 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 56) = 1;
	*(_QWORD*)(a1 + 32) = v3;
	*(_QWORD*)(a1 + 48) = v3;
	*(_QWORD*)(a1 + 40) = (char*)v3 + v4;
	return a1;
}
// 140B648F0: using guessed type __int64 (__fastcall *off_140B648F0[17])();

