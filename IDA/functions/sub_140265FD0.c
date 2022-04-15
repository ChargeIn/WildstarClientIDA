//----- (0000000140265FD0) ----------------------------------------------------
__int64 __fastcall sub_140265FD0(_WORD* a1, __int64 a2, char* a3, unsigned __int64 a4, _QWORD* a5, _QWORD* a6)
{
	__int64 v7; // r10
	int v8; // ecx
	int v10; // r8d
	__int64 result; // rax
	__int64 v12; // rbx
	_WORD* v13; // rcx
	signed __int64 v14; // rdi
	__int64 v15; // r9
	__int16 v16; // ax

	v7 = a2;
	v8 = 0;
	if ((unsigned __int64)(a2 - 1) > 0x7FFFFFFE)
		v8 = -2147024809;
	if (v8 >= 0)
	{
		v10 = 0;
		if (a4 >= 0x7FFFFFFF)
			v10 = -2147024809;
		if (v10 < 0)
		{
			if (a2)
				*a1 = 0;
		}
		else
		{
			if (a2)
			{
				v12 = a4 - a2;
				v13 = a1;
				v14 = a3 - (char*)a1;
				v10 = 0;
				v15 = 0i64;
				while (v12 + a2)
				{
					v16 = *(_WORD*)((char*)v13 + v14);
					if (!v16)
						break;
					*v13++ = v16;
					++v15;
					if (!--a2)
					{
						--v13;
						v10 = -2147024774;
						--v15;
						break;
					}
				}
				v7 -= v15;
				*v13 = 0;
				a1 += v15;
				if (v10 >= 0)
					goto LABEL_24;
			LABEL_23:
				if (v10 != -2147024774)
					return (unsigned int)v10;
			LABEL_24:
				if (a5)
					*a5 = a1;
				if (a6)
					*a6 = v7;
				return (unsigned int)v10;
			}
			if (a4 && *(_WORD*)a3)
			{
				if (!a1)
					return 2147942487i64;
				v10 = -2147024774;
				goto LABEL_24;
			}
		}
		if (v10 >= 0)
			goto LABEL_24;
		goto LABEL_23;
	}
	result = (unsigned int)v8;
	if (a2)
		*a1 = 0;
	return result;
}
// 140266096: conditional instruction was optimized away because rdx.8!=0

