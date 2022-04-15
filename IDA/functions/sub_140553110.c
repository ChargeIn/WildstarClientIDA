//----- (0000000140553110) ----------------------------------------------------
__int64 __fastcall sub_140553110(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebx
	__int64 i; // rdi
	__int64 v6; // rax
	_DWORD* v7; // rcx
	int v8; // edx
	__int64 v9; // rax
	unsigned int v10; // edx
	_DWORD* v11; // rax
	signed int v12; // r8d
	__int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF

	v4 = 0;
	for (i = a1 + 24; ; i += 8i64)
	{
		v6 = *(_QWORD*)i;
		if (!*(_QWORD*)i)
			return 0i64;
		if (*(_DWORD*)(v6 + 4) == 3)
		{
			v7 = *(_DWORD**)(a2 + 24);
			v8 = v7 ? *v7 : 0;
			if (*(_DWORD*)(v6 + 12) == v8 && !(unsigned int)sub_1405510D0(a1, v4) && (unsigned int)sub_140553790(a1, v4))
				break;
		}
		v9 = *(_QWORD*)i;
		if (*(_DWORD*)(*(_QWORD*)i + 4i64) == 18)
		{
			v14[0] = (__int64)off_140B66440;
			v14[1] = a2;
			v10 = *(_DWORD*)(v9 + 12);
			if (!v10 || (v11 = (_DWORD*)sub_1403B4A10((__int64)v14, v10), !(unsigned int)sub_1403B4A20((__int64)v14, v11)))
			{
				if (!(unsigned int)sub_1405510D0(a1, v4))
				{
					if ((unsigned int)sub_140553790(a1, v4))
					{
						v12 = *(_DWORD*)(a2 + 13816);
						if (v12 >= 0 && !(unsigned int)sub_140551730(a1, v4, v12))
							return 1i64;
					}
				}
			}
			v14[0] = (__int64)off_140B66400;
		}
		if (++v4 >= 6)
			return 0i64;
	}
	return 1i64;
}
// 140B66400: using guessed type __int64 (__fastcall *off_140B66400[2])();
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();

