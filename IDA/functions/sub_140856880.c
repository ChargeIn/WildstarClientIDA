#include "../winhttp.h"

//----- (0000000140856880) ----------------------------------------------------
__int64 __fastcall sub_140856880(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	unsigned int v5; // ebp
	__int64 v6; // r14

	v2 = *(_QWORD*)(a2 + 72);
	v5 = 1;
	switch (*(_WORD*)(a1 + 60))
	{
	case 0x102:
	case 0x103:
		v6 = sub_140855940(a1);
		if (v6)
		{
			v5 = sub_140876F80(a1, 0, v2, *(_DWORD*)(a2 + 68));
			sub_14082F330((__int64)qword_140C61B68, v6, v2, *(_DWORD*)(a2 + 68));
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		}
		break;
	case 0x104:
	case 0x105:
		sub_140876D30(a1, 0, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		sub_14082F330((__int64)qword_140C61B68, 0i64, v2, *(_DWORD*)(a2 + 68));
		break;
	case 0x108:
	case 0x109:
		sub_140876EA0(a1, 0, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		sub_14082F6B0((__int64)qword_140C61B68, v2, (__int64*)(a1 + 64), *(_DWORD*)(a2 + 68));
		break;
	default:
		return v5;
	}
	return v5;
}

