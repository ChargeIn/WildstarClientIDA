//----- (00000001400CD0B0) ----------------------------------------------------
char __fastcall sub_1400CD0B0(_QWORD* a1, __int64 a2)
{
	_QWORD* v4; // rax
	void(__fastcall * **v6)(_QWORD); // rcx
	__int64 v7; // rbx
	__int64 v8; // rcx

	if (!a1[85])
	{
		v4 = sub_14018B280(104i64, 0);
		if (v4)
			v4 = sub_1400C5780(v4);
		a1[85] = v4;
	}
	if (a2)
	{
		*(_BYTE*)(a2 + 28) |= 0x10u;
		if (*(_QWORD*)(a2 + 16) || *(_QWORD*)(a2 + 32) != a1[4] || (*(_BYTE*)(a2 + 28) & 0x10) == 0)
			return 0;
	}
	if (*(_QWORD*)(a1[85] + 32i64) != a2)
	{
		(*(void(__fastcall**)(_QWORD*))(*a1 + 544i64))(a1);
		*(_QWORD*)(a1[85] + 32i64) = a2;
		v6 = *(void(__fastcall****)(_QWORD))(a1[85] + 32i64);
		if (v6)
			(**v6)(v6);
	}
	v7 = a1[85];
	v8 = *(_QWORD*)(v7 + 16);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(v7 + 16) = 0i64;
	}
	return 1;
}
