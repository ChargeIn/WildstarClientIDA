//----- (000000014092ED20) ----------------------------------------------------
char* __fastcall sub_14092ED20(__int64 a1, _WORD* a2, __int64 a3, int a4)
{
	__int64 v5; // rcx
	__int64 v6; // rcx
	BOOL v7; // r8d
	char* v8; // r11
	char v10; // al
	__int64 v11; // r11
	char v12; // al
	__int64 v13; // r11

	if ((*(_BYTE*)(a1 + 16) & 1) != 0)
		v5 = a3 + *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64);
	else
		v5 = *(_QWORD*)(a1 + 24);
	v6 = v5 - *(_QWORD*)(a1 + 8);
	v7 = (unsigned __int64)(v6 + 126) <= 0xFF;
	if ((unsigned __int64)(v6 + 0x7FFFFFFF) <= 0xFFFFFFFF)
	{
		if (a4 == 22)
		{
			v8 = (char*)a2 + 1;
			if ((unsigned __int64)(v6 + 126) > 0xFF)
				*(_BYTE*)a2 = -23;
			else
				*(_BYTE*)a2 = -21;
		}
		else
		{
			if (a4 >= 23)
			{
				*(_BYTE*)a2 = -24;
				++* (_QWORD*)(a1 + 8);
				*(_QWORD*)(a1 + 16) |= 8ui64;
				return (char*)a2 + 5;
			}
			if ((unsigned __int64)(v6 + 126) > 0xFF)
			{
				*(_BYTE*)a2 = 15;
				v12 = sub_14092F340(a4);
				v8 = (char*)(v13 + 2);
				*(v8 - 1) = v12;
				*(_QWORD*)(a1 + 8) += 2i64;
			LABEL_16:
				*(_QWORD*)(a1 + 16) |= 8ui64;
				return v8 + 4;
			}
			v10 = sub_14092F340(a4);
			v8 = (char*)(v11 + 1);
			*(v8 - 1) = v10 - 16;
		}
		++* (_QWORD*)(a1 + 8);
		if (v7)
		{
			*(_QWORD*)(a1 + 16) |= 4ui64;
			return v8 + 1;
		}
		goto LABEL_16;
	}
	return sub_14092ECA0((_QWORD*)a1, a2, a4);
}
// 14092EDB6: variable 'v11' is possibly undefined
// 14092EDC4: variable 'v7' is possibly undefined
// 14092EDDF: variable 'v13' is possibly undefined

