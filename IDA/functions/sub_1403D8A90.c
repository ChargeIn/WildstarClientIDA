//----- (00000001403D8A90) ----------------------------------------------------
void __fastcall sub_1403D8A90(__int64 a1)
{
	bool v1; // zf
	__int64 v3; // rcx
	__int64 v4; // rcx

	v1 = *(_DWORD*)(a1 + 120) == 0;
	*(_QWORD*)a1 = off_140B667E0;
	if (!v1)
		sub_14018B900(*(_QWORD*)(a1 + 112), 0);
	v3 = *(_QWORD*)(a1 + 96);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	v4 = *(_QWORD*)(a1 + 24);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
}
// 140B667E0: using guessed type __int64 (__fastcall *off_140B667E0[9])();
