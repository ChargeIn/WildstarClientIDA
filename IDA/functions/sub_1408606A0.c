#include "../winhttp.h"

//----- (00000001408606A0) ----------------------------------------------------
void __fastcall sub_1408606A0(__int64 a1)
{
	char v1; // al
	__int64 v3; // rax
	float v4; // xmm6_4
	float v5; // xmm0_4
	__int64 v6; // rcx
	bool v7; // bl
	_DWORD* v8; // rcx
	unsigned __int16* v9; // rax

	v1 = *(_BYTE*)(a1 + 379);
	if ((v1 & 3) != 0)
	{
		if ((v1 & 0xC) == 4)
		{
			if ((*(_BYTE*)(*(_QWORD*)(a1 + 88) + 76i64) & 8) != 0 || (*(_BYTE*)(a1 + 380) & 0x40) == 0)
			{
				v3 = *(_QWORD*)(a1 + 176);
				v4 = *(float*)(v3 + 100);
				v5 = sub_140843DB0(v3 + 8).m128_f32[0];
				sub_14085D4B0(a1, v5 / v4, *(_QWORD*)(a1 + 88) + 8i64);
			}
		}
		else
		{
			v6 = *(_QWORD*)(a1 + 504);
			if (v6)
			{
				v7 = (*(_BYTE*)(*(_QWORD*)(a1 + 88) + 76i64) & 0x20) != 0;
				sub_140867B00(v6, v7);
				if (v7)
				{
					v8 = *(_DWORD**)(a1 + 504);
					if ((v8[10] & 2) != 0 && sub_1408677E0(v8))
					{
						v9 = (unsigned __int16*)sub_14084EB00(*(_QWORD*)(a1 + 160));
						sub_14083A800(qword_140C61B98, *(_QWORD*)(a1 + 504), v9);
					}
				}
			}
		}
	}
	else
	{
		*(_DWORD*)(a1 + 464) = 1120534528;
	}
}
// 140C61B98: using guessed type __int64 qword_140C61B98;

