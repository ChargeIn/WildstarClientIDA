#include "../winhttp.h"

//----- (0000000140061B00) ----------------------------------------------------
__int64 __fastcall sub_140061B00(__int64 a1, __int64 a2)
{
	__int64 v3; // r15
	__int64 v4; // rdx
	int v5; // ecx
	void(__fastcall * v6)(__int64, int*); // rdi
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v9; // r14
	int v10; // edx
	int v11; // edx
	__int64 v12; // rax
	__int64 v13; // rcx
	int v15[32]; // [rsp+20h] [rbp-A8h] BYREF

	v3 = a2 - *(_QWORD*)(a1 + 64);
	sub_1400613E0(a1, 1, -1);
	if (!*(_BYTE*)(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64) + 10i64) && (*(_BYTE*)(a1 + 100) & 2) != 0)
	{
		do
		{
			v4 = *(_QWORD*)(a1 + 40);
			v5 = *(_DWORD*)(v4 + 36);
			*(_DWORD*)(v4 + 36) = v5 - 1;
			if (!v5)
				break;
			v6 = *(void(__fastcall**)(__int64, int*))(a1 + 112);
			if (v6 && *(_BYTE*)(a1 + 101))
			{
				v7 = *(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 64);
				v8 = *(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16);
				v9 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) - *(_QWORD*)(a1 + 64);
				v15[0] = 4;
				v15[10] = -1;
				v15[29] = 0;
				if (v8 <= 320)
				{
					v10 = *(_DWORD*)(a1 + 88);
					if (v10 < 20)
						v11 = v10 + 20;
					else
						v11 = 2 * v10;
					sub_140061210(a1, v11);
				}
				*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) = *(_QWORD*)(a1 + 16) + 320i64;
				*(_BYTE*)(a1 + 101) = 0;
				v6(a1, v15);
				v12 = *(_QWORD*)(a1 + 40);
				v13 = v9 + *(_QWORD*)(a1 + 64);
				*(_BYTE*)(a1 + 101) = 1;
				*(_QWORD*)(v12 + 16) = v13;
				*(_QWORD*)(a1 + 16) = v7 + *(_QWORD*)(a1 + 64);
			}
		} while ((*(_BYTE*)(a1 + 100) & 2) != 0);
	}
	return v3 + *(_QWORD*)(a1 + 64);
}

