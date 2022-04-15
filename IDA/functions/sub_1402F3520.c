#include "../winhttp.h"

//----- (00000001402F3520) ----------------------------------------------------
__int64 __fastcall sub_1402F3520(__int64 a1)
{
	__int64 v1; // r14
	int v2; // esi
	__int64* v3; // rdi
	__int64 v4; // rbx
	__int64 v5; // rcx

	v1 = a1 - 16;
	v2 = *(_DWORD*)(a1 - 16) - 1;
	if (v2 >= 0)
	{
		v3 = (__int64*)(a1 + 352i64 * *(int*)(a1 - 16) + 16);
		do
		{
			v3 -= 44;
			sub_14018B900(*(v3 - 1), 0);
			v4 = *v3;
			if (*v3)
			{
				v5 = *(_QWORD*)(v4 + 8);
				if (v5)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				sub_14018B900(v4, 0);
			}
			--v2;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}

