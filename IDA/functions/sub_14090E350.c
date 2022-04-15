#include "../winhttp.h"

//----- (000000014090E350) ----------------------------------------------------
__int64 __fastcall sub_14090E350(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
	unsigned int v4; // r10d
	unsigned __int16* v5; // rbx
	int v6; // esi
	int v7; // edi
	__int16 v9; // r11
	__int64 result; // rax
	__int64 v11; // rax
	bool v12; // zf
	unsigned __int64 v13; // rdx
	unsigned __int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // rax
	unsigned __int16 v19; // ax
	int v20; // [rsp+50h] [rbp+18h]
	__int64 v21; // [rsp+58h] [rbp+20h]

	v21 = a4;
	v20 = a3;
	v4 = *(unsigned __int16*)(a1 + 4);
	v5 = (unsigned __int16*)(a1 + 4);
	v6 = -1;
	v7 = 0;
	v9 = *(_WORD*)(a1 + 4);
	while (2)
	{
		switch (v4)
		{
		case 0u:
		case 0x71u:
		case 0x72u:
		case 0x98u:
		case 0x99u:
			if (v6 >= 0)
			{
				if (v6 != v7)
					return 0xFFFFFFFFi64;
			}
			else
			{
				v6 = v7;
			}
			if ((_WORD)v4 == 113)
			{
				v5 += 2;
				v7 = 0;
				goto LABEL_43;
			}
			return (unsigned int)v6;
		case 1u:
		case 2u:
		case 3u:
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
		case 0x90u:
		case 0x92u:
		case 0x94u:
		case 0x96u:
		case 0x97u:
		case 0x9Au:
			v5 += byte_1409CFAA0[(unsigned __int16)v4];
			goto LABEL_43;
		case 6u:
		case 7u:
		case 8u:
		case 9u:
		case 0xAu:
		case 0xBu:
		case 0xCu:
		case 0xDu:
		case 0x12u:
		case 0x13u:
		case 0x14u:
		case 0x15u:
			goto LABEL_33;
		case 0xEu:
			return 4294967294i64;
		case 0xFu:
		case 0x10u:
			v5 += 2;
		LABEL_33:
			++v7;
			++v5;
			goto LABEL_43;
		case 0x11u:
		case 0x16u:
		case 0x21u:
		case 0x22u:
		case 0x23u:
		case 0x24u:
		case 0x25u:
		case 0x26u:
		case 0x27u:
		case 0x28u:
		case 0x2Au:
		case 0x2Bu:
		case 0x2Cu:
		case 0x2Du:
		case 0x2Eu:
		case 0x2Fu:
		case 0x30u:
		case 0x31u:
		case 0x32u:
		case 0x33u:
		case 0x34u:
		case 0x35u:
		case 0x37u:
		case 0x38u:
		case 0x39u:
		case 0x3Au:
		case 0x3Bu:
		case 0x3Cu:
		case 0x3Du:
		case 0x3Eu:
		case 0x3Fu:
		case 0x40u:
		case 0x41u:
		case 0x42u:
		case 0x44u:
		case 0x45u:
		case 0x46u:
		case 0x47u:
		case 0x48u:
		case 0x49u:
		case 0x4Au:
		case 0x4Bu:
		case 0x4Cu:
		case 0x4Du:
		case 0x4Eu:
		case 0x4Fu:
		case 0x51u:
		case 0x52u:
		case 0x53u:
		case 0x54u:
		case 0x55u:
		case 0x56u:
		case 0x57u:
		case 0x58u:
		case 0x59u:
		case 0x5Au:
		case 0x5Bu:
		case 0x5Cu:
		case 0x5Eu:
		case 0x5Fu:
		case 0x60u:
		case 0x61u:
		case 0x6Du:
		case 0x6Eu:
		case 0x73u:
		case 0x74u:
		case 0x75u:
		case 0x7Eu:
		case 0x80u:
		case 0x82u:
		case 0x83u:
		case 0x84u:
		case 0x85u:
		case 0x86u:
		case 0x8Cu:
		case 0x8Du:
		case 0x8Eu:
		case 0x9Bu:
			return 0xFFFFFFFFi64;
		case 0x1Du:
		case 0x1Eu:
		case 0x1Fu:
		case 0x20u:
			++v7;
			v5 += 2;
			if (a2)
			{
				if ((*(v5 - 1) & 0xFC00) == 0xD800)
					++v5;
			}
			goto LABEL_43;
		case 0x29u:
		case 0x36u:
		case 0x43u:
		case 0x50u:
			v17 = v5[1];
			v5 += 3;
			v7 += v17;
			if (a2 && (*(v5 - 1) & 0xFC00) == 0xD800)
				++v5;
			goto LABEL_43;
		case 0x5Du:
			v7 += v5[1];
			if ((unsigned __int16)(v5[2] - 15) <= 1u)
				v5 += 2;
			v5 += 3;
			goto LABEL_43;
		case 0x6Au:
		case 0x6Bu:
		case 0x6Cu:
			if (v9 == 108)
				v18 = v5[1];
			else
				v18 = 17i64;
			v5 += v18;
			if (*v5 < 0x62u)
				goto LABEL_42;
			if (*v5 <= 0x67u)
				return 0xFFFFFFFFi64;
			if (*v5 > 0x69u)
			{
			LABEL_42:
				++v7;
			}
			else
			{
				v19 = v5[1];
				if (v19 != v5[2])
					return 0xFFFFFFFFi64;
				v7 += v19;
				v5 += 3;
			}
			goto LABEL_43;
		case 0x6Fu:
			if (!a3)
				return 4294967293i64;
			v13 = *(_QWORD*)(a4 + 40) + 2i64 * v5[1];
			v14 = v13;
			do
			{
				v15 = *(unsigned __int16*)(v13 + 2);
				v12 = *(_WORD*)(v13 + 2 * v15) == 113;
				v13 += 2 * v15;
			} while (v12);
			if ((unsigned __int64)v5 > v14 && (unsigned __int64)v5 < v13)
				return 0xFFFFFFFFi64;
			result = sub_14090E350(v14 + 2, a2);
			if ((int)result < 0)
				return result;
			v7 += result;
		LABEL_6:
			a3 = v20;
			a4 = v21;
			v5 += 2;
		LABEL_43:
			v4 = *v5;
			v9 = *v5;
			if (v4 <= 0x9B)
				continue;
			return 4294967292i64;
		case 0x77u:
		case 0x78u:
		case 0x79u:
		case 0x7Au:
			do
			{
				v16 = v5[1];
				v12 = v5[v16] == 113;
				v5 += v16;
			} while (v12);
			v5 += byte_1409CFAA0[*v5];
			goto LABEL_43;
		case 0x7Bu:
		case 0x7Cu:
		case 0x7Du:
		case 0x7Fu:
		case 0x81u:
			result = sub_14090E350(&v5[v9 == 127], a2);
			if ((int)result < 0)
				return result;
			v7 += result;
			do
			{
				v11 = v5[1];
				v12 = v5[v11] == 113;
				v5 += v11;
			} while (v12);
			goto LABEL_6;
		case 0x8Fu:
		case 0x91u:
		case 0x93u:
		case 0x95u:
			v5 += byte_1409CFAA0[(unsigned __int16)v4] + v5[1];
			goto LABEL_43;
		default:
			return 4294967292i64;
		}
	}
}
// 1409CFAA0: using guessed type unsigned __int8 byte_1409CFAA0[93];

