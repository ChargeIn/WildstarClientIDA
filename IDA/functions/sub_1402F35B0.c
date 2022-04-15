#include "../winhttp.h"

//----- (00000001402F35B0) ----------------------------------------------------
__int64 __fastcall sub_1402F35B0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rsi
	__int64 v3; // rdx
	int v4; // edi
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 3 * v1;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = a1 + 16 + 8 * v3;
		do
		{
			v6 = *(_QWORD*)(v5 - 24);
			v5 -= 24i64;
			if (v6)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			v7 = *(_QWORD*)(v5 - 8);
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			v8 = *(_QWORD*)(v5 - 16);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			--v4;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}

