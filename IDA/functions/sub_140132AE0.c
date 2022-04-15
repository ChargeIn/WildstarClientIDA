//----- (0000000140132AE0) ----------------------------------------------------
unsigned __int16* __fastcall sub_140132AE0(__int64 a1)
{
	unsigned __int16* result; // rax
	unsigned __int16* v2; // rbx
	int v3; // edi
	unsigned int v4; // r10d
	wchar_t** i; // r11
	__int64 v6; // r8
	int v7; // eax
	int v8; // ecx

	result = (unsigned __int16*)sub_1401A6B80(a1, L"ButtonType");
	if (result)
	{
		result = (unsigned __int16*)sub_1401A4F40((__int64)(result + 16));
		v2 = result;
		if (result)
		{
			v3 = *result;
			v4 = 0;
			for (i = off_140A31640; ; ++i)
			{
				v6 = 0i64;
				if (v3 == **i)
					break;
			LABEL_8:
				if ((int)++v4 >= 3)
					return 0i64;
			}
			LOWORD(v7) = v3;
			while ((_WORD)v7)
			{
				v7 = v2[v6 + 1];
				v8 = (*i)[++v6];
				if (v7 != v8)
					goto LABEL_8;
			}
			return (unsigned __int16*)v4;
		}
	}
	return result;
}
// 140A31640: using guessed type wchar_t *off_140A31640[28];
// 140A326C0: using guessed type wchar_t aButtontype[11];

