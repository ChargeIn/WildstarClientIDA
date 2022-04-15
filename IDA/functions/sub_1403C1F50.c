//----- (00000001403C1F50) ----------------------------------------------------
__int64 __fastcall sub_1403C1F50(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
	__int64 v4; // r8
	__int64 v6; // rax
	__int64 v7; // rdx
	int v8; // r9d
	__int64* i; // r8
	__int64 result; // rax

	v4 = *(_QWORD*)(a1 + 120);
	if (!v4)
		return 0i64;
	if (a3 >= 4u)
		return 0i64;
	v6 = sub_1403ACD90(qword_140C65B70, a2, v4);
	if (!v6)
		return 0i64;
	v7 = 0i64;
	v8 = *(_DWORD*)(*(_QWORD*)(v6 + 112) + 4i64);
	for (i = (__int64*)(384i64 * a3 + a1 + 2752); ; ++i)
	{
		result = *i;
		if (*i)
		{
			if (*(_DWORD*)(result + 280) == v8)
				break;
		}
		if ((unsigned __int64)++v7 >= 0x30)
			return 0i64;
	}
	return result;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

