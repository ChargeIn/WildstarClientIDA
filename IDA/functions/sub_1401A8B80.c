#include "../winhttp.h"

//----- (00000001401A8B80) ----------------------------------------------------
char __fastcall sub_1401A8B80(__int64* a1)
{
	__int64 v1; // rbx
	unsigned __int8 v3; // al

	v1 = *a1;
	v3 = (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
	(*(void(__fastcall**)(__int64*, _QWORD))(v1 + 72))(a1, v3);
	return 1;
}

