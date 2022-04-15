//----- (00000001405F41A0) ----------------------------------------------------
__int64* __fastcall sub_1405F41A0(__int64 a1, __int64* a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
	sub_1403B4F00(a2, v4);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
	if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) + 20))
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
		sub_140003460(a2, (int*)(v7 + 20));
	}
	return a2;
}

