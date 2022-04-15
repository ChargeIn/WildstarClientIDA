//----- (000000014090ED10) ----------------------------------------------------
__int64 __fastcall sub_14090ED10(unsigned __int16* a1, unsigned int a2, __int64 a3, int a4)
{
	__int64 v8; // rax
	int v9; // edx
	unsigned __int16* v10; // r10
	int v11; // eax
	__int64 v12; // rax
	int v13; // eax
	__int64 v15; // r9
	unsigned __int16 v16; // cx
	int v17; // edx
	__int64 v18; // rdx
	__int64 v19; // rax
	bool v20; // zf

	do
	{
		v8 = byte_1409CFAA0[*a1];
		v9 = a1[v8];
		v10 = &a1[v8];
		v11 = v9 - 4;
		while (2)
		{
			switch (v11)
			{
			case 108:
			case 131:
			case 132:
			case 133:
			case 134:
			case 135:
				v12 = byte_1409CFAA0[(unsigned __int16)v9];
				v9 = v10[v12];
				v10 += v12;
				v11 = v9 - 4;
				if ((unsigned int)(v9 - 4) <= 0x87)
					continue;
				break;
			default:
				goto LABEL_4;
			}
			break;
		}
	LABEL_4:
		v13 = *v10;
		if ((unsigned int)(v13 - 125) <= 1 || (unsigned int)(v13 - 130) <= 1)
		{
		LABEL_25:
			v15 = (unsigned int)a4;
		LABEL_26:
			v18 = a2;
		LABEL_27:
			if (!(unsigned int)sub_14090ED10(v10, v18, a3, v15))
				return 0i64;
			goto LABEL_28;
		}
		if ((unsigned int)(v13 - 127) <= 1 || (unsigned int)(v13 - 132) <= 1)
		{
			v16 = v10[2];
			v17 = 1;
			if (v16 < 0x20u)
				v17 = 1 << v16;
			v18 = a2 | v17;
			v15 = (unsigned int)a4;
			goto LABEL_27;
		}
		if (v13 == 119 || v13 == 129)
			goto LABEL_25;
		if ((unsigned int)(v13 - 123) <= 1)
		{
			v15 = (unsigned int)(a4 + 1);
			goto LABEL_26;
		}
		if (((v13 - 85) & 0xFFFFFFF6) != 0 || v13 == 93)
		{
			if ((unsigned int)(v13 - 1) > 1 && v13 != 25)
				return 0i64;
		}
		else if (v10[1] != 13 || (a2 & *(_DWORD*)(a3 + 116)) != 0 || a4 > 0 || *(_DWORD*)(a3 + 140))
		{
			return 0i64;
		}
	LABEL_28:
		v19 = a1[1];
		v20 = a1[v19] == 113;
		a1 += v19;
	} while (v20);
	return 1i64;
}
// 1409CFAA0: using guessed type unsigned __int8 byte_1409CFAA0[93];

