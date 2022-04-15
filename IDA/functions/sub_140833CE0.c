//----- (0000000140833CE0) ----------------------------------------------------
void __fastcall sub_140833CE0(int a1, unsigned int a2)
{
	__int64 i; // rbx
	__int64 v5; // rdi

	for (i = qword_140C61CC8; i != qword_140C61CD0; i += 8i64)
	{
		v5 = *(_QWORD*)i;
		if ((unsigned int)sub_14085CF90((__int64*)(*(_QWORD*)i + 1088i64)) == a1 && *(_DWORD*)(v5 + 1096) != 2)
			sub_140863540(v5 + 32, (__int64*)(v5 + 1088), a2);
	}
}
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

