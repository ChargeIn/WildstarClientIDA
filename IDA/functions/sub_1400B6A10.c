#include "../winhttp.h"

//----- (00000001400B6A10) ----------------------------------------------------
void __fastcall sub_1400B6A10(__int64 a1, int a2)
{
	int* v3; // rsi
	__int64 v4; // rax
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	__int64 v8; // rbp
	__int64 v9; // rdi
	_QWORD* v10; // rbx
	int v11; // eax
	__int64 v12; // rbx
	__int64 v13; // [rsp+40h] [rbp+8h] BYREF

	*(_DWORD*)(a1 + 16) = a2;
	if (a2)
	{
		if (a2 == 1)
		{
			(*(void(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)a1 + 136i64))(a1, L"sex", 134559i64);
		}
		else
		{
			v3 = 0i64;
			v4 = 0i64;
			while (aSex_2[++v4] != 0)
				;
			v6 = (2 * v4) >> 1;
			if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v3 = sub_14018B280(2 * (v6 + 1), 0);
			v7 = 2 * v6;
			sub_1407DB590(v3, (int*)L"sex", v7);
			if ((int*)((char*)v3 + v7))
				*(_WORD*)((char*)v3 + v7) = 0;
			v8 = *(_QWORD*)(a1 + 64);
			v9 = v8;
			v10 = *(_QWORD**)(v8 + 8);
			while (v10)
			{
				if ((int)sub_14018E2C0(v10[5], (unsigned __int16*)v3) < 0)
				{
					v10 = (_QWORD*)v10[3];
				}
				else
				{
					v9 = (__int64)v10;
					v10 = (_QWORD*)v10[2];
				}
			}
			if (v9 == v8 || (v11 = sub_14018E2C0((__int64)v3, *(unsigned __int16**)(v9 + 40)), v13 = v9, v11 < 0))
				v13 = v8;
			v12 = v13;
			if (v3)
				sub_14018B900((__int64)v3, 0);
			if (v12 != *(_QWORD*)(a1 + 64))
			{
				v13 = v12;
				sub_1400B9310(a1 + 56, &v13);
			}
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)a1 + 136i64))(a1, L"sex", 134622i64);
	}
}
// 140A13CF0: using guessed type wchar_t aSex_2[4];
// 140A13CF8: using guessed type wchar_t aSex_1[4];
// 140A13D00: using guessed type wchar_t aSex_0[4];

