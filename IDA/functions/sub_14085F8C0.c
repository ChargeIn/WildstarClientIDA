//----- (000000014085F8C0) ----------------------------------------------------
void __fastcall sub_14085F8C0(__int64 a1, double a2, int a3)
{
	__int64 v4; // rdi
	__int64 v5; // rdi
	char v6; // al
	__int64 v7; // rcx
	int v8; // r8d
	int v9; // r8d
	int v10; // r8d
	int v11; // [rsp+50h] [rbp+18h] BYREF
	int v12; // [rsp+58h] [rbp+20h] BYREF

	switch (a3)
	{
	case 10:
		v6 = (int)*(float*)&a2 & 3 | *(_BYTE*)(a1 + 379) & 0xEC | (*(_BYTE*)(a1 + 379) | (16
			* ((*(_BYTE*)(a1 + 379) & 3) != (int)*(float*)&a2))) & 0x10;
		*(_BYTE*)(a1 + 379) = v6;
		if ((v6 & 3) == 1 && !*(_QWORD*)(a1 + 88))
		{
			sub_14084D5F0(*(_QWORD*)(a1 + 160), (__int64*)(a1 + 88), *(_QWORD*)(a1 + 176), &v12, &v11, a1 + 448);
			if (!*(_QWORD*)(a1 + 88))
				*(_BYTE*)(a1 + 379) &= 0xFCu;
		}
		break;
	case 11:
		*(_DWORD*)(a1 + 456) = LODWORD(a2);
		break;
	case 20:
		*(_DWORD*)(a1 + 448) = LODWORD(a2);
		break;
	case 21:
		*(_DWORD*)(a1 + 452) = LODWORD(a2);
		break;
	case 37:
		v4 = *(_QWORD*)(a1 + 88);
		if (v4)
			*(_DWORD*)(v4 + 24) = sub_14085FEF0(a1, a2).m128_u32[0];
		break;
	case 38:
		v5 = *(_QWORD*)(a1 + 88);
		if (v5)
			*(_DWORD*)(v5 + 32) = sub_14085FEF0(a1, a2).m128_u32[0];
		break;
	case 64:
		*(_BYTE*)(a1 + 460) = *(float*)&a2 > 0.0;
		break;
	default:
		v7 = *(_QWORD*)(a1 + 88);
		if (v7)
		{
			v8 = a3 - 65;
			if (v8)
			{
				v9 = v8 - 1;
				if (v9)
				{
					v10 = v9 - 1;
					if (v10)
					{
						if (v10 == 1)
							*(_DWORD*)(v7 + 36) = (int)*(float*)&a2;
					}
					else
					{
						sub_140873E60(v7, (int)*(float*)&a2);
					}
				}
				else
				{
					*(_BYTE*)(v7 + 76) &= ~0x20u;
					if (*(float*)&a2 == 0.0)
						*(_BYTE*)(v7 + 76) = *(_BYTE*)(v7 + 76);
					else
						*(_BYTE*)(v7 + 76) |= 0x20u;
				}
			}
			else
			{
				*(_BYTE*)(v7 + 76) &= ~8u;
				*(_BYTE*)(v7 + 76) |= 8 * (*(float*)&a2 != 0.0);
			}
		}
		break;
	}
}

