#include "../winhttp.h"

//----- (000000014051ED80) ----------------------------------------------------
void __fastcall sub_14051ED80(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // ecx
	int v4; // ebx
	int v5; // [rsp+20h] [rbp-28h]
	__int64 v6; // [rsp+30h] [rbp-18h] BYREF
	__int64 v7; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 16);
	if (v1 && sub_1403ACBB0(qword_140C65898 + 160, v1))
	{
		v3 = *(_DWORD*)(a1 + 24);
		v6 = 0i64;
		v7 = 0i64;
		v6 = *(_QWORD*)(a1 + 16);
		HIDWORD(v7) = v3;
		v4 = 0;
		LODWORD(v7) = (unsigned __int8)(sub_14040F320(v3) - 1) <= 5u;
		sub_1403F4900(qword_140C65898, 0x859u, (__int64)&v6);
		if ((_DWORD)v7)
			v4 = HIDWORD(v7);
		v5 = v4;
		sub_1400D4040(*(_QWORD*)(a1 + 8), "RuneSlotAdded", *(char**)(a1 + 8), L"i", v5);
	}
}
// 140B6B8F8: using guessed type wchar_t aI_12[2];
// 140C65898: using guessed type __int64 qword_140C65898;

