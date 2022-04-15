//----- (000000014086C930) ----------------------------------------------------
_DWORD* __fastcall sub_14086C930(__int64 a1, unsigned __int16 a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	_DWORD* v6; // rbx
	int v8; // eax

	v4 = sub_1408819F0(dword_140C10F20, 80i64);
	if (!v4)
		return 0i64;
	v5 = sub_14087BDE0(v4, a2);
	v6 = (_DWORD*)v5;
	if (!v5)
		return 0i64;
	if ((unsigned int)sub_14087C1E0(v5, *(_WORD*)(a1 + 476)) != 1)
	{
		(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6);
		return 0i64;
	}
	if ((*(_BYTE*)(a1 + 479) & 8) != 0)
	{
		v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 96i64))(*(_QWORD*)(a1 + 192));
		v6[7] = v8;
		v6[6] = v8;
	}
	return v6;
}
// 140C10F20: using guessed type int dword_140C10F20;

