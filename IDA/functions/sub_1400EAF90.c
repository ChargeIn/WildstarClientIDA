#include "../winhttp.h"

//----- (00000001400EAF90) ----------------------------------------------------
void __fastcall sub_1400EAF90(__int64 a1, __int64 a2, int* a3)
{
	_QWORD* v4; // rax
	int* v5; // rbx
	__int64 v6; // rdi
	__int64 v7; // rcx
	int* v8; // [rsp+40h] [rbp+18h] BYREF

	v8 = a3;
	sub_14018D540(&v8, (__int64)L"%s is deprecated. %s should be used instead.", L"GetFlavor", L"GetTooltips");
	v4 = *(_QWORD**)(a1 + 2480);
	v5 = v8;
	if ((_QWORD*)*v4 != v4)
	{
		v6 = *(_QWORD*)(v4[1] + 16i64);
		if (v6)
		{
			v7 = *(_QWORD*)(v6 + 48);
			if (v7)
			{
				sub_140137120(v7, 7, v8);
				sub_1400EA7B0(a1, *(_QWORD*)(v6 + 48), (__int64)v5, *(_DWORD*)(*(_QWORD*)(v6 + 48) + 536i64) >= 6);
			}
		}
	}
	if (v5)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
}
// 140A17820: using guessed type wchar_t aSIsDeprecatedS[45];
// 140B236D8: using guessed type wchar_t aGettooltips[12];
// 140B236F0: using guessed type wchar_t aGetflavor[10];

