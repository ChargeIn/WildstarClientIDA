#include "../winhttp.h"

//----- (000000014078A400) ----------------------------------------------------
__int64 __fastcall sub_14078A400(__int64 a1)
{
	__int64 v1; // rcx
	__int64 result; // rax
	__int64 v3; // [rsp+20h] [rbp-28h] BYREF
	int v4; // [rsp+28h] [rbp-20h]
	__int64 v5; // [rsp+2Ch] [rbp-1Ch]
	__int64 v6; // [rsp+34h] [rbp-14h]
	int v7; // [rsp+3Ch] [rbp-Ch]

	*(_DWORD*)(a1 + 88) = 1;
	v1 = *(_QWORD*)(a1 + 136);
	if (v1)
	{
		v3 = 1110i64;
		v4 = 1065353216;
		v5 = 0i64;
		v6 = 0i64;
		v7 = 0;
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v1 + 584i64))(v1, 0i64, &v3);
	}
	return result;
}

