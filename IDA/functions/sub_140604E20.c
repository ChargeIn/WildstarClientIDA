#include "../winhttp.h"

//----- (0000000140604E20) ----------------------------------------------------
void __fastcall sub_140604E20(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rbx
	__int64 v5; // r8
	__int64 v6; // rdx
	char* v7; // rax
	__int64 v8; // r8
	__int16 v9; // cx
	unsigned __int64 v10; // [rsp+30h] [rbp-78h] BYREF
	char v11[80]; // [rsp+40h] [rbp-68h] BYREF

	v3 = *(_QWORD*)(a1 + 64);
	if (v3)
	{
		if (sub_14079EE60(*(_QWORD*)(a1 + 64), a2, &v10))
		{
			v5 = *(_QWORD*)(*(_QWORD*)(v3 + 88) + 8 * v10);
			if (v5)
			{
				v6 = 33i64;
				v7 = v11;
				v8 = v5 - (_QWORD)v11;
				while (v6 != -2147483613)
				{
					v9 = *(_WORD*)&v7[v8 + 32];
					if (!v9)
						break;
					*(_WORD*)v7 = v9;
					v7 += 2;
					if (!--v6)
					{
						v7 -= 2;
						break;
					}
				}
				*(_WORD*)v7 = 0;
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Group_Operation_Result", byte_1409EA344, v11, a3);
			}
		}
	}
}
// 140604EB8: conditional instruction was optimized away because rdx.8!=0
// 1409EA344: using guessed type _BYTE byte_1409EA344[40];
// 140C65898: using guessed type __int64 qword_140C65898;

