#include "../winhttp.h"

//----- (0000000140006D60) ----------------------------------------------------
__int64 __fastcall sub_140006D60(__int64 a1, unsigned __int16* a2, __int64* a3)
{
	unsigned __int64 v3; // rdi
	__int64 v4; // r11
	__int64 i; // rbx
	unsigned __int16* v7; // r9
	__int64 v8; // r8
	int v9; // eax
	int v10; // ecx
	__int64 v12; // rax
	unsigned __int16* v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 64);
	v4 = 0i64;
	if (!v3)
		return 2147500037i64;
	for (i = *(_QWORD*)(a1 + 56); ; i += 8i64)
	{
		v7 = *(unsigned __int16**)(***(_QWORD***)i + 56i64);
		if (v7 == a2)
			break;
		if (v7)
		{
			if (a2)
			{
				v8 = 0i64;
				if (*v7 == *a2)
				{
					LOWORD(v9) = *v7;
					while ((_WORD)v9)
					{
						v9 = v7[v8 + 1];
						v10 = a2[++v8];
						if (v9 != v10)
							goto LABEL_10;
					}
					break;
				}
			}
		}
	LABEL_10:
		if (++v4 >= v3)
			return 2147500037i64;
	}
	v13 = 0i64;
	v14 = 0i64;
	v15 = 0i64;
	v12 = *a3;
	v13 = a2;
	v14 = v12;
	v15 = a3[1];
	sub_140016010(qword_140C635F0, 0x3F2u, (__int64)&v13);
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

