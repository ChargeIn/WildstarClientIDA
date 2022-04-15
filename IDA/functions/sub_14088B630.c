#include "../winhttp.h"

//----- (000000014088B630) ----------------------------------------------------
void __fastcall sub_14088B630(__int64 a1)
{
	bool v1; // zf
	__int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rax
	int v8; // ebx

	v1 = (*(_DWORD*)(a1 + 80))-- == 1;
	if (v1)
	{
		v3 = *(_QWORD*)(a1 + 16);
		if (v3)
		{
			v4 = *(_QWORD*)(v3 + 48);
			v5 = 0i64;
			v6 = v4;
			if (v4)
			{
				while (v6 != a1)
				{
					v5 = v6;
					v6 = *(_QWORD*)(v6 + 8);
					if (!v6)
						goto LABEL_12;
				}
				if (v6)
				{
					v1 = v6 == v4;
					v7 = *(_QWORD*)(v6 + 8);
					if (v1)
					{
						*(_QWORD*)(v3 + 48) = v7;
						sub_14088B630(v3, v5);
					}
					else
					{
						*(_QWORD*)(v5 + 8) = v7;
						((void (*)(void))sub_14088B630)();
					}
				}
			}
		}
		else
		{
			sub_14088AC10(qword_140C629C0, a1);
		}
	LABEL_12:
		v8 = dword_140C10F20;
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, 0i64);
		sub_140881720(v8, a1);
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C629C0: using guessed type __int64 qword_140C629C0;

