#include "../winhttp.h"

//----- (0000000140374F40) ----------------------------------------------------
__int64 __fastcall sub_140374F40(__int64 a1)
{
	__int64 v2; // rdx
	__int64 result; // rax
	__int64 v4; // r10
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64 v7; // rax
	int v8; // ecx
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+2Ch] [rbp-1Ch]
	__int64 v16; // [rsp+34h] [rbp-14h]
	int v17; // [rsp+3Ch] [rbp-Ch]
	__int64 v18; // [rsp+50h] [rbp+8h]
	__int64 v19; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_140350FE0(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64), *(_DWORD*)(a1 + 24));
	if (!v2)
		return 2147500037i64;
	v4 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 28) = 0i64;
	v5 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 2792i64);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < *(_DWORD*)(v2 + 4))
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v18 = v6, *(_DWORD*)(v2 + 4) < *(_DWORD*)(v6 + 32)))
		v18 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 2792i64);
	if (v18 == v5)
		v8 = 0;
	else
		v8 = *(_DWORD*)(v18 + 36);
	*(_DWORD*)(a1 + 36) = v8;
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(v2 + 8);
	v9 = *(_QWORD*)(v2 + 16);
	if (v9)
	{
		if (v9 <= qword_140C3FE70)
			v10 = v9 + qword_140C3FE68;
		else
			v10 = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64, __int64*, _QWORD))(**(_QWORD**)(v4 + 40) + 40i64))(
		*(_QWORD*)(v4 + 40),
		v10,
		&v19,
		0i64);
	if ((int)result >= 0)
	{
		v11 = *(_QWORD*)(a1 + 48);
		if (v11)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			*(_QWORD*)(a1 + 48) = 0i64;
		}
		v12 = v19;
		v13 = 150i64;
		v15 = 0i64;
		v16 = 0i64;
		v17 = 0;
		v14 = 1065353216;
		*(_QWORD*)(a1 + 48) = v19;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v12 + 584i64))(v12, 0i64, &v13);
		return 0i64;
	}
	return result;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

