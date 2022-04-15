//----- (000000014046EE00) ----------------------------------------------------
__int64 __fastcall sub_14046EE00(_DWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 result; // rax
	int v6; // eax
	int v7; // eax

	v2 = sub_1403D90D0(qword_140C65898, a1[48]);
	v3 = v2;
	if (!v2)
		return 1579i64;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
		return 1579i64;
	v4 = *(_QWORD*)(v3 + 184);
	if (!v4)
		return 1579i64;
	if (*(_DWORD*)(v4 + 4) == 5)
		return 7592i64;
	switch (*(_DWORD*)(v4 + 4))
	{
	case 0:
		v6 = sub_14047BBA0(a1);
		if (!v6)
			return 1579i64;
		v7 = v6 - 1;
		if (v7)
		{
			if (v7 != 1)
				return 1579i64;
			result = 1580i64;
		}
		else
		{
			result = 1578i64;
		}
		break;
	case 1:
	case 3:
		return 1894i64;
	case 6:
		return 7715i64;
	case 8:
		return 7837i64;
	case 9:
		return 167i64;
	default:
		return 1579i64;
	}
	return result;
}
// 14046EE6C: conditional instruction was optimized away because rcx.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;

