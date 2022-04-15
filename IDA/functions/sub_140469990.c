#include "../winhttp.h"

//----- (0000000140469990) ----------------------------------------------------
__int64 __fastcall sub_140469990(__int64 a1, int a2)
{
	__int64 v2; // rbx

	v2 = *(_QWORD*)(a1 + 5576);
	if (!v2)
		return 0i64;
	while ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 56) + 8i64))(*(_QWORD*)(v2 + 56)) != a2)
	{
		v2 = *(_QWORD*)(v2 + 24);
		if (!v2)
			return 0i64;
	}
	return 1i64;
}

