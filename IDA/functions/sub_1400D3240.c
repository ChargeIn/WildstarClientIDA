//----- (00000001400D3240) ----------------------------------------------------
void __fastcall sub_1400D3240(__int64 a1, unsigned __int16* a2, unsigned int* a3)
{
	int v3; // ebx
	__int64 v4; // r11
	int v8; // edx
	int v9; // eax
	__int64 v10; // r8
	int v11; // edx
	int v12; // eax
	__int64 v13; // r8
	int v14; // edx
	int v15; // eax
	int v16; // ebx
	_QWORD* v17; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v19; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v20)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v21; // [rsp+48h] [rbp-20h]
	__int64 v22; // [rsp+78h] [rbp+10h] BYREF

	if (a2)
	{
		v3 = *a2;
		v4 = 0i64;
		if (v3 == 66)
		{
			LOWORD(v8) = 66;
			while ((_WORD)v8)
			{
				v8 = a2[v4 + 1];
				v9 = (unsigned __int16)word_140A31B3A[v4++];
				if (v8 != v9)
					goto LABEL_6;
			}
			sub_1400C34A0(a1, a3);
		}
		else
		{
		LABEL_6:
			v10 = 0i64;
			if (v3 == 84)
			{
				LOWORD(v11) = 84;
				while ((_WORD)v11)
				{
					v11 = a2[v10 + 1];
					v12 = (unsigned __int16)word_140A31ABA[v10++];
					if (v11 != v12)
						goto LABEL_10;
				}
				sub_1400C3510(a1, a3);
			}
			else
			{
			LABEL_10:
				v13 = 0i64;
				if (v3 == 84)
				{
					LOWORD(v14) = 84;
					while ((_WORD)v14)
					{
						v14 = a2[v13 + 1];
						v15 = (unsigned __int16)word_140A31B4A[v13++];
						if (v14 != v15)
							goto LABEL_14;
					}
					v17 = sub_140142E30(qword_140C63678, &v20, a3);
					sub_1400CCAA0(a1, (int*)v17[1]);
					if ((_QWORD)v21)
						sub_14018B900(v21, 0);
				}
				else
				{
				LABEL_14:
					*(_QWORD*)&v19 = 0i64;
					TlsValue = &off_140B5E648;
					*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v20 = TlsValue;
					v22 = 0x141D0FBE0i64;
					v21 = v19;
					v16 = sub_1401971E0(&dword_140C8A074, 13, &v22, &v20);
					TlsValue = &off_140B5E648;
					TlsSetValue(dwTlsIndex, *((LPVOID*)&v19 + 1));
					if (v16)
						DebugBreak();
				}
			}
		}
	}
}
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31ABA: using guessed type __int16 word_140A31ABA[];
// 140A31B38: using guessed type __int16 word_140A31B38;
// 140A31B3A: using guessed type __int16 word_140A31B3A[];
// 140A31B48: using guessed type __int16 word_140A31B48;
// 140A31B4A: using guessed type __int16 word_140A31B4A[];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C8A074: using guessed type _DWORD dword_140C8A074;

