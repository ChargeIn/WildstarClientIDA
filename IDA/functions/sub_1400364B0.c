#include "../winhttp.h"

//----- (00000001400364B0) ----------------------------------------------------
__int64 __fastcall sub_1400364B0(__int64 a1, _WORD* a2)
{
	__int64 v2; // rbx
	__int64 v5; // rbp
	int* v6; // rax
	int v7; // ebp
	int v9; // esi
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64* v13; // rax
	__int64* v14; // [rsp+38h] [rbp+10h] BYREF

	v2 = 0i64;
	v14 = 0i64;
	if (a2 && *a2)
	{
		v5 = qword_140C65800;
		v6 = sub_14018B280(1616i64, 0);
		if (v6)
			v2 = sub_14030FE50((__int64)v6);
		v7 = sub_1403102B0(v2, v5);
		if (v7 < 0)
		{
			if (v2)
			{
				sub_14030FFF0(v2);
				sub_14018B900(v2, 0);
			}
			return (unsigned int)v7;
		}
		v9 = (*(__int64(__fastcall**)(__int64, _WORD*, __int64**, _QWORD))(*(_QWORD*)v2 + 40i64))(v2, a2, &v14, 0i64);
		if (v9 < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
			return (unsigned int)v9;
		}
		(*(void(__fastcall**)(__int64*, __int64(__fastcall*)(__int64*, __int64, __int64, int), __int64))(*v14 + 648))(
			v14,
			sub_1400365F0,
			a1);
		sub_140036400(v10, v14);
	}
	v11 = *(_QWORD*)(a1 + 1272);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 1272) = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 1264);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*(_QWORD*)(a1 + 1264) = 0i64;
	}
	v13 = v14;
	*(_QWORD*)(a1 + 1264) = v2;
	*(_QWORD*)(a1 + 1272) = v13;
	return 0i64;
}
// 140036579: variable 'v10' is possibly undefined
// 140C65800: using guessed type __int64 qword_140C65800;

