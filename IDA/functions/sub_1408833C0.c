#include "../winhttp.h"

//----- (00000001408833C0) ----------------------------------------------------
__int64 __fastcall sub_1408833C0(__int64 a1)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 8) = 0x200000;
	*(_DWORD*)(a1 + 12) = 4;
	*(_DWORD*)(a1 + 16) = 2;
	*(_DWORD*)(a1 + 20) = 0x4000;
	*(_DWORD*)(a1 + 24) = 1;
	result = 0i64;
	*(_QWORD*)a1 = 0i64;
	*(_DWORD*)(a1 + 36) = 0x2000;
	*(_QWORD*)(a1 + 28) = 1i64;
	*(_DWORD*)(a1 + 40) = 1136525312;
	*(_DWORD*)(a1 + 44) = 8;
	*(_DWORD*)(a1 + 48) = 1065353216;
	return result;
}

