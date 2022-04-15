#include "../winhttp.h"

//----- (0000000140173980) ----------------------------------------------------
__int64 __fastcall sub_140173980(__int64 a1, float a2)
{
	__int64 result; // rax
	_QWORD* v4; // rcx
	unsigned __int64 v5; // rbx
	char v6[32]; // [rsp+30h] [rbp-38h] BYREF

	result = sub_14034BF80(
		v6,
		16i64,
		L"%.*f",
		*(unsigned int*)(a1 + 1048),
		fmaxf(*(float*)(a1 + 1052), fminf(a2, *(float*)(a1 + 1056))));
	if ((int)result >= 0)
	{
		v4 = *(_QWORD**)(a1 + 1040);
		v5 = v4[128];
		(*(void(__fastcall**)(_QWORD*, char*))(*v4 + 80i64))(v4, v6);
		return sub_140111750(*(_QWORD*)(a1 + 1040), v5, v5);
	}
	return result;
}
// 140A38EA0: using guessed type wchar_t asc_140A38EA0[5];

