#include "../winhttp.h"

//----- (0000000140774590) ----------------------------------------------------
void __fastcall sub_140774590(__int64 a1, int a2)
{
	_QWORD** v2; // rax
	_QWORD* v5; // rbx
	unsigned __int64 i; // rdi
	__int64 v7; // rcx
	_QWORD* v8; // rax
	_QWORD* v9; // rdi
	__int64 v10; // rcx

	v2 = *(_QWORD***)(a1 + 56);
	v5 = *v2;
	if (*v2 != v2)
	{
		do
		{
			for (i = 0i64; i < v5[4]; ++i)
			{
				v7 = *(_QWORD*)(v5[3] + 8 * i);
				if (*(_DWORD*)(v7 + 12) == a2)
				{
					if (v7)
						(**(void(__fastcall***)(__int64, __int64))v7)(v7, 1i64);
					sub_140007270((__int64)(v5 + 3), i--);
				}
			}
			if (v5[4])
			{
				v5 = (_QWORD*)*v5;
			}
			else
			{
				v8 = (_QWORD*)v5[1];
				v9 = (_QWORD*)*v5;
				*v8 = *v5;
				v9[1] = v8;
				v10 = v5[3];
				if (v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
				sub_14018B900((__int64)v5, 0);
				v5 = v9;
			}
		} while (v5 != *(_QWORD**)(a1 + 56));
	}
}

