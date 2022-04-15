#include "../winhttp.h"

//----- (00000001400DD490) ----------------------------------------------------
__int64 __fastcall sub_1400DD490(_QWORD* a1)
{
	__int64* v2; // rdi
	char* v3; // rax
	int* v4; // rbx
	int* i; // rcx
	int* v7; // [rsp+38h] [rbp+10h] BYREF

	v2 = (__int64*)sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
		if (v3)
		{
			if (*v3)
			{
				sub_14018D320(&v7, v3);
				v4 = v7;
				for (i = v7; *(_WORD*)i == 32 || (unsigned __int16)(*(_WORD*)i - 9) <= 4u; i = (int*)((char*)i + 2))
					;
				if (*(_WORD*)i == 60)
					sub_1400CCC20(v2, v7);
				else
					sub_1400CCB50(v2, v7);
				if (v4)
				{
					(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
					return 0i64;
				}
			}
			else
			{
				(*(void(__fastcall**)(__int64*, _QWORD))(*v2 + 488))(v2, 0i64);
			}
		}
	}
	return 0i64;
}

