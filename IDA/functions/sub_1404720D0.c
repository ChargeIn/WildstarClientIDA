//----- (00000001404720D0) ----------------------------------------------------
__int64 __fastcall sub_1404720D0(__int64 a1)
{
	unsigned int v2; // esi
	int v3; // edx
	unsigned int v4; // eax
	unsigned int v5; // edi
	double v6; // xmm0_8
	__int64 v7; // rax

	v2 = 20;
	switch (*(_DWORD*)(a1 + 444))
	{
	case 1:
		v3 = 1468;
		break;
	case 2:
		v3 = 627;
		break;
	case 6:
		v3 = 473;
		break;
	case 0xA:
		v3 = 821;
		break;
	default:
		return v2;
	}
	v4 = sub_140470540((_DWORD*)a1, v3);
	v5 = v4;
	if (v4)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
			*(_QWORD*)(a1 + 5864),
			v4))
		{
			v6 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
			v7 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
				*(_QWORD*)(a1 + 5864),
				v5,
				(unsigned int)(int)(v6 * 65536.0));
			if (*(_DWORD*)(v7 + 20) > 0x14u)
				return *(unsigned int*)(v7 + 20);
		}
	}
	return v2;
}
// 140C77890: using guessed type __int64 qword_140C77890;

