//----- (0000000140528190) ----------------------------------------------------
__int64 __fastcall sub_140528190(__int64 a1, char a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx

	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)a1 = off_140B6C600;
	v3 = *(_QWORD*)(a1 + 56);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	v5 = *(_QWORD*)(a1 + 16);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B6C600: using guessed type __int64 (__fastcall *off_140B6C600[3])();

