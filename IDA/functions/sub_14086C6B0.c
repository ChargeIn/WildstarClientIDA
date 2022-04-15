//----- (000000014086C6B0) ----------------------------------------------------
bool __fastcall sub_14086C6B0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
	if ((*(_BYTE*)(a1 + 478) & 0x30) != 0)
		return !sub_14087C2D0(a2, a3) && !sub_14087C2A0(a2, a3);
	return !*(_WORD*)(a1 + 476) || sub_14087C2A0(a2, a3) == 0;
}

