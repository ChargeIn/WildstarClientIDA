//----- (00000001401603F0) ----------------------------------------------------
void __fastcall sub_1401603F0(__int64 a1, int a2)
{
	int v2; // r10d
	__int64 v3; // r11
	__int64 v5; // rax
	int v6; // ebp
	int v7; // r14d
	int v8; // esi
	int v9; // r9d
	int v10; // edi
	int v11; // r8d
	__int64 v12; // rdx
	int v13; // eax
	int v14; // eax
	int v15; // ecx
	__int64 v16; // rcx
	int v17; // eax

	if (a2 >= 0)
	{
		v2 = *(_DWORD*)(a1 + 1144);
		v3 = a2;
		if (a2 <= v2)
		{
			v5 = *(_QWORD*)(a1 + 464);
			v6 = *(_DWORD*)(a1 + 716);
			v7 = *(_DWORD*)(a1 + 724);
			v8 = 0;
			v9 = v6;
			if (v5)
				v10 = *(_DWORD*)(v5 + 1300);
			else
				v10 = 0;
			v11 = 0;
			v12 = 0i64;
			if ((int)v3 > 0)
			{
				do
				{
					if (v12 < 0 || v11 >= v2)
					{
						v13 = 0;
					}
					else if (v12 || (*(_BYTE*)(a1 + 664) & 1) != 0 && *(_QWORD*)(a1 + 1144) != 1i64)
					{
						v13 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8 * v12) + 4i64);
					}
					else
					{
						v13 = v7 - v6;
					}
					++v12;
					v9 += v13;
					++v11;
				} while (v12 < v3);
			}
			if ((int)v3 >= v2)
			{
				v14 = 0;
			}
			else if ((_DWORD)v3 || (*(_BYTE*)(a1 + 664) & 1) != 0 && *(_QWORD*)(a1 + 1144) != 1i64)
			{
				v14 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8 * v3) + 4i64);
			}
			else
			{
				v14 = v7 - v6;
			}
			v15 = v14 + v9;
			if (v9 - v10 <= v6)
				v10 = v9 - v6;
			if (v15 - v10 > v7)
				v10 = v15 - v7;
			if (sub_1400C6D90(a1))
			{
				v16 = *(_QWORD*)(a1 + 464);
				v17 = *(_DWORD*)(v16 + 1296);
				if (v10 < v17)
					v17 = v10;
				if (v17 > 0)
					v8 = v17;
				*(_BYTE*)(v16 + 1392) |= 0x10u;
				*(_DWORD*)(v16 + 1300) = v8;
				sub_1400CAE90((_QWORD*)a1);
			}
		}
	}
}

