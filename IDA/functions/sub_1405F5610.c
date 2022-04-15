//----- (00000001405F5610) ----------------------------------------------------
__int64 __fastcall sub_1405F5610(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rax

	v2 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
		qword_140C65980,
		*a2,
		0i64);
	if (v2 && *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 48) + 8i64) + 84i64))
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventObjectiveStartMessage", byte_1409ED3C4);
	return 0i64;
}
// 1409ED3C4: using guessed type _BYTE byte_1409ED3C4[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

