#include "../winhttp.h"

//----- (00000001404FEDC0) ----------------------------------------------------
void __fastcall sub_1404FEDC0(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rsi
	const void*** v8; // rbx
	const void** i; // rcx
	const void*** v10; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 2192);
	if (v2)
	{
		if (*(_QWORD*)(v2 + 16))
		{
			v4 = sub_1407A0FD0(qword_140C65B70, a2);
			v5 = v4;
			if (v4)
			{
				v6 = *(_QWORD*)(v4 + 8);
				if (v6)
				{
					if (*(_DWORD*)(v6 + 28))
					{
						v7 = a1 + 2232;
						if ((unsigned int)sub_1402DD480(a1 + 2232, v6 + 28, &v10))
						{
							v8 = v10;
							for (i = *v10; *v8; i = *v8)
								(*((void(__fastcall**)(const void**, __int64, __int64)) * i + 5))(i, 1i64, 1i64);
							sub_1400B6120(v7, *(_QWORD*)(v5 + 8) + 28i64);
							if (*v8)
								sub_1401A4A00(v8);
							sub_14018B900((__int64)v8, 0);
						}
					}
				}
			}
		}
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

