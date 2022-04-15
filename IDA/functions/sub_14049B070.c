#include "../winhttp.h"

//----- (000000014049B070) ----------------------------------------------------
__int64 __fastcall sub_14049B070(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
	if (result)
		return *(_DWORD*)(a1 + 20) & (unsigned int)(1 << *(_DWORD*)(result + 24));
	return result;
}

