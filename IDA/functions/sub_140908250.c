//----- (0000000140908250) ----------------------------------------------------
unsigned __int16* __fastcall sub_140908250(unsigned __int64 a1, __int16 a2, int a3, __int64 a4, unsigned __int64 a5)
{
	unsigned __int16* result; // rax
	unsigned __int16 v9; // r10
	unsigned __int16 v10; // cx
	unsigned __int64 v11; // r10
	_WORD* v12; // r8
	__int64 v13; // r9
	__int64 v14; // r8

	for (result = (unsigned __int16*)a1; ; result += 2)
	{
		v9 = *result;
		if (!*result)
			break;
		while (v9 != 111)
		{
			if (v9 == 108)
			{
				result += result[1];
			}
			else
			{
				switch (v9)
				{
				case 0x55u:
				case 0x56u:
				case 0x57u:
				case 0x58u:
				case 0x59u:
				case 0x5Au:
				case 0x5Eu:
				case 0x5Fu:
				case 0x60u:
					v10 = result[1];
					goto LABEL_8;
				case 0x5Bu:
				case 0x5Cu:
				case 0x5Du:
				case 0x61u:
					v10 = result[2];
				LABEL_8:
					if ((unsigned __int16)(v10 - 15) <= 1u)
						result += 2;
					break;
				case 0x8Fu:
				case 0x91u:
				case 0x93u:
				case 0x95u:
					result += result[1];
					break;
				default:
					break;
				}
				result += byte_1409CFAA0[v9];
				if (a3 && (unsigned int)v9 - 29 <= 0x37 && (*(result - 1) & 0xFC00) == 0xD800)
					++result;
			}
			v9 = *result;
			if (!*result)
				return result;
		}
		v11 = *(_QWORD*)(a4 + 72);
		v12 = (_WORD*)a5;
		if (a5 < v11)
		{
			while (1)
			{
				v13 = (unsigned __int16)*v12;
				if ((unsigned __int16*)(*(_QWORD*)(a4 + 40) + 2 * v13) == result + 1)
					break;
				if ((unsigned __int64)++v12 >= v11)
					goto LABEL_23;
			}
			*v12 = v13 + a2;
		}
	LABEL_23:
		if ((unsigned __int64)v12 >= *(_QWORD*)(a4 + 72))
		{
			v14 = result[1];
			if (*(_QWORD*)(a4 + 40) + 2 * v14 >= a1)
				result[1] = v14 + a2;
		}
	}
	return result;
}
// 1409CFAA0: using guessed type unsigned __int8 byte_1409CFAA0[93];

