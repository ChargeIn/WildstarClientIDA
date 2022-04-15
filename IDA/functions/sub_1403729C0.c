#include "../winhttp.h"

//----- (00000001403729C0) ----------------------------------------------------
__int64 __fastcall sub_1403729C0(__int64 a1)
{
	__int64 v2; // rbp
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // [rsp+20h] [rbp-38h] BYREF
	int v10; // [rsp+28h] [rbp-30h]
	__int64 v11; // [rsp+30h] [rbp-28h]
	__int64(__fastcall * v12)(); // [rsp+38h] [rbp-20h]
	__int64 v13; // [rsp+40h] [rbp-18h]
	__int64 v14; // [rsp+48h] [rbp-10h]

	v2 = sub_140350B90(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64), *(_DWORD*)(a1 + 32));
	if (!v2)
		return 2147500037i64;
	v4 = *(_QWORD*)(a1 + 48);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 40);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	v6 = *(_QWORD*)(v2 + 8);
	if (v6)
	{
		if (v6 <= qword_140C3FE70)
			v7 = v6 + qword_140C3FE68;
		else
			v7 = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64, __int64))(**(_QWORD**)(a1 + 24) + 24i64))(
		*(_QWORD*)(a1 + 24),
		v7,
		a1 + 40);
	if ((int)result >= 0)
	{
		v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 40i64))(*(_QWORD*)(a1 + 40));
		v10 = 0;
		v11 = a1;
		v13 = 0i64;
		v14 = 1i64;
		v12 = sub_140372AE0;
		sub_1401B6BF0(v8, &v9, (int**)(a1 + 48));
		result = 0i64;
		*(_DWORD*)(a1 + 56) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 848i64) - 1;
	}
	return result;
}
// 140372AA1: variable 'v8' is possibly undefined
// 140372AE0: using guessed type __int64 __fastcall sub_140372AE0();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

