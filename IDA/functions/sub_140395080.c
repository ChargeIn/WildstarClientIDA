#include "../winhttp.h"

//----- (0000000140395080) ----------------------------------------------------
__int64 __fastcall sub_140395080(__int64 a1, __int64 a2)
{
	int v4; // eax
	__int64 v5; // rbp
	int v6; // r14d
	_WORD* v7; // rbx
	__int64 result; // rax
	int* v9; // rax
	__int64 v10; // rdi
	int v11; // ebx
	__int64 v12; // rdi
	int* v13; // rax
	__int64 v14; // rcx
	int v15; // [rsp+20h] [rbp-18h]

	*(_QWORD*)(a1 + 8) = a2;
	v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 40i64))(*(_QWORD*)(a2 + 24)) - 1;
	if (v4)
	{
		if (v4 == 2)
		{
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64);
			v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 64i64))(*(_QWORD*)(a2 + 24));
			v7 = (_WORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 48i64))(*(_QWORD*)(a2 + 24));
			if (!qword_140C657F0)
				return 2147500037i64;
			v9 = sub_14018B280(544i64, 0);
			v10 = v9 ? sub_1402CB050((__int64)v9) : 0i64;
			v11 = sub_1402CB440(v10, v7, v6, &ymmword_140C78390, v15, v5);
			if (v11 >= 0)
			{
				*(_QWORD*)(a1 + 16) = v10;
				v11 = 0;
			}
			else if (v10)
			{
				sub_1402CB170(v10);
				sub_14018B900(v10, 0);
			}
			if (v11 < 0)
				return (unsigned int)v11;
		}
		return 0i64;
	}
	v12 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64);
	v13 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 48i64))(*(_QWORD*)(a2 + 24));
	if (!qword_140C657F0)
		return 2147500037i64;
	result = sub_1402C83A0(v14, v13, &ymmword_140C78390, (__int64*)(a1 + 16), v15, v12);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 14039512C: variable 'v15' is possibly undefined
// 140395196: variable 'v14' is possibly undefined
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 140C78390: using guessed type __m256 ymmword_140C78390;

