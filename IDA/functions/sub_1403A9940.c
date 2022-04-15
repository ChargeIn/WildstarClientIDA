//----- (00000001403A9940) ----------------------------------------------------
_BOOL8 __fastcall sub_1403A9940(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
	__int64 v5; // rbp
	unsigned __int16 v6; // bx
	_BOOL8 result; // rax
	_DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

	v5 = qword_140C65898;
	v6 = a4;
	result = sub_1403A9770(qword_140C65898, a2, a3, a4, a5);
	if (result)
	{
		v10[0] = a2;
		v10[1] = a3;
		v10[2] = v6;
		v10[3] = a5;
		sub_1403F4900(v5, 0x7EDu, (__int64)v10);
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

