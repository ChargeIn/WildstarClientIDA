#include "../winhttp.h"

//----- (00000001404B7540) ----------------------------------------------------
void __fastcall sub_1404B7540(__int64 a1, unsigned int a2)
{
	unsigned int v2; // edi
	__int64 v3; // rcx
	__int64 v4; // rbx
	__int128 v5; // [rsp+20h] [rbp-A8h] BYREF
	unsigned int v6; // [rsp+30h] [rbp-98h]
	int v7; // [rsp+34h] [rbp-94h]
	int v8; // [rsp+40h] [rbp-88h]

	v2 = sub_1404BC060(qword_140C659F0, a2);
	if ((unsigned int)sub_1404BA200(v3, v2, 0))
	{
		v4 = sub_1405B1510(&qword_140C7DFB0);
		if (v4)
		{
			sub_1407E4830((int*)&v5, 0i64, 0x88ui64);
			v8 = 2;
			v6 = v2;
			v7 = 0;
			v5 = *(_OWORD*)(v4 + 8);
			sub_1403F4900(qword_140C65898, 0x510u, (__int64)&v5);
		}
	}
	else
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingTheseResourcesRequired", byte_1409D0F87);
	}
}
// 1404B756E: variable 'v3' is possibly undefined
// 1409D0F87: using guessed type _BYTE byte_1409D0F87[13];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

