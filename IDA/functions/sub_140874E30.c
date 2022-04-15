//----- (0000000140874E30) ----------------------------------------------------
__int64 __fastcall sub_140874E30(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	unsigned int v5; // ebp
	__int64 v6; // r14

	v2 = *(_QWORD*)(a2 + 72);
	v5 = 1;
	switch (*(_WORD*)(a1 + 60))
	{
	case 0x302:
	case 0x303:
		v6 = sub_140855940(a1);
		if (v6)
		{
			v5 = sub_140876F80(a1, 2, v2, *(_DWORD*)(a2 + 68));
			sub_14082EAB0((__int64)qword_140C61B68, v6, v2, *(_BYTE*)(a1 + 88), *(_DWORD*)(a2 + 68));
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		}
		break;
	case 0x304:
	case 0x305:
		sub_140876D30(a1, 2, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		sub_14082EAB0((__int64)qword_140C61B68, 0i64, v2, *(_BYTE*)(a1 + 88), *(_DWORD*)(a2 + 68));
		break;
	case 0x308:
	case 0x309:
		sub_140876EA0(a1, 2, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		sub_14082EC70((__int64)qword_140C61B68, v2, (__int64*)(a1 + 64), *(_BYTE*)(a1 + 88), *(_DWORD*)(a2 + 68));
		break;
	default:
		return v5;
	}
	return v5;
}

