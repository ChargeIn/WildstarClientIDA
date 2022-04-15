//----- (000000014005D920) ----------------------------------------------------
__int64 __fastcall sub_14005D920(__int64 a1)
{
	__int64 v1; // rbx
	int v3; // r8d
	__int64 result; // rax
	unsigned __int64 v5; // r8
	unsigned __int64 v6; // rdi

	v1 = *(_QWORD*)(a1 + 32);
	v3 = *(_DWORD*)(v1 + 12);
	result = (unsigned int)(v3 / 4);
	if (*(_DWORD*)(v1 + 8) < (unsigned int)result && v3 > 64)
		result = sub_140062450(a1, v3 / 2);
	v5 = *(_QWORD*)(v1 + 104);
	if (v5 > 0x40)
	{
		v6 = v5 >> 1;
		if ((v5 >> 1) + 1 > 0xFFFFFFFFFFFFFFFDui64)
			sub_14005ABE0(a1, aMemoryAllocati);
		result = sub_140064780(a1, *(_QWORD*)(v1 + 88), v5, v5 >> 1);
		*(_QWORD*)(v1 + 104) = v6;
		*(_QWORD*)(v1 + 88) = result;
	}
	return result;
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);

