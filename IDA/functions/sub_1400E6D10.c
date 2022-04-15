#include "../winhttp.h"

//----- (00000001400E6D10) ----------------------------------------------------
__int64 __fastcall sub_1400E6D10(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r12
	char v5; // al
	unsigned __int64 v10; // rsi
	__int64 v11; // rdi
	_QWORD* v12; // rax
	_QWORD** v13; // rbx
	__int64 v14; // r10
	__int64 v15; // rcx
	char v17; // [rsp+70h] [rbp+8h] BYREF

	v4 = 0i64;
	v5 = 0;
	dword_140C63644 = 0;
	v17 = 0;
	v10 = 0i64;
	if (*(_QWORD*)(a1 + 3208))
	{
		do
		{
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 3200) + 8 * v10);
			v12 = *(_QWORD**)(v11 + 56);
			if (v12 != (_QWORD*)*v12)
			{
				do
				{
					v13 = (_QWORD**)(v12 + 1);
					v14 = *(_QWORD*)(v12[1] + 16i64);
					if (*(float*)(v14 + 648) > 0.0)
					{
						v15 = *(_QWORD*)(v14 + 16);
						if ((!v15 || sub_1400D1A60(v15)) && (*(_BYTE*)(v14 + 28) & 0x10) == 0)
							sub_1400C84B0((_QWORD*)v14, a2, a3, a4, (__int64)&v17);
					}
					v12 = *v13;
				} while (*v13 != **(_QWORD***)(v11 + 56));
			}
			++v10;
		} while (v10 < *(_QWORD*)(a1 + 3208));
		v5 = v17;
	}
	LOBYTE(v4) = v5 == 0;
	return v4;
}
// 1400E6DAC: variable 'v14' is possibly undefined
// 140C63644: using guessed type int dword_140C63644;

