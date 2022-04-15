#include "../winhttp.h"

//----- (00000001400CDE40) ----------------------------------------------------
char __fastcall sub_1400CDE40(_QWORD* a1, unsigned int* a2)
{
	char result; // al

	result = sub_1400C3420(a1);
	if (!result)
		return (*(__int64(__fastcall**)(_QWORD*, void*, _QWORD, _QWORD, unsigned int))(*a1 + 120i64))(
			a1,
			&unk_1409D2E64,
			0i64,
			*a2,
			a2[1]);
	return result;
}

