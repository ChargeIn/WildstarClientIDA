#include "../winhttp.h"

//----- (000000014062B7B0) ----------------------------------------------------
__int64 __fastcall sub_14062B7B0(__int64 a1)
{
	__int64(__fastcall * **v2)(_QWORD, __int64); // rcx
	__int64 result; // rax
	__int64(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = *(__int64(__fastcall****)(_QWORD, __int64))a1;
	if (v2)
		result = (**v2)(v2, 1i64);
	v4 = *(__int64(__fastcall****)(_QWORD, __int64))(a1 + 8);
	if (v4)
		result = (**v4)(v4, 1i64);
	v5 = *(_QWORD*)(a1 + 24);
	if (v5)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 32);
	if (v6)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v7 = *(_QWORD*)(a1 + 16);
	if (v7)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	return result;
}

