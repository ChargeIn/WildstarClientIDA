//----- (00000001400D2A30) ----------------------------------------------------
__int64 __fastcall sub_1400D2A30(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 688);
	if (v2)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 40i64))(
			v2,
			*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	return result;
}

