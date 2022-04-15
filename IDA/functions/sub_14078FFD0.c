//----- (000000014078FFD0) ----------------------------------------------------
__int64 __fastcall sub_14078FFD0(int a1, __int64 a2, unsigned __int64 a3)
{
	unsigned int v3; // r12d
	__int64 v5; // rbx
	unsigned int v7; // r13d
	unsigned __int8* v8; // rbx
	unsigned __int8* v9; // rdi
	unsigned int v10; // r14d
	int v11; // esi
	int v12; // eax

	v3 = 0;
	v5 = a2;
	v7 = 1;
	if (*(_BYTE*)(a2 + 1) == 94)
	{
		v7 = 0;
		v5 = a2 + 1;
	}
	v8 = (unsigned __int8*)(v5 + 1);
	if ((unsigned __int64)v8 < a3)
	{
		v9 = v8 + 2;
		do
		{
			if (*v8 == 37)
			{
				v10 = *++v8;
				++v9;
				switch ((unsigned int)sub_1407F69AC(v10))
				{
				case 'a':
					v11 = sub_1407DE778(a1);
					goto LABEL_17;
				case 'c':
					v11 = sub_1407DE7F8(a1);
					goto LABEL_17;
				case 'd':
					v11 = sub_1407DE874(a1);
					goto LABEL_17;
				case 'l':
					v11 = sub_1407DE8F0(a1);
					goto LABEL_17;
				case 'p':
					v11 = sub_1407DE96C(a1);
					goto LABEL_17;
				case 's':
					v11 = sub_1407DE9E8(a1);
					goto LABEL_17;
				case 'u':
					v11 = sub_1407DEA64(a1);
					goto LABEL_17;
				case 'w':
					v11 = sub_1407DE6F8(a1);
					goto LABEL_17;
				case 'x':
					v11 = sub_1407DEAE0(a1);
					goto LABEL_17;
				case 'z':
					v11 = a1 == 0;
				LABEL_17:
					if (!(unsigned int)sub_1407DE8F0(v10))
						v11 = v11 == 0;
					break;
				default:
					v11 = v10 == a1;
					break;
				}
				if (v11)
					return v7;
			}
			else if (v8[1] == 45 && (unsigned __int64)v9 < a3)
			{
				v12 = *v8;
				v8 += 2;
				v9 += 2;
				if (v12 <= a1 && a1 <= *v8)
					return v7;
			}
			else if (*v8 == a1)
			{
				return v7;
			}
			++v8;
			++v9;
		} while ((unsigned __int64)v8 < a3);
	}
	LOBYTE(v3) = v7 == 0;
	return v3;
}

