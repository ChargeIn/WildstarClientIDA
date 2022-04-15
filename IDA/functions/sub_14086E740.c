//----- (000000014086E740) ----------------------------------------------------
__int64 __fastcall sub_14086E740(_QWORD* a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v4; // rdx
	__int64* v5; // rbx
	__int64* v6; // rdi

	if (!a2)
		return 14i64;
	v4 = sub_140830F00(qword_140C61BA8, a2, 0);
	if (!v4)
		return 15i64;
	result = (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 72i64))(a1, v4);
	if ((_DWORD)result == 1)
	{
		v5 = (__int64*)a1[27];
		v6 = (__int64*)a1[28];
		if (v5 != v6)
		{
			do
				sub_140865CB0(*v5++, a2);
			while (v5 != v6);
			return 1i64;
		}
	}
	return result;
}

