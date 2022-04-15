#include "../winhttp.h"

//----- (00000001408F81A0) ----------------------------------------------------
void __fastcall sub_1408F81A0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rdi
	unsigned int v4; // eax
	unsigned int v5; // eax
	__int64 v6; // rsi
	__int64 v7; // rbp
	float v8; // xmm0_4

	v1 = *(_QWORD*)(a1 + 24);
	v2 = 0i64;
	*(_DWORD*)(a1 + 592) = 0;
	if (*(_BYTE*)(v1 + 152))
	{
		v4 = *(_DWORD*)(a1 + 16);
		if (v4 >= 2)
		{
			v5 = v4 - 1;
			if (v5)
			{
				v6 = 12i64;
				v7 = v5;
				do
				{
					v8 = sub_1408F95F0(
						*(float*)(v2 + *(_QWORD*)(a1 + 8)),
						*(float*)(v2 + *(_QWORD*)(a1 + 8) + 4),
						*(float*)(v6 + *(_QWORD*)(a1 + 8)),
						*(float*)(v6 + *(_QWORD*)(a1 + 8) + 4));
					v6 += 12i64;
					v2 += 12i64;
					*(float*)(a1 + 592) = v8 + *(float*)(a1 + 592);
					--v7;
				} while (v7);
			}
		}
	}
}

