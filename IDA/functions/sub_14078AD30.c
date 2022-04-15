#include "../winhttp.h"

//----- (000000014078AD30) ----------------------------------------------------
__int64 __fastcall sub_14078AD30(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rcx
	__int64 v3; // [rsp+20h] [rbp-28h] BYREF
	int v4; // [rsp+28h] [rbp-20h]
	__int64 v5; // [rsp+2Ch] [rbp-1Ch]
	__int64 v6; // [rsp+34h] [rbp-14h]
	int v7; // [rsp+3Ch] [rbp-Ch]

	result = (unsigned int)(*(_DWORD*)(a1 + 104) - 1);
	if ((unsigned int)result > 1)
	{
		*(_DWORD*)(a1 + 104) = 1;
		v2 = *(_QWORD*)(a1 + 96);
		v3 = 1109i64;
		v6 = 2i64;
		v4 = 1065353216;
		v5 = 0i64;
		v7 = 0;
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v2 + 584i64))(v2, 0i64, &v3);
	}
	return result;
}

