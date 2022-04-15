#include "../winhttp.h"

//----- (0000000140284C50) ----------------------------------------------------
__int64 __fastcall sub_140284C50(__int64 a1, _OWORD* a2)
{
	__int64 result; // rax
	__int64 v3; // rcx

	result = *(_QWORD*)(a1 + 224);
	v3 = *(_QWORD*)(result + 16);
	*(_OWORD*)v3 = *a2;
	*(_OWORD*)(v3 + 16) = a2[1];
	*(_OWORD*)(v3 + 32) = a2[2];
	*(_OWORD*)(v3 + 48) = a2[3];
	*(_DWORD*)(v3 + 128) = 0;
	return result;
}

