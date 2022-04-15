//----- (00000001404C0E80) ----------------------------------------------------
__int64 __fastcall sub_1404C0E80(__int64 a1, int a2, unsigned int a3)
{
	int v3; // edx
	int v4; // edx
	__int64 result; // rax

	if (!a2)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 232i64))(a1, a3);
	v3 = a2 - 1;
	if (!v3)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 240i64))(a1, a3);
	v4 = v3 - 1;
	if (!v4)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 248i64))(a1, a3);
	if (v4 == 1)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 256i64))(a1, a3);
	return result;
}

