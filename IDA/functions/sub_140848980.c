#include "../winhttp.h"

//----- (0000000140848980) ----------------------------------------------------
__int64 __fastcall sub_140848980(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r9
	__int64 v4; // rbx
	__int64* v5; // r10
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // rcx
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int8 v10; // [rsp+28h] [rbp-10h]

	result = *(_QWORD*)(a1 + 16);
	if (result)
	{
		v3 = *(_QWORD*)(result + 24);
		result = (unsigned int)a2;
		v4 = *(_QWORD*)(a1 + 8i64 * (unsigned int)a2 + 928);
		v5 = *(__int64**)(v3 + 160);
		if (v4)
		{
			v6 = *v5;
			v7 = *(_QWORD*)(v3 + 176);
			v9 = 0i64;
			(*(void(__fastcall**)(__int64*, __int64, __int64*, __int64))(v6 + 448))(v5, a2, &v9, v7);
			v8 = v9;
			result = v10;
			*(_BYTE*)(v4 + 45) = v10;
			if (v8)
				return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
		}
	}
	return result;
}

