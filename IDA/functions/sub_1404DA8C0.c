//----- (00000001404DA8C0) ----------------------------------------------------
__int64 __fastcall sub_1404DA8C0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rdx
	__int64 v6; // rcx

	result = *(int*)(a1 + 5276);
	if ((int)result < 9 && *(_QWORD*)(a1 + 120) && a2 < 0xC)
	{
		v5 = 3 * result;
		result = a2;
		v6 = *(_QWORD*)(a1 + 8 * (a2 + 4 * v5) + 4328);
		if (v6)
			return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 64i64))(v6, 2i64, a1);
	}
	return result;
}

