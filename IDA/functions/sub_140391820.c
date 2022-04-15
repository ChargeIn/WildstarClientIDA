//----- (0000000140391820) ----------------------------------------------------
__int64 __fastcall sub_140391820(_QWORD* a1, unsigned int a2)
{
	__int64 result; // rax
	int v5; // eax

	result = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1);
	if (!(_DWORD)result)
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)a1[2] + 208i64))(a1[2], a2);
		v5 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[2] + 232i64))(a1[2]);
		return sub_140391230(a1, v5);
	}
	return result;
}

