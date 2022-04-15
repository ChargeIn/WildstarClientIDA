#include "../winhttp.h"

//----- (0000000140874C10) ----------------------------------------------------
__int64 __fastcall sub_140874C10(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	unsigned int v5; // esi
	_QWORD* v6; // r14

	v2 = *(_QWORD*)(a2 + 72);
	v5 = 1;
	switch (*(_WORD*)(a1 + 60))
	{
	case 0x202:
	case 0x203:
		v6 = (_QWORD*)sub_140855940(a1);
		if (v6)
		{
			v5 = sub_140876F80(a1, 1, v2, *(_DWORD*)(a2 + 68));
			sub_14082C3B0((__int64)qword_140C61B68, v6, v2, *(_BYTE*)(a1 + 96), *(_DWORD*)(a2 + 68));
			(*(void(__fastcall**)(_QWORD*))(*v6 + 16i64))(v6);
		}
		break;
	case 0x204:
	case 0x205:
		sub_140876D30(a1, 1, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		sub_14082C3B0((__int64)qword_140C61B68, 0i64, v2, *(_BYTE*)(a1 + 96), *(_DWORD*)(a2 + 68));
		break;
	case 0x208:
	case 0x209:
		sub_140876EA0(a1, 1, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		sub_14082C610((__int64)qword_140C61B68, v2, (__int64*)(a1 + 64), *(_BYTE*)(a1 + 96), *(_DWORD*)(a2 + 68));
		break;
	default:
		return v5;
	}
	return v5;
}

