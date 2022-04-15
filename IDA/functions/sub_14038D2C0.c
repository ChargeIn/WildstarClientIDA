#include "../winhttp.h"

//----- (000000014038D2C0) ----------------------------------------------------
__int64 __fastcall sub_14038D2C0(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 result; // rax

	v2 = *a1;
	*((_DWORD*)a1 + 49) = a2;
	result = (*(__int64 (**)(void))(v2 + 328))();
	if (result)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)result + 272i64))(result, *((unsigned int*)a1 + 49));
	return result;
}

