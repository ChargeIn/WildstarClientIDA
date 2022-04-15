//----- (00000001402E6E60) ----------------------------------------------------
_DWORD* __fastcall sub_1402E6E60(__int64 a1, _DWORD* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 192i64))(*(_QWORD*)(a1 + 32));
	v4 = *(_QWORD*)(a1 + 24);
	if (v4)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
		*a2 += *(_DWORD*)(v5 + 32);
		a2[1] += *(_DWORD*)(v5 + 36);
		a2[2] += *(_DWORD*)(v5 + 32);
		a2[3] += *(_DWORD*)(v5 + 36);
	}
	return a2;
}

