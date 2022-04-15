#include "../winhttp.h"

//----- (00000001405535D0) ----------------------------------------------------
__int64 __fastcall sub_1405535D0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // ebx
	__int64 v4; // rcx

	v1 = *(_QWORD*)(a1 + 8);
	v3 = *(_DWORD*)(v1 + 68);
	if (v3 <= 0 && (v4 = sub_14022AEC0(*(_DWORD*)(v1 + 284))) != 0)
		return (unsigned int)(int)sub_1405542B0(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 16i64), *(float*)(v4 + 8));
	else
		return (unsigned int)v3;
}

