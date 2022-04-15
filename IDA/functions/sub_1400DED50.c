//----- (00000001400DED50) ----------------------------------------------------
__int64 __fastcall sub_1400DED50(_QWORD* a1)
{
	_QWORD* v2; // rbx
	int v3; // edi
	__int64 v4; // rdx
	int v5; // ecx
	int v6; // eax

	v2 = (_QWORD*)sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		if (sub_1400C6D90((__int64)v2))
		{
			v4 = v2[58];
			v5 = *(_DWORD*)(v4 + 1296);
			if (v3 < v5)
				v5 = v3;
			v6 = 0;
			if (v5 > 0)
				v6 = v5;
			*(_BYTE*)(v4 + 1392) |= 0x10u;
			*(_DWORD*)(v4 + 1300) = v6;
			sub_1400CAE90(v2);
		}
	}
	return 0i64;
}

