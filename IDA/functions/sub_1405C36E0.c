#include "../winhttp.h"

//----- (00000001405C36E0) ----------------------------------------------------
void __fastcall sub_1405C36E0(__int64 a1, int a2)
{
	__int64 v2; // rax
	int v3; // eax
	int v4; // ecx
	int v5; // eax
	__int64 v6; // [rsp+20h] [rbp-18h] BYREF
	int v7; // [rsp+28h] [rbp-10h]

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2)
		v3 = *(_DWORD*)(v2 + 220);
	else
		v3 = 23;
	switch (v3)
	{
	case 1:
	case 2:
	case 5:
		v4 = 5;
		break;
	case 3:
	case 4:
	case 7:
		v4 = 6;
		break;
	default:
		v4 = 0;
		break;
	}
	v6 = 0i64;
	v7 = 0;
	v5 = *(_DWORD*)(qword_140C65B98 + 272);
	HIDWORD(v6) = a2 & v4;
	LODWORD(v6) = v5;
	v7 = 1;
	sub_1403F4900(qword_140C65898, 0x5B2u, (__int64)&v6);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

