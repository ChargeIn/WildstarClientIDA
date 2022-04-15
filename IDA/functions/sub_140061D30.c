//----- (0000000140061D30) ----------------------------------------------------
unsigned __int64 __fastcall sub_140061D30(__int64 a1, char* a2, int a3)
{
	unsigned __int16 v3; // ax
	__int64 v5; // rcx
	unsigned __int64 result; // rax

	v3 = ++ * (_WORD*)(a1 + 96);
	if (v3 >= 0xC8u)
	{
		if (v3 == 200)
			sub_14005ABE0(a1, aCStackOverflow);
		if (v3 >= 0xE1u)
			sub_140061040(a1, 5);
	}
	if (!(unsigned int)sub_1400618B0(a1, a2, a3))
		sub_14005F800(a1, 1);
	v5 = *(_QWORD*)(a1 + 32);
	--* (_WORD*)(a1 + 96);
	result = *(_QWORD*)(v5 + 112);
	if (*(_QWORD*)(v5 + 120) >= result)
		return sub_14005E2C0(a1);
	return result;
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);

