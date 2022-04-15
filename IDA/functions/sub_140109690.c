#include "../winhttp.h"

//----- (0000000140109690) ----------------------------------------------------
__int64 __fastcall sub_140109690(__int64 a1, __int64 a2)
{
	int* v4; // rax

	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v4;
	*(_QWORD*)(a1 + 32) = v4;
	*(_QWORD*)(a1 + 40) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	if (*(_QWORD*)a2)
		(***(void(__fastcall****)(_QWORD))a2)(*(_QWORD*)a2);
	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	return a1;
}

