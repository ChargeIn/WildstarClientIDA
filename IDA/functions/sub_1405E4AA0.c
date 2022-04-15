#include "../winhttp.h"

//----- (00000001405E4AA0) ----------------------------------------------------
void __fastcall sub_1405E4AA0(_QWORD* a1)
{
	unsigned int v2; // esi
	__int64 v3; // rax
	__int64 v4; // r14
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx

	v2 = 0;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = 8 * v3;
			*(_QWORD*)(*(_QWORD*)(8 * v3 + *a1) + 72i64) = 0i64;
			*(_QWORD*)(*(_QWORD*)(8 * v3 + *a1) + 128i64) = 0i64;
			v5 = *(_QWORD**)(8 * v3 + *a1);
			if (v5)
			{
				v6 = v5[15];
				if (v6)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
				v7 = v5[13];
				if (v7)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
				v8 = v5[11];
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				v9 = v5[8];
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
				sub_14018B900((__int64)v5, 0);
			}
			++v2;
			*(_QWORD*)(v4 + *a1) = 0i64;
			v3 = v2;
		} while ((unsigned __int64)v2 < a1[1]);
		a1[1] = 0i64;
	}
	else
	{
		a1[1] = 0i64;
	}
}

