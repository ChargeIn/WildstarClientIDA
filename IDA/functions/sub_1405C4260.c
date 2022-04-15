//----- (00000001405C4260) ----------------------------------------------------
__int64 __fastcall sub_1405C4260(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx

	v1 = qword_140C65898;
	v2 = a1 + 192;
	*(_DWORD*)(v2 - 28) = 0;
	*(_DWORD*)(v1 + 1368) = 1;
	*(_QWORD*)(v2 - 24) = 16i64;
	*(_QWORD*)(v2 - 16) = 0i64;
	*(_DWORD*)(v2 - 8) = 0;
	sub_140195D70(v2);
	return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchingCancelPendingGame", &unk_1409D1256);
}
// 140C65898: using guessed type __int64 qword_140C65898;

