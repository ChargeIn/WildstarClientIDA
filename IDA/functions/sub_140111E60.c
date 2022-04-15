#include "../winhttp.h"

//----- (0000000140111E60) ----------------------------------------------------
__int64 __fastcall sub_140111E60(__int64 a1)
{
	unsigned __int64 v2; // rbx
	unsigned __int64 v3; // rax
	__int64 v4; // rax

	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
	v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
	if (v2 > v3)
		v2 = v3;
	v4 = 0i64;
	*(_QWORD*)(a1 + 1040) = 0i64;
	*(_QWORD*)(a1 + 1024) = v2;
	if (!v2)
		v4 = -1i64;
	*(_QWORD*)(a1 + 1048) = v2;
	*(_QWORD*)(a1 + 1032) = v4;
	return 0i64;
}

