//----- (00000001400C4330) ----------------------------------------------------
__int64 __fastcall sub_1400C4330(__int64 a1, __int64 a2, char a3)
{
	void(__fastcall * **v6)(_QWORD); // rbx
	__int64 v7; // rcx
	__int64 result; // rax

	sub_1400C3880(a1 + 416, a2 + 88, 2, 0, 0);
	sub_1400C3880(a1, a2 + 16, 2, 0, 0);
	sub_1400C3880(a1 + 832, a2 + 160, 2, 0, 0);
	v6 = *(void(__fastcall****)(_QWORD))(a2 + 232);
	if (v6 != *(void(__fastcall****)(_QWORD))(a1 + 1248))
	{
		if (v6)
			(**v6)(v6);
		v7 = *(_QWORD*)(a1 + 1248);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(a1 + 1248) = 0i64;
		}
		*(_QWORD*)(a1 + 1248) = v6;
	}
	result = *(unsigned __int8*)(a1 + 1392);
	LOBYTE(result) = a3 & 1 | result & 0xFC | 0x10;
	*(_BYTE*)(a1 + 1392) = result;
	return result;
}

