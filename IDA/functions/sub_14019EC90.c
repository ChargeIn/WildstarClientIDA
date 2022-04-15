//----- (000000014019EC90) ----------------------------------------------------
int __fastcall sub_14019EC90(__int64 a1)
{
	bool v1; // zf
	__int64 v3; // rbx
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax

	v1 = *(_QWORD*)(a1 + 56) == 0i64;
	*(_QWORD*)a1 = off_140B5E718;
	if (!v1)
	{
		do
		{
			v3 = *(_QWORD*)(a1 + 56);
			if (v3)
			{
				sub_14019E780(*(_QWORD**)(a1 + 56));
				sub_14018B900(v3, 0);
			}
		} while (*(_QWORD*)(a1 + 56));
	}
	while (*(_QWORD*)(a1 + 64))
	{
		v4 = *(_QWORD*)(a1 + 64);
		if (v4)
		{
			sub_14019E780(*(_QWORD**)(a1 + 64));
			sub_14018B900(v4, 0);
		}
	}
	v5 = *(_QWORD*)(a1 + 72);
	qword_140C63760 = 0i64;
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	if (*(_QWORD*)(a1 + 64))
		sub_1401A4A00((const void***)(a1 + 64));
	if (*(_QWORD*)(a1 + 56))
		sub_1401A4A00((const void***)(a1 + 56));
	v6 = *(_QWORD*)(a1 + 40);
	if (v6)
		LODWORD(v6) = CloseHandle(*(HANDLE*)(a1 + 40));
	return v6;
}
// 140B5E718: using guessed type __int64 (__fastcall *off_140B5E718[4])();
// 140C63760: using guessed type __int64 qword_140C63760;

