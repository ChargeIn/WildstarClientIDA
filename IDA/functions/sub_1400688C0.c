#include "../winhttp.h"

//----- (00000001400688C0) ----------------------------------------------------
__int64 __fastcall sub_1400688C0(__int64 a1)
{
	__int64 v2; // rbx
	unsigned int v3; // edi
	int v4; // ecx
	unsigned int v6; // [rsp+20h] [rbp-28h] BYREF
	int v7; // [rsp+28h] [rbp-20h]

	sub_140067E60(a1, (int*)&v6, 0);
	v2 = *(_QWORD*)(a1 + 48);
	v3 = v6;
	sub_14006A700(v2, (int*)&v6);
	if (v6 == 12 && (v7 & 0x100) == 0 && v7 >= *(unsigned __int8*)(v2 + 74))
		--* (_DWORD*)(v2 + 60);
	v4 = *(_DWORD*)(v2 + 60) + 1;
	if (v4 > *(unsigned __int8*)(*(_QWORD*)v2 + 115i64))
	{
		if (v4 >= 250)
			sub_140062CF0(*(_QWORD*)(v2 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 16i64));
		*(_BYTE*)(*(_QWORD*)v2 + 115i64) = v4;
	}
	sub_14006A980(v2, (int*)&v6, (*(_DWORD*)(v2 + 60))++);
	return v3;
}

