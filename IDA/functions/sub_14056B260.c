//----- (000000014056B260) ----------------------------------------------------
_BOOL8 __fastcall sub_14056B260(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rax
	_BOOL8 result; // rax

	v1 = **(_QWORD**)(a1 + 48);
	switch (*(_DWORD*)(v1 + 12))
	{
	case 3:
	case 0xD:
	case 0xE:
	case 0x11:
	case 0x14:
	case 0x17:
	case 0x19:
	case 0x1A:
	case 0x1B:
		result = 1i64;
		break;
	case 5:
	case 6:
		v2 = sub_140223380(*(_DWORD*)(v1 + 20));
		if (!v2)
			goto LABEL_5;
		result = (unsigned int)(*(_DWORD*)(v2 + 16) - 1) <= 1;
		break;
	default:
	LABEL_5:
		result = 0i64;
		break;
	}
	return result;
}

