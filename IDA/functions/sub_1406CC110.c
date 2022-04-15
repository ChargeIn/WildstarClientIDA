#include "../winhttp.h"

//----- (00000001406CC110) ----------------------------------------------------
char __fastcall sub_1406CC110(__int64 a1)
{
	int v1; // edi
	int v3; // eax
	__int64 v5; // [rsp+20h] [rbp-38h]

	v1 = 0;
	if (!*(_QWORD*)(a1 + 1600))
	{
		v3 = sub_14062A4C0(
			(_DWORD*)(qword_140C65898 + 27592),
			*(_WORD**)(a1 + 1472),
			*(_QWORD*)(a1 + 1504),
			*(_QWORD*)(a1 + 1536),
			*(_QWORD*)(a1 + 1568),
			*(_DWORD*)(a1 + 1608),
			*(_QWORD*)(a1 + 1616));
		goto LABEL_5;
	}
	if ((unsigned int)sub_1406B4CF0())
	{
		v3 = sub_14062A5F0(
			qword_140C65898 + 27592,
			*(unsigned __int16**)(a1 + 1472),
			*(_QWORD*)(a1 + 1504),
			*(_QWORD*)(a1 + 1536),
			*(_QWORD*)(a1 + 1568),
			*(_DWORD*)(a1 + 1608),
			*(_QWORD*)(a1 + 1624),
			*(_QWORD*)(a1 + 1616),
			(_QWORD*)(a1 + 1592));
	LABEL_5:
		LOBYTE(v1) = v3 >= 0;
	}
	LODWORD(v5) = v1;
	return sub_1400D4040(a1, "EmailSent", (char*)a1, "b", v5);
}
// 1406CC201: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

