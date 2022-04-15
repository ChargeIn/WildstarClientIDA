//----- (00000001406E4F30) ----------------------------------------------------
unsigned __int64 __fastcall sub_1406E4F30(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbp
	unsigned __int64 v4; // rsi
	unsigned __int64 result; // rax
	_QWORD* v6; // rbx

	v2 = *a2;
	v4 = (*(__int64(__fastcall**)(_QWORD))(a1 + 2440))(*a2);
	result = v4 / *(_QWORD*)(a1 + 2424);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v4 % *(_QWORD*)(a1 + 2424)));
	if (v6)
	{
		while (1)
		{
			if (v4 == *v6)
			{
				result = (*(__int64(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v2, v6 + 2);
				if ((_DWORD)result)
					break;
			}
			v6 = (_QWORD*)v6[1];
			if (!v6)
				return result;
		}
		if (v6 != (_QWORD*)-24i64)
			return sub_1406E4FC0(a1, v6[3]);
	}
	return result;
}

