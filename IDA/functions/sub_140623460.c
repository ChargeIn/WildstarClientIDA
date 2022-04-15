#include "../winhttp.h"

//----- (0000000140623460) ----------------------------------------------------
__int64 __fastcall sub_140623460(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	if (!a4 && a6 && !*(_DWORD*)(a6 + 676) && !*(_DWORD*)(a6 + 684))
	{
		v6 = *(_QWORD*)(a6 + 48);
		if (v6)
		{
			v9 = 150i64;
			v10 = 1065353216i64;
			v11 = 0i64;
			v12 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v6 + 584i64))(v6, 0i64, &v9);
			result = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a6 + 48) + 648i64))(
				*(_QWORD*)(a6 + 48),
				sub_140623530,
				a6);
		}
		v8 = *(_QWORD*)(a6 + 96);
		if (v8)
		{
			v9 = 150i64;
			v10 = 1065353216i64;
			v11 = 0i64;
			v12 = 0i64;
			return (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v8 + 584i64))(v8, 0i64, &v9);
		}
	}
	return result;
}

