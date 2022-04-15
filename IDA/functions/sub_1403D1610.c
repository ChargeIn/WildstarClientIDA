#include "../winhttp.h"

//----- (00000001403D1610) ----------------------------------------------------
void __fastcall sub_1403D1610(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	char v6; // al
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v7 = a1;
	v3 = qword_140C65898;
	if ((unsigned int)sub_1403D16C0(qword_140C65898, a2, a3))
	{
		v7 = 0i64;
		v6 = *(_BYTE*)(v3 + 28140);
		BYTE1(v7) = a2;
		HIDWORD(v7) = a3;
		LOBYTE(v7) = v6;
		sub_1403F4900(qword_140C65898, 0x151u, (__int64)&v7);
	}
	else
	{
		sub_1403D1440(v3, a2, a3);
		sub_1400EA3E0(*(_QWORD*)(v3 + 29504), "CharacterEldanAugmentationsUpdated", &unk_1409D10E6);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

