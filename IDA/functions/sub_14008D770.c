//----- (000000014008D770) ----------------------------------------------------
__int64 __fastcall sub_14008D770(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	unsigned __int16 i; // bx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if (v7 >= 0)
	{
		v7 = sub_14006BF60(a1, (_WORD*)(a3 + 4), 0x10ui64);
		if (v7 >= 0)
		{
			v8 = sub_1403374E0(a2, 16i64 * *(unsigned __int16*)(a3 + 4));
			*(_QWORD*)(a3 + 8) = v8;
			if (!v8)
				return 2147500037i64;
			for (i = 0; i < *(_WORD*)(a3 + 4); ++i)
			{
				v7 = sub_14008D580(a1, (__int64)a2, (_DWORD*)(*(_QWORD*)(a3 + 8) + 16i64 * i));
				if (v7 < 0)
					break;
			}
		}
	}
	return (unsigned int)v7;
}

