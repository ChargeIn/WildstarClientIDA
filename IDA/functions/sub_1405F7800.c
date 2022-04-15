//----- (00000001405F7800) ----------------------------------------------------
__int64 __fastcall sub_1405F7800(__int64 a1)
{
	unsigned int v3; // edi

	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1)
		|| !*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1) + 52))
	{
		return 0i64;
	}
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 168i64))(a1);
	if (v3 <= *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1) + 52))
		return *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1) + 52) - v3;
	else
		return 0i64;
}

