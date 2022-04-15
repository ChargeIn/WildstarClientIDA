//----- (00000001401A5900) ----------------------------------------------------
void __fastcall sub_1401A5900(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx

	*(_QWORD*)a1 = off_140B5EDE0;
	sub_1401A59A0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 48);
		if (a1 == v3)
			*(_QWORD*)(v2 + 48) = *(_QWORD*)(v3 + 72);
		v4 = *(_QWORD*)(v2 + 56);
		if (a1 == v4)
			*(_QWORD*)(v2 + 56) = *(_QWORD*)(v4 + 64);
		v5 = *(_QWORD*)(a1 + 64);
		if (v5)
			*(_QWORD*)(v5 + 72) = *(_QWORD*)(a1 + 72);
		v6 = *(_QWORD*)(a1 + 72);
		if (v6)
			*(_QWORD*)(v6 + 64) = *(_QWORD*)(a1 + 64);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	if ((*(_DWORD*)(a1 + 24) & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(a1 + 32), 0);
	*(_DWORD*)(a1 + 24) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
}
// 140B5EDE0: using guessed type __int64 (__fastcall *off_140B5EDE0[12])();

