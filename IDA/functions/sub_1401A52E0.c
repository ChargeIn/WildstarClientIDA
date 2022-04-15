//----- (00000001401A52E0) ----------------------------------------------------
char __fastcall sub_1401A52E0(wchar_t* a1, bool* a2)
{
	int v3; // edi
	wchar_t* v4; // rbx
	const wchar_t* v6; // rcx
	wchar_t* v7; // rax
	int v8; // edx
	bool v9; // zf
	const wchar_t* v10; // rax
	bool v11; // zf
	int v12; // [rsp+40h] [rbp+18h] BYREF

	v3 = 0;
	v4 = a1;
	v12 = 0;
	if ((unsigned int)sub_1407DF428(a1, (__int64)L"%d", &v12) == 1)
	{
		*a2 = v12 != 0;
		return 1;
	}
	else
	{
		v6 = L"true";
		v7 = v4;
		if (v4 == L"true")
			goto LABEL_25;
		v8 = 0;
		if (*v4)
		{
			do
			{
				if (!*v6 || *v7 != *v6)
					break;
				v9 = v8 == 0x7FFFFFFF;
				if (v8 == 0x7FFFFFFF)
					goto LABEL_10;
				++v7;
				++v6;
				++v8;
			} while (*v7);
			v9 = v8 == 0x7FFFFFFF;
		LABEL_10:
			if (v9)
				goto LABEL_25;
		}
		if (!*v7 && !*v6)
		{
		LABEL_25:
			*a2 = 1;
			return 1;
		}
		else
		{
			v10 = L"false";
			if (v4 == L"false")
				goto LABEL_24;
			if (*v4)
			{
				do
				{
					if (!*v10 || *v4 != *v10)
						break;
					v11 = v3 == 0x7FFFFFFF;
					if (v3 == 0x7FFFFFFF)
						goto LABEL_20;
					++v4;
					++v10;
					++v3;
				} while (*v4);
				v11 = v3 == 0x7FFFFFFF;
			LABEL_20:
				if (v11)
					goto LABEL_24;
			}
			if (!*v4 && !*v10)
			{
			LABEL_24:
				*a2 = 0;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A45270: using guessed type wchar_t aTrue_2[5];
// 140A452B8: using guessed type wchar_t aFalse_2[6];

