#include "../winhttp.h"

//----- (0000000140452A30) ----------------------------------------------------
void __fastcall sub_140452A30(__int64 a1, int a2, __int64 a3)
{
	int v3; // edx
	int v4; // edx
	int v5; // edx
	__int16* v6; // rax

	if (!qword_140C65898)
		return;
	if (!a2)
	{
		v5 = 763771;
		goto LABEL_11;
	}
	v3 = a2 - 1;
	if (!v3)
	{
		v5 = 763783;
		goto LABEL_11;
	}
	v4 = v3 - 1;
	if (!v4)
	{
		v5 = 763772;
	LABEL_11:
		v6 = sub_14034BDD0(qword_140C65898, v5);
		Apollo_LUAEvent(
			*(_QWORD*)(qword_140C65898 + 29504),
			"GenericFloater",
			"US",
			*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
			v6);
		return;
	}
	if (v4 == 1)
	{
		if (a3)
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ConfirmPartialUnlock", "O", a3);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

