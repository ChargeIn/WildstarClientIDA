#include "../winhttp.h"

//----- (0000000140789A90) ----------------------------------------------------
__int64 __fastcall sub_140789A90(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	int v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+2Ch] [rbp-1Ch]
	__int64 v7; // [rsp+34h] [rbp-14h]
	int v8; // [rsp+3Ch] [rbp-Ch]

	result = (unsigned int)(*(_DWORD*)(a1 + 80) - 6);
	if ((unsigned int)result <= 1)
	{
		v3 = *(_QWORD*)(a1 + 88);
		v4 = 1117i64;
		v7 = 2i64;
		v5 = 1065353216;
		v6 = 0i64;
		v8 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v4);
		result = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 80) = 10;
		*(_BYTE*)(result + 1232) = 1;
		*(_DWORD*)(a1 + 84) = 0;
	}
	return result;
}

