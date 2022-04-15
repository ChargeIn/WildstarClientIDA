#include "../winhttp.h"

//----- (00000001403FA610) ----------------------------------------------------
void __fastcall sub_1403FA610(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	__int64 v3; // rax

	v2 = qword_140C65898;
	if (a2 == -1)
	{
		sub_1403FA490(qword_140C65898, 0);
		sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(v2 + 32736) + 96i64), "OpenSignature", &unk_1409D13AE);
	}
	else
	{
		v3 = sub_14044FAC0(qword_140C65908, a2);
		if (v3)
			sub_1403FA580(v2, v3);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;

