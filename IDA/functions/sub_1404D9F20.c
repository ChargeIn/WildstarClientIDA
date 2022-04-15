//----- (00000001404D9F20) ----------------------------------------------------
void __fastcall sub_1404D9F20(__int64 a1, int a2)
{
	__int64 v4; // r9
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax

	if (!*(_DWORD*)(a1 + 30936) && !*(_DWORD*)(a1 + 30956))
	{
		v4 = *(_QWORD*)(a1 + 120);
		if (!v4
			|| ((v5 = *(_QWORD*)(a1 + 25744)) == 0 || !(unsigned int)sub_14045E630(v5))
			&& (!v4 || !*(_QWORD*)(v4 + 1128) || !a2))
		{
			*(_DWORD*)(a1 + 30168) = a2;
			dword_140C89A90 = a2;
			v6 = *(_QWORD*)(a1 + 120);
			if (v6)
			{
				v7 = sub_1404695E0(v6);
				if (a2)
				{
					if (v7)
					{
						if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 312) + 112i64) + 264i64) & 0x2000) == 0)
							sub_14039CCE0(a1, *(_DWORD*)(v7 + 92), 0xBu);
					}
				}
			}
		}
	}
}
// 1404D9F66: variable 'v4' is possibly undefined
// 140C89A90: using guessed type int dword_140C89A90;

