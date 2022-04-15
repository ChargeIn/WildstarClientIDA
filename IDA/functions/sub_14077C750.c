#include "../winhttp.h"

//----- (000000014077C750) ----------------------------------------------------
void __fastcall sub_14077C750(_QWORD* a1)
{
	unsigned __int64 i; // rsi
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rcx

	for (i = 0i64; i < a1[1]; ++i)
	{
		v3 = *(_QWORD*)(a1[2] + 8 * i);
		if (v3)
		{
			do
			{
				v4 = *(_QWORD*)(v3 + 24);
				v5 = *(_QWORD*)(v3 + 8);
				if (v4)
				{
					v6 = *(_QWORD*)(v4 + 8);
					if (v6)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
					sub_14018B900(v4, 0);
				}
				v3 = v5;
			} while (v5);
		}
	}
	sub_140019490(a1);
	sub_14018B900(a1[2], 0);
	a1[2] = 0i64;
}

