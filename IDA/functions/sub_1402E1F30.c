#include "../winhttp.h"

//----- (00000001402E1F30) ----------------------------------------------------
void __fastcall sub_1402E1F30(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdi
	int* v4; // rbx
	unsigned __int64 v5; // rbp
	__int64 v6; // rax
	int* v7; // [rsp+38h] [rbp+10h] BYREF

	if (*(_QWORD*)(a2 + 168))
	{
		v3 = 0i64;
		v7 = 0i64;
		if ((int)sub_1402E1870(a2, a1, &v7) >= 0)
		{
			v4 = v7;
			v5 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v7 + 16i64))(v7);
			if (v5)
			{
				do
				{
					v6 = (*(__int64(__fastcall**)(int*, unsigned __int64))(*(_QWORD*)v4 + 24i64))(v4, v3);
					(*(void(__fastcall**)(__int64, _QWORD))(a2 + 168))(v6, *(_QWORD*)(a2 + 224));
					++v3;
				} while (v3 < v5);
			}
			(*(void(__fastcall**)(int*))(*(_QWORD*)v4 + 8i64))(v4);
		}
		else if (v7)
		{
			(*(void(__fastcall**)(int*))(*(_QWORD*)v7 + 8i64))(v7);
		}
	}
}

