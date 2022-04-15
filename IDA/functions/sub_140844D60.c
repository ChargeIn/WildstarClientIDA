//----- (0000000140844D60) ----------------------------------------------------
__int64 __fastcall sub_140844D60(float a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rbx
	__int64 v5; // rsi
	int v6; // edi
	float i; // xmm7_4
	float v8; // xmm6_4
	char v9; // al
	int v10; // eax
	unsigned int v11; // ebx
	int v13; // [rsp+68h] [rbp+10h] BYREF

	if (dword_140C61F88 - dword_140C61F80 + 1 <= (unsigned int)(unsigned __int16)word_140C10F48)
		return 1i64;
	v4 = qword_140C61F90;
	v5 = 0i64;
	v6 = 2;
	for (i = 101.0; v4; v4 = *(_QWORD*)(v4 + 24))
	{
		v8 = *(float*)(v4 + 388);
		if (v8 <= i && (*(_BYTE*)(v4 + 382) & 1) == 0)
		{
			v9 = *(_BYTE*)(v4 + 383);
			if ((v9 & 0x10) == 0 && (v9 & 0x40) == 0)
			{
				if (sub_14085F1F0(v4, 0))
				{
					v10 = sub_14085EAC0(v4, &v13);
					if (v10)
					{
						v6 = v10;
						v5 = v4;
						i = v8;
					}
				}
			}
		}
	}
	if (a1 > i && v5)
	{
		v11 = 1;
		if (v6 == 1)
			sub_14085F2E0(v5, 1, a3, a4);
	}
	else
	{
		return 80;
	}
	return v11;
}
// 140844E3E: variable 'a3' is possibly undefined
// 140844E3E: variable 'a4' is possibly undefined
// 140C10F48: using guessed type __int16 word_140C10F48;
// 140C61F80: using guessed type int dword_140C61F80;
// 140C61F88: using guessed type int dword_140C61F88;
// 140C61F90: using guessed type __int64 qword_140C61F90;

