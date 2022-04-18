#include "../winhttp.h"

//----- (00000001403CD800) ----------------------------------------------------
void __fastcall sub_1403CD800(__int64 a1, unsigned __int8 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	int v5; // [rsp+20h] [rbp-18h]
	int v6; // [rsp+20h] [rbp-18h]
	unsigned __int8 v7; // [rsp+48h] [rbp+10h] BYREF

	v2 = qword_140C65898;
	if (a2 >= 4u)
	{
		v5 = 1;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "SpecChanged", byte_1409ECDE4, (unsigned int)a2 + 1, v5);
		return;
	}
	if (a2 == *(_DWORD*)(qword_140C65898 + 28140))
	{
		v6 = 2;
	LABEL_12:
		Apollo_LUAEvent(*(_QWORD*)(v2 + 29504), "SpecChanged", byte_1409ECDE4, (unsigned int)a2 + 1, v6);
		return;
	}
	v4 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v4 && *(_DWORD*)(v4 + 684))
	{
		v6 = 3;
		goto LABEL_12;
	}
	if ((*(_BYTE*)(qword_140C65898 + 4i64 * a2 + 5192) & 1) == 0)
	{
		v6 = 5;
		goto LABEL_12;
	}
	if (!(unsigned int)sub_1403A11C0())
	{
		v6 = 6;
		goto LABEL_12;
	}
	if (*(_QWORD*)(v2 + 31016) && (*(_BYTE*)(v2 + 31560) & 0x20) != 0)
	{
		if (qword_140C65808)
		{
			v7 = a2;
			sub_1403F4900(v2, 0x174u, (__int64)&v7);
		}
	}
}
// 1409ECDE4: using guessed type _BYTE byte_1409ECDE4[4];
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65898: using guessed type __int64 qword_140C65898;

