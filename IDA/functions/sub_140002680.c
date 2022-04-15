#include "../winhttp.h"

//----- (0000000140002680) ----------------------------------------------------
__int64 __fastcall sub_140002680(__int64 a1)
{
	_DWORD* v1; // rdx
	int v3; // ebp
	_DWORD* v4; // rsi
	unsigned int* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	unsigned int v9; // ecx
	__int64 result; // rax

	v1 = *(_DWORD**)(a1 + 96);
	v3 = 0;
	*(_DWORD*)(a1 + 472) = *v1;
	*(_DWORD*)(a1 + 476) = v1[1];
	if (*(int*)(a1 + 104) > 0)
	{
		v4 = (_DWORD*)(a1 + 152);
		v5 = (unsigned int*)(a1 + 356);
		do
		{
			sub_14018B900(*(_QWORD*)(v5 - 9), 0);
			v6 = *(_QWORD*)(v5 - 7);
			*(_QWORD*)(v5 - 9) = 0i64;
			sub_14018B900(v6, 0);
			v7 = *(_QWORD*)(v5 - 5);
			*(_QWORD*)(v5 - 7) = 0i64;
			sub_14018B900(v7, 0);
			v8 = *(_QWORD*)(v5 - 3);
			*(_QWORD*)(v5 - 5) = 0i64;
			sub_14018B900(v8, 0);
			*(_QWORD*)(v5 - 1) = 0i64;
			*(_QWORD*)(v5 - 3) = 0i64;
			v9 = (*(_DWORD*)(a1 + 108) + 3) & 0xFFFFFFFC;
			*(v5 - 1) = v9;
			*v5 = (*(_DWORD*)(a1 + 116) + 3) & 0xFFFFFFFC;
			if (*(v4 - 4))
				*(_QWORD*)(v5 - 9) = sub_14018B280(*(_DWORD*)(a1 + 112) * v9, 0);
			if (*v4)
				*(_QWORD*)(v5 - 7) = sub_14018B280(*v5 * *(_DWORD*)(a1 + 120), 0);
			if (v4[4])
				*(_QWORD*)(v5 - 5) = sub_14018B280(*v5 * *(_DWORD*)(a1 + 120), 0);
			if (v4[8])
				*(_QWORD*)(v5 - 3) = sub_14018B280(*(v5 - 1) * *(_DWORD*)(a1 + 112), 0);
			++v3;
			v5 += 10;
			v4 += 16;
		} while (v3 < *(_DWORD*)(a1 + 104));
	}
	result = sub_1400024B0(a1);
	if ((int)result >= 0)
	{
		*(_DWORD*)a1 = 0;
		return 0i64;
	}
	return result;
}

