//----- (0000000140893360) ----------------------------------------------------
__int64 __fastcall sub_140893360(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebx
	int v5; // ebp
	unsigned int v7; // edi

	v4 = 1;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 112i64))(a2);
	if ((*(unsigned __int16(__fastcall**)(__int64))(*(_QWORD*)a1 + 656i64))(a1) == 0xFFFF)
		return 9i64;
	if ((unsigned int)(v5 - 7) > 2)
		return 4i64;
	if (*(_QWORD*)(a2 + 64))
		return 21i64;
	v7 = *(_DWORD*)(a2 + 24);
	if (sub_1408591D0((__int64*)(a1 + 168), v7))
		return 5i64;
	if (*(_DWORD*)(a1 + 24) == v7)
		return 23;
	return v4;
}

