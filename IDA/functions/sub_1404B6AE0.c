#include "../winhttp.h"

//----- (00000001404B6AE0) ----------------------------------------------------
__int64 sub_1404B6AE0()
{
	__int64 v0; // rcx
	__int64 v1; // rax

	if (!sub_1405B1510(&qword_140C7DFB0))
		return 0i64;
	v0 = *(_QWORD*)(qword_140C659F8 + 200);
	if (!v0)
		return 0i64;
	v1 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v0 + 112i64))(v0);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 56i64))(v1);
}
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

