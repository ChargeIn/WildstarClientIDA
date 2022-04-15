//----- (000000014051F960) ----------------------------------------------------
__int64 __fastcall sub_14051F960(__int64 a1)
{
	__int64 result; // rax
	int v2; // eax
	int v3; // ecx
	int v4; // eax

	result = (__int64)sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 16), 0i64);
	if (result)
	{
		v2 = *(_DWORD*)(result + 8);
		v3 = 1;
		if (v2 > 1)
			v3 = v2;
		v4 = 7;
		if (v3 < 7)
			v4 = v3;
		if (v4 == 1)
		{
			return 100i64;
		}
		else if (v4 <= 3)
		{
			return 250i64;
		}
		else
		{
			return 1000i64;
		}
	}
	return result;
}
// 14051F9A1: conditional instruction was optimized away because eax.4 is in (2..7)
// 14051F9AB: conditional instruction was optimized away because eax.4 is in (4..7)
// 140C658F0: using guessed type __int64 qword_140C658F0;

