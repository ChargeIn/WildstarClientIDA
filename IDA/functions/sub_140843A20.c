//----- (0000000140843A20) ----------------------------------------------------
char __fastcall sub_140843A20(char a1, __int64 a2, __int64 a3, __int64 a4)
{
	int v4; // eax
	unsigned int v5; // ecx
	__int64 v6; // rbx
	__int64 v7; // rsi
	int v8; // edi
	float v9; // xmm7_4
	float v10; // xmm6_4
	int v12; // [rsp+50h] [rbp+8h] BYREF

	v4 = --dword_140C61F80;
	if (a1)
	{
		v5 = dword_140C61F88 - v4;
		LOBYTE(v4) = word_140C10F48;
		if (v5 > (unsigned __int16)word_140C10F48)
		{
			v6 = qword_140C61F90;
			v7 = 0i64;
			v8 = 2;
			v9 = 101.0;
			if (qword_140C61F90)
			{
				do
				{
					v10 = *(float*)(v6 + 388);
					if (v10 <= v9 && (*(_BYTE*)(v6 + 382) & 1) == 0)
					{
						LOBYTE(v4) = *(_BYTE*)(v6 + 383);
						if ((v4 & 0x10) == 0 && (v4 & 0x40) == 0)
						{
							LOBYTE(v4) = sub_14085F1F0(v6, 0);
							if ((_BYTE)v4)
							{
								v4 = sub_14085EAC0(v6, &v12);
								if (v4)
								{
									v8 = v4;
									v7 = v6;
									v9 = v10;
								}
							}
						}
					}
					v6 = *(_QWORD*)(v6 + 24);
				} while (v6);
				if (v9 < 101.0 && v7 && v8 == 1)
					LOBYTE(v4) = sub_14085F2E0(v7, 1, a3, a4);
			}
		}
	}
	return v4;
}
// 140843B10: variable 'a3' is possibly undefined
// 140843B10: variable 'a4' is possibly undefined
// 140C10F48: using guessed type __int16 word_140C10F48;
// 140C61F80: using guessed type int dword_140C61F80;
// 140C61F88: using guessed type int dword_140C61F88;
// 140C61F90: using guessed type __int64 qword_140C61F90;

