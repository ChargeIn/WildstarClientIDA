//----- (0000000140884880) ----------------------------------------------------
bool __fastcall sub_140884880(__int64 a1, __int64* a2, _DWORD* a3)
{
	__int64 v7; // rax

	if ((*(_BYTE*)(a1 + 117) & 0x10) == 0)
		return 0;
	v7 = sub_140884A40(a1, a3);
	*a2 = v7;
	if (v7)
		return 1;
	if ((*(unsigned __int8(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 64i64))(*(_QWORD*)(a1 + 96), a1))
		*a2 = sub_140884A40(a1, a3);
	return *a2 != 0;
}

