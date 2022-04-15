//----- (00000001405F1AF0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405F1AF0(__int64 a1)
{
	return ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 376i64))(a1) & 0x200) != 0
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 160i64))(a1)
		&& ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 376i64))(a1) & 0x800) != 0;
}

