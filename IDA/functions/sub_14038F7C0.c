//----- (000000014038F7C0) ----------------------------------------------------
const void**** __fastcall sub_14038F7C0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	const void**** result; // rax

	*(_QWORD*)a1 = off_140B65F70;
	sub_1400B6120(*(_QWORD*)(a1 + 16) + 2360i64, a1 + 24);
	v2 = *(_QWORD**)(a1 + 96);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 104);
	v3 = *(_QWORD*)(a1 + 104);
	if (v3)
		*(_QWORD*)(v3 + 96) = *(_QWORD*)(a1 + 96);
	result = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	if (*(_QWORD*)(a1 + 88))
		result = sub_1401A4A00((const void***)(a1 + 88));
	if (*(_QWORD*)(a1 + 80))
		result = sub_1401A4A00((const void***)(a1 + 80));
	if (*(_QWORD*)(a1 + 72))
		result = sub_1401A4A00((const void***)(a1 + 72));
	if (*(_QWORD*)(a1 + 64))
		result = sub_1401A4A00((const void***)(a1 + 64));
	if (*(_QWORD*)(a1 + 56))
		result = sub_1401A4A00((const void***)(a1 + 56));
	if (*(_QWORD*)(a1 + 48))
		result = sub_1401A4A00((const void***)(a1 + 48));
	if (*(_QWORD*)(a1 + 40))
		return sub_1401A4A00((const void***)(a1 + 40));
	return result;
}
// 140B65F70: using guessed type __int64 (__fastcall *off_140B65F70[21])();

