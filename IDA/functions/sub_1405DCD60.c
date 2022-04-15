#include "../winhttp.h"

//----- (00000001405DCD60) ----------------------------------------------------
int* __fastcall sub_1405DCD60(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // rbx
	__int64 v4; // rsi
	__int64 i; // r8
	int* result; // rax
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rcx

	v2 = *(_QWORD*)(a1 + 112);
	v3 = 0i64;
	if (v2)
	{
		v4 = a1 + 104;
		for (i = *(_QWORD*)(a1 + 104); ; i += 8i64)
		{
			if (*(_DWORD*)(*(_QWORD*)i + 8i64) == *(_DWORD*)a2)
			{
				result = *(int**)(a2 + 8);
				if (*(int**)(*(_QWORD*)i + 16i64) == result)
					break;
			}
			if (++v3 >= v2)
				return result;
		}
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 8 * v3);
		if (v7)
		{
			sub_1400B6120(qword_140C65BA0 + 480, v7 + 8);
			v8 = *(_QWORD*)(v7 + 56);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			v9 = *(_QWORD*)(v7 + 48);
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
			sub_14018B900(v7, 0);
		}
		return sub_140007270(v4, v3);
	}
	return result;
}
// 140C65BA0: using guessed type __int64 qword_140C65BA0;

