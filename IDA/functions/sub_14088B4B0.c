//----- (000000014088B4B0) ----------------------------------------------------
void __fastcall sub_14088B4B0(__int64 a1, unsigned int a2)
{
	_QWORD* v2; // rbx
	__int64 v5; // rbx
	__int64 v6; // rcx
	char v7; // al

	v2 = *(_QWORD**)(a1 + 48);
	++* (_DWORD*)(a1 + 80);
	for (; v2; v2 = (_QWORD*)v2[1])
	{
		(*(void(__fastcall**)(_QWORD*))(*v2 + 32i64))(v2);
		(*(void(__fastcall**)(_QWORD*, _QWORD)) * v2)(v2, a2);
	}
	v5 = *(_QWORD*)(a1 + 48);
	while (v5)
	{
		v6 = v5;
		v5 = *(_QWORD*)(v5 + 8);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
	}
	if (a2 < *(_DWORD*)(a1 + 92) && a2 != -1)
		*(_DWORD*)(a1 + 92) = a2;
	if (*(_DWORD*)(a1 + 92) && (v7 = *(_BYTE*)(a1 + 98), (v7 & 0xF) != 0) && (v7 & 0x10) == 0)
	{
		if ((v7 & 0xFu) <= 2)
			*(_BYTE*)(a1 + 98) = v7 & 0xF0 | 2;
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
	}
	sub_14088B630(a1);
}

