//----- (0000000140898C70) ----------------------------------------------------
char __fastcall sub_140898C70(__int64 a1)
{
	char v1; // al

	v1 = *(_BYTE*)(a1 + 98);
	if ((v1 & 1) != 0 || (v1 & 0xF) == 0)
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 168) + 8i64) + 128i64))(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64));
	else
		return 0;
}

