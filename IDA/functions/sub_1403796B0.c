#include "../winhttp.h"

//----- (00000001403796B0) ----------------------------------------------------
__int64 __fastcall sub_1403796B0(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 40);
	if (!v1 || *(_DWORD*)(a1 + 104))
		return *(unsigned int*)(a1 + 104);
	else
		return *(unsigned int*)(v1 + 104);
}

