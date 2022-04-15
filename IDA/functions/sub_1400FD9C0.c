//----- (00000001400FD9C0) ----------------------------------------------------
__int64 __fastcall sub_1400FD9C0(__int64 a1)
{
	__int64 v2; // rbx
	unsigned __int16* v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned __int16* v7; // rcx
	__int64 v8; // rax
	unsigned __int16* v9; // rcx

	if (*(_QWORD*)a1)
		return sub_1400564A0(*(unsigned __int16**)a1);
	if (*(_BYTE*)(a1 + 16))
	{
		v2 = *(_QWORD*)(a1 + 8);
		v3 = (unsigned __int16*)&word_140B7B704;
		if (*(_QWORD*)(v2 + 32))
			v3 = *(unsigned __int16**)(v2 + 32);
		v4 = sub_1400564A0(v3);
		v5 = sub_1400564A0(L":");
		v6 = *(_QWORD*)(v2 + 40);
		if (v6)
			v7 = *(unsigned __int16**)(v6 + 32);
		else
			v7 = (unsigned __int16*)&unk_1409D4D1C;
		return v4 + 2860486313i64 * (v5 + 2860486313i64 * sub_1400564A0(v7));
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 8);
		v9 = (unsigned __int16*)&word_140B7B704;
		if (*(_QWORD*)(v8 + 32))
			v9 = *(unsigned __int16**)(v8 + 32);
		return sub_1400564A0(v9);
	}
}
// 140B56AB8: using guessed type wchar_t asc_140B56AB8[2];
// 140B7B704: using guessed type __int16 word_140B7B704;

