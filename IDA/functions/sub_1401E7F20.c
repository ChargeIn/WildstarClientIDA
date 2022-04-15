//----- (00000001401E7F20) ----------------------------------------------------
__int64 __fastcall sub_1401E7F20(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx

	v3 = *(_QWORD*)(a1 + 48);
	if (v3)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 240i64))(v3);
	v6 = *(_QWORD*)(a1 + 56);
	if (v6)
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 240i64))(v6, a2);
	v7 = *(_QWORD*)(a1 + 72);
	if (v7)
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 240i64))(v7, a2);
	v8 = *(_QWORD*)(a1 + 80);
	if (v8)
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 240i64))(v8, a2);
	v9 = *(_QWORD*)(a1 + 88);
	if (v9)
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 240i64))(v9, a2);
	*(_DWORD*)(a1 + 112) = 0;
	return result;
}

