#include "../winhttp.h"

//----- (0000000140051620) ----------------------------------------------------
__int64 sub_140051620()
{
	__int64 v0; // rbx
	__int64 v1; // rcx
	unsigned int v2; // eax
	__int64 v3; // rbx
	unsigned int v4; // edi
	__int64 result; // rax

	v0 = qword_140C63628;
	if (!qword_140C63628)
		return 0i64;
	sub_140050CA0((_QWORD*)qword_140C63628);
	sub_1400BC4A0(v0 + 16);
	v1 = *(_QWORD*)(v0 + 744);
	if (v1)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v1 + 8i64))(v1);
		*(_QWORD*)(v0 + 744) = 0i64;
	}
	if (qword_140C65850)
		sub_14033FB30(v1, v0);
	v2 = sub_14033EF30();
	v3 = qword_140C63628;
	v4 = v2;
	if (qword_140C63628)
	{
		sub_14004F810((_QWORD*)qword_140C63628);
		sub_14018B900(v3, 0);
	}
	result = v4;
	qword_140C63628 = 0i64;
	return result;
}
// 140051676: variable 'v1' is possibly undefined
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65850: using guessed type __int64 qword_140C65850;

