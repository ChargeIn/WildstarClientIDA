//----- (0000000140061370) ----------------------------------------------------
__int64 __fastcall sub_140061370(__int64 a1)
{
	int v1; // edx
	__int64 result; // rax

	v1 = *(_DWORD*)(a1 + 92);
	if (v1 > 20000)
		sub_140061040(a1, 5);
	sub_1400612B0(a1, 2 * v1);
	if (*(int*)(a1 + 92) > 20000)
		sub_14005ABE0(a1, aStackOverflow);
	result = *(_QWORD*)(a1 + 40) + 40i64;
	*(_QWORD*)(a1 + 40) = result;
	return result;
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);

