#include "../winhttp.h"

//----- (0000000140836340) ----------------------------------------------------
void __fastcall sub_140836340(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
	__int64 v6; // rsi
	__int64 v7; // rbx
	float v8; // xmm6_4
	unsigned int v9; // edi
	__int64 v10; // rcx
	__int64 v11; // rcx
	float v12; // xmm1_4
	float v13; // xmm0_4
	__int64* v14; // rbp
	__int64 v15; // rax
	__int64 v16; // rax
	int v17; // [rsp+60h] [rbp+18h] BYREF

	v6 = *(_QWORD*)(a1 + 8i64 * (((int)a2 + a3) % 0xC1u) + 3112);
	if (v6)
	{
		while (*(_QWORD*)v6 != a2 || *(_DWORD*)(v6 + 8) != a3)
		{
			v6 = *(_QWORD*)(v6 + 16);
			if (!v6)
				return;
		}
		v7 = *(_QWORD*)(v6 + 40);
		v8 = 0.0;
		if (v7 != *(_QWORD*)(v6 + 48))
		{
			while (1)
			{
				v9 = *(_DWORD*)(v7 + 4);
				v10 = *(_QWORD*)(a1 + 8i64 * (v9 % 0xC1));
				if (!v10)
					break;
				while (*(_DWORD*)v10 != v9)
				{
					v10 = *(_QWORD*)(v10 + 8);
					if (!v10)
						goto LABEL_10;
				}
				v14 = (__int64*)(v10 + 24);
				v15 = sub_140834F40((__int64*)(v10 + 24), a4);
				if (v15)
				{
					v12 = *(float*)(v15 + 8);
				}
				else
				{
					if (!a4)
						break;
					v16 = sub_140834F40(v14, 0i64);
					if (!v16)
						break;
					v12 = *(float*)(v16 + 8);
				}
			LABEL_14:
				v13 = sub_140835CA0((_DWORD*)(v7 + 8), v12, 0, &v17);
				v7 += 24i64;
				v8 = v8 + v13;
				if (v7 == *(_QWORD*)(v6 + 48))
					return;
			}
		LABEL_10:
			v11 = *(_QWORD*)(a1 + 8i64 * (v9 % 0xC1));
			if (v11)
			{
				while (*(_DWORD*)v11 != v9)
				{
					v11 = *(_QWORD*)(v11 + 8);
					if (!v11)
						goto LABEL_13;
				}
				v12 = *(float*)(v11 + 16);
			}
			else
			{
			LABEL_13:
				v12 = 0.0;
			}
			goto LABEL_14;
		}
	}
}
// 14083639C: conditional instruction was optimized away because rsi.8!=0
// 14083647B: conditional instruction was optimized away because rcx.8!=0
// 1408364C1: conditional instruction was optimized away because rcx.8!=0

