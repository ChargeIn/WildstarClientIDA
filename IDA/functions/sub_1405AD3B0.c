#include "../winhttp.h"

//----- (00000001405AD3B0) ----------------------------------------------------
void __fastcall sub_1405AD3B0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v4; // eax
	__int64 v5; // rcx

	if (a2 || *(_DWORD*)(a1 + 192) != 1)
	{
		v2 = sub_1404CB280(qword_140C659F8, a2);
		v3 = v2;
		if (!v2)
			goto LABEL_9;
		if (*(_DWORD*)(v2 + 304))
			return;
		v4 = *(_DWORD*)(v2 + 128);
		v5 = (unsigned int)(v4 - 1);
		if ((unsigned int)v5 <= 2 || v4 == 4 && (unsigned int)sub_140724910(v3))
		{
		LABEL_9:
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "HousingFreePlaceDecorQuery", &unk_1409D0F4E);
		}
		else
		{
			sub_1404C9520(v5, v3);
			Apollo_LUAEvent(
				*(_QWORD*)(qword_140C65898 + 29504),
				"HousingFreePlaceDecorSelected",
				byte_1409EBDA4,
				*(unsigned int*)(v3 + 496));
		}
	}
}
// 1405AD40E: variable 'v5' is possibly undefined
// 1409EBDA4: using guessed type _BYTE byte_1409EBDA4[168];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F8: using guessed type __int64 qword_140C659F8;

