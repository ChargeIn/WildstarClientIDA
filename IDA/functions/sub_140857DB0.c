#include "../winhttp.h"

//----- (0000000140857DB0) ----------------------------------------------------
void __fastcall sub_140857DB0(__int64 a1, int a2, int a3, char a4)
{
	char* v4; // rbx
	char v5; // al
	char* v9; // r14
	__int64 v10; // rdx
	unsigned __int64 v11; // rcx
	int v12; // [rsp+60h] [rbp+8h] BYREF
	int v13; // [rsp+64h] [rbp+Ch]
	char v14; // [rsp+78h] [rbp+20h]

	v14 = a4;
	v4 = *(char**)(a1 + 72);
	v5 = 0;
	if (v4 != *(char**)(a1 + 80))
	{
		v9 = v4 + 28;
		do
		{
			if (*((_DWORD*)v9 - 5) == a2 && *((_DWORD*)v9 - 6) == a3)
			{
				v10 = *(_QWORD*)(v9 - 12);
				if (v10)
				{
					sub_140881720(dword_140C10F20, v10);
					*(_QWORD*)(v9 - 12) = 0i64;
				}
				*(_QWORD*)(v9 - 4) = 0i64;
				v11 = *(_QWORD*)(a1 + 80) - 32i64;
				if ((unsigned __int64)v4 < v11)
					qmemcpy(
						v4,
						v9 + 4,
						8 * (((((v11 - (unsigned __int64)v4 - 1) >> 3) & 0xFFFFFFFFFFFFFFFCui64) + 4) & 0x1FFFFFFFFFFFFFFCi64));
				*(_QWORD*)(a1 + 80) -= 32i64;
				v5 = 1;
			}
			else
			{
				v4 += 32;
				v9 += 32;
			}
		} while (v4 != *(char**)(a1 + 80));
		if (v5)
		{
			if (v14)
			{
				v12 = a2;
				v13 = a3;
				sub_140832480(a1, (void(__fastcall*)(_QWORD, _QWORD, __int64))sub_140857EC0, (__int64)&v12);
			}
		}
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

