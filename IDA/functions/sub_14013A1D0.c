#include "../winhttp.h"

//----- (000000014013A1D0) ----------------------------------------------------
void __fastcall sub_14013A1D0(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v2 = *(_QWORD*)(a1 + 8);
	if (v2)
	{
		sub_1400EAA10(v2, 62, (__int64)&unk_1409D053E);
		v3 = *(_QWORD**)(a1 + 48);
		v4 = (_QWORD*)v3[2];
		if (v4 != v3)
		{
			do
			{
				sub_140185F30(v4[8]);
				v5 = v4[3];
				if (v5)
				{
					v4 = (_QWORD*)v4[3];
					for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
						v4 = i;
				}
				else
				{
					for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v4 = (_QWORD*)j;
					if (v4[3] != j)
						v4 = (_QWORD*)j;
				}
			} while (v4 != *(_QWORD**)(a1 + 48));
		}
	}
}

