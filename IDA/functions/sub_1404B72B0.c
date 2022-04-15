#include "../winhttp.h"

//----- (00000001404B72B0) ----------------------------------------------------
__int64 __fastcall sub_1404B72B0(__int64 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // edi
	int v11; // esi
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rcx

	v8 = sub_1404BC160(a1, a2);
	v10 = 0;
	v11 = 0;
	if (v8)
	{
		LOBYTE(v11) = *(_DWORD*)(v8 + 4) == 0;
		if (v11)
			goto LABEL_23;
	}
	if (!(unsigned int)sub_1404BA200(v9, a2, a3))
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingTheseResourcesRequired", byte_1409D0F87);
		return 0i64;
	}
	if (a2 && a3 && (v13 = sub_1404BC160(v9, a2)) != 0 && (LOBYTE(v10) = *(_DWORD*)(v13 + 4) == a3, v10))
	{
		v14 = sub_1404BC160(v9, a2);
		if (!v14)
			return 0i64;
		if (*(_DWORD*)(v14 + 8) == a4)
			return 0i64;
		v15 = sub_140206C60(*(_DWORD*)(v14 + 4));
		if (!v15)
			return 0i64;
		if ((*(_BYTE*)(v15 + 32) & 0x10) == 0)
			return 0i64;
	}
	else
	{
	LABEL_23:
		if ((unsigned int)sub_1404B6E90(v9, a2) || !(unsigned int)sub_1404B6F80(v16, a3))
			return 0i64;
		if (!v11 && !a5)
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingConfirmReplace", byte_1409EBFDC, a2, a3);
			return 0i64;
		}
	}
	return 1i64;
}
// 1404B72F0: variable 'v9' is possibly undefined
// 1404B7376: variable 'v16' is possibly undefined
// 1409D0F87: using guessed type _BYTE byte_1409D0F87[13];
// 1409EBFDC: using guessed type _BYTE byte_1409EBFDC[64];
// 140C65898: using guessed type __int64 qword_140C65898;

