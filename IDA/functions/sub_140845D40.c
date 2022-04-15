//----- (0000000140845D40) ----------------------------------------------------
__int16 __fastcall sub_140845D40(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64* v6; // rsi

	v4 = *(_QWORD*)(*(_QWORD*)(a2 + 64) + 16i64);
	if (v4)
		v4 = *(_QWORD*)(v4 + 24);
	if ((*(_BYTE*)(v4 + 382) & 0x40) == 0)
		sub_1408605D0(v4);
	v5 = *(_QWORD*)(v4 + 496);
	if (v5)
	{
		v5 = sub_140845F30(a1, *(_DWORD*)(*(_QWORD*)v5 + 24i64));
		v6 = (__int64*)v5;
		if (v5)
		{
			LODWORD(v5) = sub_140845ED0(a1, v4);
			if (*(_BYTE*)(a2 + 88))
			{
				LOWORD(v5) = sub_140871250(v6, a2, v5);
			}
			else if (*(_QWORD*)(a2 + 80))
			{
				LOWORD(v5) = sub_140870EF0(v6, a2, v5);
			}
		}
	}
	return v5;
}

