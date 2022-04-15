#include "../winhttp.h"

//----- (000000014090EFC0) ----------------------------------------------------
__int64 __fastcall sub_14090EFC0(unsigned __int16* a1, unsigned int a2, __int64 a3, unsigned int a4)
{
	unsigned int i; // r11d
	__int64 v8; // rax
	int v9; // edx
	unsigned __int16* v10; // rbx
	int v11; // eax
	__int64 v12; // rax
	int v13; // ecx
	unsigned __int16* v14; // r10
	unsigned __int16* v15; // rbx
	__int64 v16; // rax
	bool v17; // zf
	int v18; // eax
	unsigned __int16* v19; // rbx
	unsigned int v20; // eax
	__int64 v22; // r9
	unsigned __int16 v23; // cx
	int v24; // edx
	__int64 v25; // rdx
	__int64 v26; // rax

	for (i = a2; ; i = a2)
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
				goto LABEL_5;
			}
			break;
		}
	LABEL_5:
		v13 = *v10;
		v14 = v10;
		if (v13 == 129)
		{
			v15 = v10 + 2;
			if (*v15 == 112)
				v15 += 4;
			if ((unsigned int)*v15 - 135 <= 4 || !(unsigned int)sub_14090EFC0(v15, i, a3, a4))
				return 0i64;
			do
			{
				v16 = v15[1];
				v17 = v15[v16] == 113;
				v15 += v16;
			} while (v17);
			v18 = v15[2];
			v19 = v15 + 2;
			v20 = v18 - 4;
			while (2)
			{
				switch (v20)
				{
				case 0x6Cu:
				case 0x83u:
				case 0x84u:
				case 0x85u:
				case 0x86u:
				case 0x87u:
					v19 += byte_1409CFAA0[*v19];
					v20 = *v19 - 4;
					if (v20 <= 0x87)
						continue;
					break;
				default:
					goto LABEL_14;
				}
				break;
			}
		LABEL_14:
			v13 = *v19;
			i = a2;
			v14 = v19;
		}
		if ((unsigned int)(v13 - 125) <= 1 || (unsigned int)(v13 - 130) <= 1)
		{
		LABEL_34:
			v22 = a4;
		LABEL_35:
			v25 = i;
		LABEL_36:
			if (!(unsigned int)sub_14090EFC0(v14, v25, a3, v22))
				return 0i64;
			goto LABEL_37;
		}
		if ((unsigned int)(v13 - 127) <= 1 || (unsigned int)(v13 - 132) <= 1)
		{
			v23 = v14[2];
			v24 = 1;
			if (v23 < 0x20u)
				v24 = 1 << v23;
			v25 = i | v24;
			v22 = a4;
			goto LABEL_36;
		}
		if (v13 == 119)
			goto LABEL_34;
		if ((unsigned int)(v13 - 123) <= 1)
		{
			v22 = a4 + 1;
			goto LABEL_35;
		}
		if (((v13 - 85) & 0xFFFFFFF6) != 0 || v13 == 93)
		{
			if ((unsigned int)(v13 - 25) > 1)
				return 0i64;
		}
		else if (v14[1] != 12 || (i & *(_DWORD*)(a3 + 116)) != 0 || (int)a4 > 0 || *(_DWORD*)(a3 + 140))
		{
			return 0i64;
		}
	LABEL_37:
		v26 = a1[1];
		v17 = a1[v26] == 113;
		a1 += v26;
		if (!v17)
			break;
	}
	return 1i64;
}
// 1409CFAA0: using guessed type unsigned __int8 byte_1409CFAA0[93];

