//----- (0000000140572BA0) ----------------------------------------------------
__int64 __fastcall sub_140572BA0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax

	v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1347241299i64);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
		return 0i64;
	}
	else
	{
		v5 = sub_14018B280(24i64, 0);
		if (v5)
		{
			*((_QWORD*)v5 + 2) = a2;
			*(_QWORD*)v5 = off_140B6C820;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 96i64))(a1);
		}
		else
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 96i64))(a1, 0i64);
		}
		return 0i64;
	}
}
// 140B6C820: using guessed type __int64 (__fastcall *off_140B6C820[9])();

