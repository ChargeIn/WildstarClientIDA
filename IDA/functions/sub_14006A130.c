//----- (000000014006A130) ----------------------------------------------------
__int64 __fastcall sub_14006A130(__int64 a1, int a2)
{
	__int64 v2; // r9
	_DWORD* v3; // rcx
	_BYTE* v4; // r8

	if (a2 == -1)
		return 0i64;
	v2 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
	while (1)
	{
		v3 = (_DWORD*)(v2 + 4i64 * a2);
		if (a2 < 1 || (v4 = v3 - 1, byte_140A12408[*(v3 - 1) & 0x3F] >= 0))
			v4 = (_BYTE*)(v2 + 4i64 * a2);
		if ((*v4 & 0x3F) != 27)
			break;
		if (*v3 >> 14 != 131070)
		{
			a2 += (*v3 >> 14) - 0x1FFFF + 1;
			if (a2 != -1)
				continue;
		}
		return 0i64;
	}
	return 1i64;
}

