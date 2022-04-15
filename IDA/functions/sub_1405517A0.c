//----- (00000001405517A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405517A0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // eax
	__int64 v3; // rdx
	_BOOL8 result; // rax
	__int64 v5; // rax

	v2 = *(_DWORD*)(a1 + 16);
	if (a2 == v2)
		return 0i64;
	if (a2 > v2)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8i64 * a2 + 24);
	if (!v3)
		return 0i64;
	switch (*(_DWORD*)(v3 + 4))
	{
	case 0xA:
	case 0xD:
	case 0xE:
	case 0x12:
		result = 1i64;
		break;
	case 0x1B:
	case 0x1C:
		v5 = sub_140223380(*(_DWORD*)(v3 + 12));
		if (!v5)
			return 0i64;
		result = (unsigned int)(*(_DWORD*)(v5 + 16) - 1) <= 1;
		break;
	default:
		return 0i64;
	}
	return result;
}

