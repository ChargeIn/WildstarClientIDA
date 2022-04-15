//----- (00000001403B1E40) ----------------------------------------------------
__int64 __fastcall sub_1403B1E40(__int64 a1, __int64 a2)
{
	__int64 v4; // r9
	unsigned __int64 v5; // rbx
	int v6; // eax
	unsigned int v7; // r8d
	unsigned int v8; // edi
	unsigned int v9; // edx
	int v10; // eax
	int v11; // eax
	unsigned int v12; // eax

	if (a2)
	{
		v4 = *(_QWORD*)(a1 + 112);
		if (*(_DWORD*)(v4 + 192))
		{
			v5 = 208i64;
			while (1)
			{
				v6 = *(_DWORD*)(v5 + v4 - 12);
				if (v6 > 5)
					goto LABEL_16;
				v7 = *(_DWORD*)(v5 + v4);
				if (!v7)
					goto LABEL_16;
				v8 = 0;
				v9 = 0;
				if (v6)
				{
					v10 = v6 - 1;
					if (v10)
					{
						v11 = v10 - 1;
						if (v11)
						{
							if (v11 != 1)
								goto LABEL_15;
							v8 = 165;
							v12 = sub_1403B3E30(a2 + 160, 0i64, v7);
						}
						else
						{
							v8 = 164;
							v12 = sub_1403B3CF0(a2 + 160, 0i64, v7);
						}
					}
					else
					{
						v8 = 163;
						v12 = sub_1403B3BB0(a2 + 160, 0i64, v7);
					}
				}
				else
				{
					v8 = 162;
					v12 = sub_1403AC840(a2 + 160, 771, v7);
				}
				v9 = v12;
			LABEL_15:
				v4 = *(_QWORD*)(a1 + 112);
				if (v9 < *(_DWORD*)(v5 + v4 + 12))
					return v8;
			LABEL_16:
				v5 += 4i64;
				if (v5 >= 0xDC)
					return 0i64;
			}
		}
	}
	return 0i64;
}

