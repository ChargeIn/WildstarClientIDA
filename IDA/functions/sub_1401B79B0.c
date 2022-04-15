//----- (00000001401B79B0) ----------------------------------------------------
void __fastcall sub_1401B79B0(_QWORD* a1)
{
	void* v2; // rcx
	void* v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B5F170;
	sub_14018B900(a1[1], 0);
	v2 = (void*)a1[4];
	if (v2 != (void*)-1i64)
		CloseHandle(v2);
	v3 = (void*)a1[5];
	if (v3 != (void*)-1i64)
		CloseHandle(v3);
	sub_140008410((__int64)(a1 + 79));
	sub_14018B900(a1[80], 0);
	v4 = a1[77];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[6];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
}
// 140B5F170: using guessed type __int64 (__fastcall *off_140B5F170[10])();

