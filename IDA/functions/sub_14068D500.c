//----- (000000014068D500) ----------------------------------------------------
__int64 __fastcall sub_14068D500(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rax

	if (*(_QWORD*)(qword_140C65898 + 120) && (v1 = sub_140056AB0(a1, 1u)) != 0 && (v2 = *(_QWORD*)(v1 + 8)) != 0)
		return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v2 + 8) + 8i64),
			0i64);
	else
		return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

