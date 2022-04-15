#include "../winhttp.h"

//----- (00000001400C6E70) ----------------------------------------------------
char __fastcall sub_1400C6E70(__int64 a1)
{
	int* v3; // rax
	__int64 i; // rdi
	int* v5; // rax
	int* v6; // rbx
	int* v7; // rax
	int v8; // xmm0_4
	void(__fastcall * **v9)(_QWORD); // rbx
	_QWORD* v10; // r14

	if ((*(_BYTE*)(a1 + 656) & 8) == 0)
		return 0;
	if (!*(_QWORD*)(a1 + 480))
	{
		v3 = sub_14018B280(64i64, 0);
		*(_QWORD*)(a1 + 480) = v3;
		*(_QWORD*)v3 = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 480) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 480) + 16i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 480) + 24i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 480) + 32i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 480) + 40i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 480) + 48i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 480) + 56i64) = 0i64;
	}
	for (i = 0i64; i < 64; i += 8i64)
	{
		if (!*(_QWORD*)(i + *(_QWORD*)(a1 + 480)))
		{
			v5 = sub_14018B280(48i64, 0);
			v6 = v5;
			if (v5)
			{
				*((_QWORD*)v5 + 3) = 0i64;
				*((_QWORD*)v5 + 4) = 0i64;
				*((_QWORD*)v5 + 5) = 0i64;
				v7 = sub_14018B280(16i64, 0);
				*((_QWORD*)v6 + 3) = v7;
				*((_QWORD*)v6 + 4) = v7;
				*((_QWORD*)v6 + 5) = v7 + 4;
				if (v7)
					*(_WORD*)v7 = 0;
				v8 = dword_140C63664;
				*(_QWORD*)v6 = 0i64;
				v6[3] = 1065353216;
				v6[2] = v8;
			}
			else
			{
				v6 = 0i64;
			}
			*(_QWORD*)(i + *(_QWORD*)(a1 + 480)) = v6;
		}
		v9 = *(void(__fastcall****)(_QWORD))(i + *(_QWORD*)(a1 + 48) + 80);
		v10 = *(_QWORD**)(i + *(_QWORD*)(a1 + 480));
		if (v9 != (void(__fastcall***)(_QWORD)) * v10)
		{
			if (v9)
				(**v9)(*(_QWORD*)(i + *(_QWORD*)(a1 + 48) + 80));
			if (*v10)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v10 + 8i64))(*v10);
				*v10 = 0i64;
			}
			*v10 = v9;
		}
	}
	return 1;
}
// 140C63664: using guessed type int dword_140C63664;

