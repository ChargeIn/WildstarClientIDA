//----- (000000014018A370) ----------------------------------------------------
__int64 __fastcall sub_14018A370(__int64 a1)
{
	__int64 v3; // r8
	int v4; // ecx
	int v5; // ecx

	if (!a1)
		return 0i64;
	v3 = a1 & ~qword_140C7F968;
	if (v3 == a1 || ((*(_QWORD*)((a1 & ~qword_140C7F968) + 8) >> 44) & 0xF) != 2)
		v4 = (*(_QWORD*)(a1 - 8) >> 44) & 0xF;
	else
		v4 = 2;
	if (!v4)
		return *(unsigned int*)(a1 - 8);
	v5 = v4 - 1;
	if (!v5)
		return *(_QWORD*)(a1 - 8) & 0xFFFFFFFFFFFi64;
	if (v5 != 1)
		return 0i64;
	return *(unsigned __int16*)(v3 + 18);
}
// 140C7F968: using guessed type __int64 qword_140C7F968;

