//----- (00000001408806D0) ----------------------------------------------------
__int64 __fastcall sub_1408806D0(__int64 a1)
{
	char v2; // al

	if ((unsigned int)sub_140880DA0(a1) != 1)
		return 2i64;
	v2 = *(_BYTE*)(a1 + 126);
	if ((v2 & 2) != 0)
		*(_BYTE*)(a1 + 126) = v2 & 0xFD;
	else
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
	*(_DWORD*)(a1 + 104) = 0;
	*(_QWORD*)(a1 + 96) = 0i64;
	return 1i64;
}

