//----- (000000014085CD40) ----------------------------------------------------
__int64 __fastcall sub_14085CD40(__int64 a1, int a2)
{
	__int64 v3; // rdi
	__int64 v4; // rax
	void* v5; // rsp
	int vars0; // [rsp+20h] [rbp+0h] BYREF

	v3 = a2 * (unsigned int)*(unsigned __int16*)(a1 + 32);
	if (*(_QWORD*)(a1 + 8))
	{
		v4 = v3 + 15;
		if (v3 + 15 <= (unsigned __int64)(unsigned int)v3)
			v4 = 0xFFFFFFFFFFFFFF0i64;
		v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0ui64);
		sub_1407E4830(&vars0, 0i64, (unsigned int)v3);
		sub_140877220(*(_QWORD*)(a1 + 8), (__int64)&vars0, v3);
	}
	return 1i64;
}

