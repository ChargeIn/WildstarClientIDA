//----- (0000000140859C30) ----------------------------------------------------
void __fastcall sub_140859C30(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	_QWORD* v5; // rax
	__int64 v6; // rax

	sub_140851DC0(a1);
	if (((*(_BYTE*)(a1 + 90) & 8) != 0 || !*(_QWORD*)(a1 + 72)) && !*(_BYTE*)(a2 + 36))
	{
		sub_140851D70(a1);
		*(_BYTE*)(a2 + 36) = 1;
	}
	v4 = *(_QWORD*)(a1 + 72);
	if (v4)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 280i64))(v4, a2);
	v5 = *(_QWORD**)(a1 + 104);
	if (v5 && *v5)
		(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v5 + 280i64))(*v5, a2);
	v6 = *(_QWORD*)(a1 + 56);
	if (!v6 || !*(_WORD*)(v6 + 72))
		sub_14085C530(a1);
}

