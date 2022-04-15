#include "../winhttp.h"

//----- (0000000140487DB0) ----------------------------------------------------
void __fastcall sub_140487DB0(__int64 a1)
{
	unsigned __int64 i; // rbx
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rcx

	for (i = 0i64; i < *(_QWORD*)(a1 + 16); ++i)
	{
		v3 = *(_QWORD*)(a1 + 8);
		v4 = *(_QWORD*)(v3 + 8 * i);
		if (v4)
		{
			sub_140008410(*(_QWORD*)(v3 + 8 * i));
			sub_14018B900(*(_QWORD*)(v4 + 8), 0);
			sub_14018B900(v4, 0);
		}
	}
	*(_QWORD*)(a1 + 16) = 0i64;
	v5 = *(_QWORD*)(a1 + 8);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
}

