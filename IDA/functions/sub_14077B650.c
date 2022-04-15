//----- (000000014077B650) ----------------------------------------------------
__int64 __fastcall sub_14077B650(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	int v7; // ecx
	__int64 v8; // rcx

	result = sub_1407798C0(a1, a2, a3);
	if ((int)result >= 0)
	{
		v6 = qword_140C65898;
		v7 = 60000;
		*(_OWORD*)(a1 + 192) = *(_OWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
		if (*(_DWORD*)(a2 + 12))
			v7 = *(_DWORD*)(a2 + 12);
		*(_DWORD*)(a1 + 176) = v7;
		v8 = *(_QWORD*)(v6 + 29504);
		if (v8)
			sub_1400EA3E0(v8, "ProgressClickWindowDisplay", byte_1409EC1B4, 1i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
		sub_1407797A0(a1, 1, 3);
		return 0i64;
	}
	return result;
}
// 1409EC1B4: using guessed type _BYTE byte_1409EC1B4[32];
// 140C65898: using guessed type __int64 qword_140C65898;

