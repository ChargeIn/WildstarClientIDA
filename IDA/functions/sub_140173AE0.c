#include "../winhttp.h"

//----- (0000000140173AE0) ----------------------------------------------------
char __fastcall sub_140173AE0(__int64 a1, int a2, __int64 a3)
{
	char result; // al
	__int64 v7; // rcx
	__int64 v8; // rax
	WCHAR* v9; // rcx
	float v10; // xmm2_4

	result = a2 - 39;
	if ((unsigned int)(a2 - 39) <= 1)
	{
		v7 = *(_QWORD*)(a1 + 1040);
		if (a3 == v7)
		{
			v8 = (*(__int64 (**)(void))(*(_QWORD*)v7 + 112i64))();
			v9 = (WCHAR*)&unk_1409DDA2C;
			if (v8)
				v9 = (WCHAR*)v8;
			v10 = *(double*)sub_1407DFD50(v9, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
			result = sub_1401737F0(a1, fmaxf(*(float*)(a1 + 1052), fminf(*(float*)(a1 + 1056), v10)), 0);
		}
	}
	if (a2 == 33)
	{
		if (a3 == *(_QWORD*)(a1 + 1032))
		{
			*(_QWORD*)(a1 + 1060) = 0i64;
			*(_DWORD*)(a1 + 1068) = 1;
			result = sub_140173690(a1);
		}
		if (a3 == *(_QWORD*)(a1 + 1024))
		{
			*(_QWORD*)(a1 + 1060) = 0i64;
			*(_DWORD*)(a1 + 1068) = 2;
			return sub_140173690(a1);
		}
	}
	return result;
}
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

