//----- (0000000140665210) ----------------------------------------------------
__int64 __fastcall sub_140665210(_QWORD* a1)
{
	__int64* v1; // rax
	__int64 v2; // rbx
	int v4; // [rsp+38h] [rbp+10h] BYREF

	v1 = (__int64*)sub_140056AB0(a1, 1u);
	if (v1)
	{
		v2 = *v1;
		if (sub_140552930(*v1))
		{
			v4 = 0;
			v4 = **(_DWORD**)(v2 + 8);
			sub_1403F4900(qword_140C65898, 0x35Au, (__int64)&v4);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

