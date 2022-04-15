#include "../winhttp.h"

//----- (0000000140910020) ----------------------------------------------------
__int64 __fastcall sub_140910020(_WORD* a1, unsigned __int16* a2, unsigned int a3, int a4)
{
	unsigned int v4; // r11d
	int v5; // r9d
	int v6; // edi
	int v7; // ebp
	int v8; // esi
	unsigned __int16* v9; // r10
	unsigned __int16* v10; // rbx
	unsigned int v11; // r8d
	unsigned __int16 v12; // dx
	__int64 v13; // rax
	__int64 result; // rax
	__int64 v15; // rax
	bool v16; // zf
	__int64 v17; // rax
	__int64 v18; // rax
	unsigned __int16* v19; // rbx
	__int64 v20; // rax
	int v21; // ecx
	__int64 v22; // rax
	int v23; // ecx
	__int64 v24; // rax
	unsigned __int16* v25; // r10
	unsigned __int16* v26; // rcx
	__int64 v27; // rax
	int v28; // edx
	int v29; // eax
	int v30; // eax
	int v31; // eax
	unsigned __int16* v32; // rcx
	unsigned __int64 v33; // r10
	__int64 v34; // rax
	int v35; // eax
	int v36; // [rsp+60h] [rbp+8h]

	v4 = a3;
	v5 = 0;
	v36 = 0;
	v6 = 0;
	v7 = -1;
	v8 = (a3 >> 11) & 1;
	v9 = a2;
	v10 = a1 + 2;
	if ((unsigned __int16)(*a1 - 127) <= 1u || (unsigned __int16)(*a1 - 132) <= 1u)
		v10 = a1 + 3;
	v11 = *v10;
	v12 = *v10;
	while (2)
	{
		switch (v11)
		{
		case 0u:
		case 0x71u:
		case 0x72u:
		case 0x73u:
		case 0x74u:
		case 0x75u:
			if (v7 < 0 || !v5 && v6 < v7)
				v7 = v6;
			if (v12 == 113)
			{
				v10 += 2;
				v6 = 0;
				v5 = 0;
				v36 = 0;
				goto LABEL_76;
			}
			return (unsigned int)v7;
		case 1u:
		case 2u:
		case 4u:
		case 5u:
		case 0x17u:
		case 0x18u:
		case 0x19u:
		case 0x1Au:
		case 0x1Bu:
		case 0x1Cu:
		case 0x70u:
		case 0x76u:
		case 0x87u:
		case 0x88u:
		case 0x89u:
		case 0x8Au:
		case 0x8Bu:
			goto LABEL_19;
		case 3u:
		case 0x90u:
		case 0x92u:
		case 0x94u:
		case 0x96u:
		case 0x97u:
		case 0x9Au:
			goto LABEL_42;
		case 6u:
		case 7u:
		case 8u:
		case 9u:
		case 0xAu:
		case 0xBu:
		case 0xCu:
		case 0xDu:
		case 0x11u:
		case 0x12u:
		case 0x13u:
		case 0x14u:
		case 0x15u:
		case 0x16u:
			goto LABEL_36;
		case 0xEu:
			if (v8)
				return 0xFFFFFFFFi64;
			++v6;
			++v10;
			goto LABEL_76;
		case 0xFu:
		case 0x10u:
			v10 += 2;
		LABEL_36:
			++v6;
		LABEL_37:
			++v10;
			goto LABEL_76;
		case 0x1Du:
		case 0x1Eu:
		case 0x1Fu:
		case 0x20u:
		case 0x23u:
		case 0x24u:
		case 0x2Bu:
		case 0x30u:
		case 0x31u:
		case 0x38u:
		case 0x3Du:
		case 0x3Eu:
		case 0x45u:
		case 0x4Au:
		case 0x4Bu:
		case 0x52u:
			++v6;
			v10 += 2;
			goto LABEL_25;
		case 0x21u:
		case 0x22u:
		case 0x25u:
		case 0x26u:
		case 0x27u:
		case 0x28u:
		case 0x2Au:
		case 0x2Cu:
		case 0x2Du:
		case 0x2Eu:
		case 0x2Fu:
		case 0x32u:
		case 0x33u:
		case 0x34u:
		case 0x35u:
		case 0x37u:
		case 0x39u:
		case 0x3Au:
		case 0x3Bu:
		case 0x3Cu:
		case 0x3Fu:
		case 0x40u:
		case 0x41u:
		case 0x42u:
		case 0x44u:
		case 0x46u:
		case 0x47u:
		case 0x48u:
		case 0x49u:
		case 0x4Cu:
		case 0x4Du:
		case 0x4Eu:
		case 0x4Fu:
		case 0x51u:
		case 0x53u:
		case 0x54u:
			v10 += byte_1409CFAA0[v12];
			if (v8)
				goto LABEL_26;
			goto LABEL_76;
		case 0x29u:
		case 0x36u:
		case 0x43u:
		case 0x50u:
			v6 += v10[1];
			v10 += 3;
		LABEL_25:
			if (v8)
			{
			LABEL_26:
				if ((*(v10 - 1) & 0xFC00) == 0xD800)
					++v10;
			}
			goto LABEL_76;
		case 0x55u:
		case 0x56u:
		case 0x59u:
		case 0x5Au:
		case 0x5Eu:
		case 0x60u:
			if ((unsigned __int16)(v10[1] - 15) <= 1u)
				v10 += 2;
		LABEL_42:
			v18 = v12;
			goto LABEL_20;
		case 0x57u:
		case 0x58u:
		case 0x5Fu:
			++v6;
			v21 = 4;
			if ((unsigned __int16)(v10[1] - 15) > 1u)
				v21 = 2;
			v22 = v21;
			goto LABEL_75;
		case 0x5Bu:
		case 0x5Cu:
		case 0x61u:
			v18 = v12;
			if ((unsigned __int16)(v10[2] - 15) <= 1u)
				v10 += 2;
			goto LABEL_20;
		case 0x5Du:
			v23 = 2;
			v6 += v10[1];
			if ((unsigned __int16)(v10[2] - 15) > 1u)
				v23 = 0;
			v10 += v23 + 3;
			goto LABEL_76;
		case 0x6Au:
		case 0x6Bu:
		case 0x6Cu:
			if (v12 == 108)
				v24 = v10[1];
			else
				v24 = 17i64;
			v10 += v24;
			switch (*v10)
			{
			case 'b':
			case 'c':
			case 'f':
			case 'g':
				goto LABEL_37;
			case 'd':
			case 'e':
				goto LABEL_36;
			case 'h':
			case 'i':
				v6 += v10[1];
				v10 += 3;
				break;
			default:
				++v6;
				break;
			}
			goto LABEL_76;
		case 0x6Du:
		case 0x6Eu:
			if ((v4 & 0x2000000) != 0)
				goto LABEL_58;
			v25 = sub_140907AF0(v9, v8, v10[1]);
			v26 = v25;
			if (!v25)
				return 4294967294i64;
			do
			{
				v27 = v26[1];
				v16 = v26[v27] == 113;
				v26 += v27;
			} while (v16);
			if (v10 <= v25 || v10 >= v26)
			{
				v30 = sub_140910020(v25, a2, a3, (unsigned int)a4);
				v5 = v36;
				v28 = v30;
			}
			else
			{
				v5 = 1;
				v36 = 1;
			LABEL_58:
				v28 = 0;
			}
			v29 = v10[2];
			v10 += 2;
			switch (v29)
			{
			case 'b':
			case 'c':
			case 'f':
			case 'g':
				++v10;
				break;
			case 'd':
			case 'e':
				++v10;
				goto LABEL_63;
			case 'h':
			case 'i':
				v31 = v10[1];
				v10 += 3;
				v6 += v28 * v31;
				break;
			default:
			LABEL_63:
				v6 += v28;
				break;
			}
		LABEL_76:
			v11 = *v10;
			v12 = *v10;
			if (v11 <= 0x9B)
			{
				v4 = a3;
				v9 = a2;
				continue;
			}
			return 4294967293i64;
		case 0x6Fu:
			v32 = &v9[v10[1]];
			v33 = (unsigned __int64)v32;
			do
			{
				v34 = v32[1];
				v16 = v32[v34] == 113;
				v32 += v34;
			} while (v16);
			if (((unsigned __int64)v10 <= v33 || v10 >= v32) && a4 <= 10)
			{
				v35 = sub_140910020(v33, a2, v4, (unsigned int)(a4 + 1));
				v5 = v36;
				v6 += v35;
				v10 += 2;
			}
			else
			{
				v5 = 1;
				v10 += 2;
				v36 = 1;
			}
			goto LABEL_76;
		case 0x77u:
		case 0x78u:
		case 0x79u:
		case 0x7Au:
			do
			{
				v17 = v10[1];
				v16 = v10[v17] == 113;
				v10 += v17;
			} while (v16);
		LABEL_19:
			v18 = *v10;
		LABEL_20:
			v10 += byte_1409CFAA0[v18];
			goto LABEL_76;
		case 0x7Bu:
		case 0x7Cu:
		case 0x7Du:
		case 0x7Eu:
		case 0x7Fu:
		case 0x80u:
		case 0x82u:
		case 0x83u:
		case 0x84u:
		case 0x85u:
			goto LABEL_8;
		case 0x81u:
		case 0x86u:
			v13 = v10[1];
			if (v10[v13] == 113)
			{
			LABEL_8:
				result = sub_140910020(v10, v9, v4, (unsigned int)a4);
				if ((int)result < 0)
					return result;
				v6 += result;
				do
				{
					v15 = v10[1];
					v16 = v10[v15] == 113;
					v10 += v15;
				} while (v16);
				v5 = v36;
				v10 += 2;
			}
			else
			{
				v10 += v13 + 2;
			}
			goto LABEL_76;
		case 0x8Cu:
		case 0x8Du:
		case 0x8Eu:
		case 0x9Bu:
			v19 = &v10[byte_1409CFAA0[(unsigned __int16)v11]];
			do
			{
				v20 = v19[1];
				v16 = v19[v20] == 113;
				v19 += v20;
			} while (v16);
			v10 = v19 + 2;
			goto LABEL_76;
		case 0x8Fu:
		case 0x91u:
		case 0x93u:
		case 0x95u:
			v22 = byte_1409CFAA0[v12] + v10[1];
		LABEL_75:
			v10 += v22;
			goto LABEL_76;
		case 0x98u:
		case 0x99u:
			return 0xFFFFFFFFi64;
		default:
			return 4294967293i64;
		}
	}
}
// 1409CFAA0: using guessed type unsigned __int8 byte_1409CFAA0[93];

