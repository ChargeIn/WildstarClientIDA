//----- (0000000140876800) ----------------------------------------------------
__int64 __fastcall sub_140876800(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	switch (*(_WORD*)(a1 + 60))
	{
	case 0x1E02:
	case 0x1E03:
		result = sub_140876710(a1, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		break;
	case 0x1E04:
	case 0x1E05:
		sub_1408764B0((_BYTE*)a1, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		result = 1i64;
		break;
	case 0x1E08:
	case 0x1E09:
		sub_1408765A0((_BYTE*)a1, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
		goto LABEL_5;
	default:
	LABEL_5:
		result = 1i64;
		break;
	}
	return result;
}

