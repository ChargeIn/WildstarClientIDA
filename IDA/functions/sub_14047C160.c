#include "../winhttp.h"

//----- (000000014047C160) ----------------------------------------------------
__int64 __fastcall sub_14047C160(_QWORD* a1)
{
	__int64 v3; // rax

	if ((*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 32i64))(a1) && (v3 = a1[23]) != 0)
		return *(_DWORD*)(v3 + 96) & 0x800;
	else
		return 0i64;
}

