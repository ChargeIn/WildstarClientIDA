#include "../winhttp.h"

//----- (000000014071B880) ----------------------------------------------------
__int64 __fastcall sub_14071B880(__int64 a1)
{
	unsigned int v1; // ebx
	__int64 v2; // rsi
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v6; // rcx
	unsigned int v7; // [rsp+20h] [rbp-28h] BYREF
	int v8; // [rsp+24h] [rbp-24h]
	__int64 v9; // [rsp+28h] [rbp-20h]
	__int64 v10; // [rsp+30h] [rbp-18h]
	__int64 v11; // [rsp+38h] [rbp-10h]

	v1 = *(_DWORD*)(a1 + 392);
	v2 = qword_140C65898;
	if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(qword_140C65898 + 29112) + 408i64))(
		*(_QWORD*)(qword_140C65898 + 29112),
		v1)
		|| !v1)
	{
		v4 = *(_QWORD*)(v2 + 29112);
		v7 = v1;
		v8 = 0;
		v9 = 1065353216i64;
		v10 = 0i64;
		v11 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v4 + 584i64))(v4, 4i64, &v7);
	}
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v2 + 29120) + 408i64))(*(_QWORD*)(v2 + 29120), v1);
	if ((_DWORD)result || !v1)
	{
		v6 = *(_QWORD*)(v2 + 29120);
		v7 = v1;
		v8 = 0;
		v9 = 1065353216i64;
		v10 = 0i64;
		v11 = 0i64;
		result = (*(__int64(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v6 + 584i64))(v6, 4i64, &v7);
	}
	*(_DWORD*)(a1 + 232) = 1;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

