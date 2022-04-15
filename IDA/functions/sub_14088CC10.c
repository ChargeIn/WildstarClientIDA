//----- (000000014088CC10) ----------------------------------------------------
void __fastcall sub_14088CC10(__int64 a1, unsigned int a2)
{
	_BYTE* v3; // rcx
	char v4; // al
	__int64 v5; // [rsp+20h] [rbp-18h] BYREF
	char v6; // [rsp+28h] [rbp-10h]

	++* (_DWORD*)(*(_QWORD*)(a1 + 16) + 80i64);
	v3 = *(_BYTE**)(a1 + 16);
	v4 = v3[98];
	if ((v4 & 3) != 0 && (v4 & 0x10) == 0)
	{
		*(_DWORD*)(a1 + 72) = a2;
		v5 = 0i64;
		v6 = 0;
		(*(void(__fastcall**)(_BYTE*, _QWORD, _QWORD, __int64*))(*(_QWORD*)v3 + 80i64))(
			v3,
			*(_QWORD*)(a1 + 8),
			a2,
			&v5);
		*(_QWORD*)(a1 + 8) += *(unsigned int*)(a1 + 72);
	}
	sub_14088B630(*(_QWORD*)(a1 + 16));
}

