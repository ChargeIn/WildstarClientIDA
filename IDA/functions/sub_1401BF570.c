//----- (00000001401BF570) ----------------------------------------------------
int __fastcall sub_1401BF570(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rax

	*(_QWORD*)a1 = off_140B5F280;
	sub_1401BFF50(a1);
	v2 = *(_QWORD*)(a1 + 72);
	if (v2)
	{
		sub_1401BCE10(*(__int64**)(a1 + 72));
		sub_14018B900(v2, 0);
	}
	v3 = *(_QWORD*)(a1 + 80);
	if (v3)
	{
		sub_140019490(*(_QWORD**)(a1 + 80));
		sub_14018B900(*(_QWORD*)(v3 + 16), 0);
		*(_QWORD*)(v3 + 16) = 0i64;
		sub_14018B900(v3, 0);
	}
	sub_1401C0480((__int64*)(a1 + 88));
	v4 = *(_QWORD*)(a1 + 40);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
		LODWORD(v5) = CloseHandle(*(HANDLE*)(a1 + 32));
	return v5;
}
// 140B5F280: using guessed type __int64 (__fastcall *off_140B5F280[31])();

