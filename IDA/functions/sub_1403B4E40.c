//----- (00000001403B4E40) ----------------------------------------------------
__int64 __fastcall sub_1403B4E40(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // r10
	int v4; // r9d
	bool v6; // zf

	v3 = *(_QWORD*)(a1 + 112);
	v4 = *(_DWORD*)(v3 + 280);
	if (!v4)
		return 0i64;
	while (a2)
	{
		if (*(_DWORD*)(a2 + 4) != a3)
			goto LABEL_19;
		switch (*(_DWORD*)a2)
		{
		case 4:
			v6 = (v4 & 0x20) == 0;
		LABEL_18:
			if (!v6)
				return 0i64;
		LABEL_19:
			a2 = *(_QWORD*)(a2 + 104);
			break;
		case 5:
			v6 = (v4 & 0x40) == 0;
			goto LABEL_18;
		case 6:
			v6 = (*(_DWORD*)(v3 + 280) & 0x100) == 0;
			goto LABEL_18;
		case 7:
			if ((v4 & 0x80u) != 0)
				return 0i64;
			a2 = *(_QWORD*)(a2 + 104);
			break;
		default:
			if (*(_DWORD*)a2 != 8 || (v4 & 0xC00) == 0)
				goto LABEL_19;
			if (*(_DWORD*)(v3 + 284) == *(_DWORD*)(a2 + 12))
				return 0i64;
			a2 = *(_QWORD*)(a2 + 104);
			break;
		}
	}
	return 17i64;
}

