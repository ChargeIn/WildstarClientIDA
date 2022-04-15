//----- (000000014073B2B0) ----------------------------------------------------
__int64 __fastcall sub_14073B2B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 24);
		if (v3)
		{
			switch (*(_DWORD*)(v3 + 12))
			{
			case 3:
				switch (*(_DWORD*)(v3 + 20))
				{
				case 2:
					sub_14076B1C0((__int64)a1, 0);
					return 1i64;
				case 3:
					sub_14076B1C0((__int64)a1, 1);
					return 1i64;
				case 5:
					sub_14076B1C0((__int64)a1, 2);
					return 1i64;
				}
				break;
			case 4:
				sub_14076B1C0((__int64)a1, 4);
				return 1i64;
			case 5:
				sub_14076B1C0((__int64)a1, 3);
				return 1i64;
			}
		}
	}
	sub_14076B1C0((__int64)a1, 5);
	return 1i64;
}

