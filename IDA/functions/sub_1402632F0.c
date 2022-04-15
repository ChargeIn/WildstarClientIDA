//----- (00000001402632F0) ----------------------------------------------------
int __fastcall sub_1402632F0(__int64 a1)
{
	__int64** v2; // rcx
	int result; // eax

	v2 = (__int64**)(a1 + 16);
	*(v2 - 2) = (__int64*)off_140B60A80;
	sub_1401981B0(v2);
	sub_140019490((_QWORD*)(a1 + 6200));
	sub_14018B900(*(_QWORD*)(a1 + 6216), 0);
	*(_QWORD*)(a1 + 6216) = 0i64;
	sub_140019490((_QWORD*)(a1 + 6160));
	sub_14018B900(*(_QWORD*)(a1 + 6176), 0);
	*(_QWORD*)(a1 + 6176) = 0i64;
	if (*(_QWORD*)(a1 + 6152))
		sub_1401A4A00((const void***)(a1 + 6152));
	if (*(_QWORD*)(a1 + 48))
		CloseHandle(*(HANDLE*)(a1 + 48));
	result = sub_1401981B0((__int64**)(a1 + 16));
	if (*(_QWORD*)(a1 + 16))
		return (unsigned int)sub_1401A4A00((const void***)(a1 + 16));
	return result;
}
// 140B60A80: using guessed type __int64 (__fastcall *off_140B60A80[4])();

