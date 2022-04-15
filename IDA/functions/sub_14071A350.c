//----- (000000014071A350) ----------------------------------------------------
void __fastcall sub_14071A350(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx

	*(_QWORD*)a1 = off_140B74450;
	v2 = *(_QWORD**)(a1 + 520);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 528);
	v3 = *(_QWORD*)(a1 + 528);
	if (v3)
		*(_QWORD*)(v3 + 520) = *(_QWORD*)(a1 + 520);
	*(_QWORD*)(a1 + 520) = 0i64;
	*(_QWORD*)(a1 + 528) = 0i64;
	sub_140195D70(a1 + 432);
	*(_DWORD*)(a1 + 432) = 0;
	v4 = *(_QWORD**)(a1 + 448);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 456);
	v5 = *(_QWORD**)(a1 + 456);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 448);
	*(_QWORD*)(a1 + 448) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	sub_140719D60(a1);
}
// 140B74450: using guessed type __int64 (__fastcall *off_140B74450[14])();

