//----- (0000000140901DEC) ----------------------------------------------------
unsigned __int64 __fastcall sub_140901DEC(CHAR* a1)
{
	__int64* v1; // rbx
	unsigned __int64 v3; // rdi

	v1 = (__int64*)qword_140C5F500;
	if (dword_140DC6364)
	{
		if (qword_140C5F500
			|| qword_140C5F508 && !(unsigned int)sub_140906FFC() && (v1 = (__int64*)qword_140C5F500) != 0i64)
		{
			if (a1)
			{
				v3 = sub_1407E1990((__int64)a1);
				while (*v1)
				{
					if (sub_1407E1990(*v1) > v3
						&& *(_BYTE*)(*v1 + v3) == 61
						&& !(unsigned int)sub_1409070F0((CHAR*)*v1, a1, v3))
					{
						return v3 + *v1 + 1;
					}
					++v1;
				}
			}
		}
	}
	return 0i64;
}
// 140C5F500: using guessed type __int64 qword_140C5F500;
// 140DC6364: using guessed type int dword_140DC6364;

