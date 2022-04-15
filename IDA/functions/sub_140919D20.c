//----- (0000000140919D20) ----------------------------------------------------
__int64 __fastcall sub_140919D20(int* a1, __int64 a2, int a3, _DWORD* a4)
{
	__int64 v4; // r10
	__int64 v8; // rdi
	int v9; // ecx
	__int64 result; // rax
	unsigned int v11; // edx
	_QWORD* v12; // rcx
	int v13; // edx

	v4 = 0i64;
	v8 = 0i64;
	if (!a1 || !a4)
		return 4294967294i64;
	if (a2 && (*(_BYTE*)a2 & 1) != 0)
		v8 = *(_QWORD*)(a2 + 8);
	v9 = *a1;
	if (v9 == 1346589253)
	{
		v11 = *((unsigned __int16*)a1 + 6);
		if ((v11 & 2) != 0)
		{
			switch (a3)
			{
			case 0:
				*a4 = a1[2] & 0x27FC7A7F;
				result = 0i64;
				break;
			case 1:
				*(_QWORD*)a4 = (unsigned int)a1[1];
				result = 0i64;
				break;
			case 2:
				*a4 = *((unsigned __int16*)a1 + 8);
				result = 0i64;
				break;
			case 3:
				*a4 = *((unsigned __int16*)a1 + 9);
				result = 0i64;
				break;
			case 4:
				if ((v11 & 0x10) != 0)
					*a4 = *((unsigned __int16*)a1 + 10);
				else
					*a4 = BYTE1(v11) | 0xFFFFFFFE;
				result = 0i64;
				break;
			case 5:
				if (v8 && (*(_BYTE*)(v8 + 4) & 1) != 0)
					v4 = *(_QWORD*)(a2 + 8) + 8i64;
				*(_QWORD*)a4 = v4;
				result = 0i64;
				break;
			case 6:
				if ((v11 & 0x40) == 0)
					goto LABEL_42;
				*a4 = *((unsigned __int16*)a1 + 11);
				result = 0i64;
				break;
			case 7:
				*a4 = *((unsigned __int16*)a1 + 13);
				result = 0i64;
				break;
			case 8:
				*a4 = *((unsigned __int16*)a1 + 14);
				result = 0i64;
				break;
			case 9:
				result = 0i64;
				*(_QWORD*)a4 = (char*)a1 + 2 * *((unsigned __int16*)a1 + 12);
				break;
			case 10:
				if (v8)
					LODWORD(v4) = *(_DWORD*)v8;
				*(_QWORD*)a4 = (unsigned int)v4;
				result = 0i64;
				break;
			case 11:
				*(_QWORD*)a4 = &unk_1409CFCA0;
				result = 0i64;
				break;
			case 12:
				result = 0i64;
				*a4 = (v11 & 0x200) == 0;
				break;
			case 13:
				result = 0i64;
				*a4 = (v11 >> 10) & 1;
				break;
			case 14:
				result = 0i64;
				*a4 = (v11 >> 11) & 1;
				break;
			case 15:
				if (v8 && (*(_BYTE*)(v8 + 4) & 2) != 0)
				{
					*a4 = *(_DWORD*)(v8 + 40);
					result = 0i64;
				}
				else
				{
				LABEL_42:
					*a4 = -1;
					result = 0i64;
				}
				break;
			case 16:
				if (!a2 || (*(_BYTE*)a2 & 0x40) == 0 || (v13 = 1, !*(_QWORD*)(a2 + 56)))
					v13 = 0;
				*a4 = v13;
				result = 0i64;
				break;
			case 17:
				if (a2)
				{
					if ((*(_BYTE*)a2 & 0x40) != 0)
					{
						v12 = *(_QWORD**)(a2 + 56);
						if (v12)
							LODWORD(v4) = sub_14091B480(v12);
					}
				}
				*(_QWORD*)a4 = (int)v4;
				result = 0i64;
				break;
			case 18:
				*a4 = *((unsigned __int16*)a1 + 7);
				result = 0i64;
				break;
			case 19:
				if ((v11 & 0x10) != 0)
					LODWORD(v4) = *((unsigned __int16*)a1 + 10);
				*a4 = v4;
				result = 0i64;
				break;
			case 20:
				result = 0i64;
				if ((v11 & 0x10) != 0)
					*a4 = 1;
				else
					*a4 = (v11 >> 7) & 2;
				break;
			case 21:
				if ((v11 & 0x40) != 0)
					LODWORD(v4) = *((unsigned __int16*)a1 + 11);
				*a4 = v4;
				result = 0i64;
				break;
			case 22:
				result = 0i64;
				*a4 = (v11 >> 6) & 1;
				break;
			default:
				result = 4294967293i64;
				break;
			}
		}
		else
		{
			return 4294967268i64;
		}
	}
	else
	{
		result = 4294967292i64;
		if (v9 == 1163019088)
			return 4294967267i64;
	}
	return result;
}

