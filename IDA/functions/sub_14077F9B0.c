//----- (000000014077F9B0) ----------------------------------------------------
__int64 __fastcall sub_14077F9B0(__int64 a1)
{
	__int64 v2; // rax
	unsigned int v3; // edx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 result; // rax

	if (!*(_DWORD*)(a1 + 276))
	{
		v2 = sub_140200220(0x346u);
		v3 = v2 ? *(_DWORD*)(v2 + 4) : 0;
		if (v3)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v4 = sub_1405A5B90(qword_140C65898, v3)) != 0
				|| (v4 = sub_1407A0FD0(qword_140C65B70, v3)) != 0)
			{
				sub_1405C7620((__int64*)a1, v4);
			}
		}
	}
	v5 = 0i64;
	if (qword_140C7DE20)
	{
		while (1)
		{
			result = *(_QWORD*)(qword_140C7DE18 + 8 * v5);
			if (*(_DWORD*)(result + 16) == 3)
				break;
			if (++v5 >= (unsigned __int64)qword_140C7DE20)
				goto LABEL_14;
		}
	}
	else
	{
	LABEL_14:
		result = 0i64;
	}
	if (*(_QWORD*)(qword_140C65898 + 120) && result && !*(_DWORD*)(result + 560))
		return sub_1405C8EC0(a1);
	*(_DWORD*)(a1 + 240) = 0;
	*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	return result;
}
// 14077FA03: variable 'v3' is possibly undefined
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

