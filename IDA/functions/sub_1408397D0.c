#include "../winhttp.h"

//----- (00000001408397D0) ----------------------------------------------------
__int64 __fastcall sub_1408397D0(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rcx
	_DWORD* v5; // rax

	v3 = *(_DWORD**)(a1 + 16);
	if (v3)
		sub_140828460(v3);
	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	v5 = *(_DWORD**)(a2 + 16);
	*(_QWORD*)(a1 + 16) = v5;
	if (v5)
		++* v5;
	return a1;
}

