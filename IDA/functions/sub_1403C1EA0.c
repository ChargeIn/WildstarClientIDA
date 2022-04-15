//----- (00000001403C1EA0) ----------------------------------------------------
__int64 __fastcall sub_1403C1EA0(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
	__int64 v3; // rbx
	__int64 v4; // rdx
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rax

	v3 = a2;
	v4 = *(_QWORD*)(a1 + 120);
	if (!v4)
		return 0i64;
	if ((unsigned int)v3 >= 0x30)
		return 0i64;
	if (a3 >= 4u)
		return 0i64;
	v5 = a1 + 8 * (v3 + 48i64 * a3);
	v6 = *(_QWORD*)(v5 + 2752);
	if (!v6)
		return 0i64;
	v7 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v6 + 276), v4);
	if ((unsigned int)v3 > 7)
	{
		if ((unsigned int)v3 < 0xC && (!v7 || *(_DWORD*)(*(_QWORD*)(v7 + 112) + 252i64) == 5))
			return 0i64;
	}
	else if (!v7 || *(_DWORD*)(*(_QWORD*)(v7 + 112) + 252i64) != 5)
	{
		return 0i64;
	}
	return *(_QWORD*)(v5 + 2752);
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

