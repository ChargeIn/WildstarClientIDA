//----- (0000000140503CA0) ----------------------------------------------------
void __fastcall sub_140503CA0(__int64 a1, unsigned __int64 a2, unsigned __int64* a3)
{
	unsigned __int64 v3; // r11
	__int64 v4; // rax
	__int64 v5; // r9
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // rt2
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // rt2
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rax
	_DWORD* v16; // rcx
	int v17; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int64 v19; // [rsp+28h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+30h] [rbp-30h]
	__int64 v21[4]; // [rsp+40h] [rbp-20h] BYREF
	__int64 v22; // [rsp+70h] [rbp+10h] BYREF

	v3 = a2;
	if (*(_BYTE*)(a1 + 40))
	{
		v4 = a1 + 80;
		if (*(_DWORD*)(a1 + 80) == 1)
		{
			v5 = 1i64;
			while (!*(_BYTE*)(v4 + 48) || *(_DWORD*)(v4 + 88) > *(_DWORD*)v4)
			{
				++v5;
				v4 += 88i64;
				if (v5 >= 4)
				{
					if (*(_BYTE*)(a1 + 304))
					{
						v6 = *(int*)(a1 + 344);
						if ((int)v6 > 0)
						{
							v3 = a2 % v6;
							a3[3] = a2 / v6;
						}
					}
					if (*(_BYTE*)(a1 + 216))
					{
						v7 = *(int*)(a1 + 256);
						if ((int)v7 > 0)
						{
							v9 = v3 % v7;
							v8 = v3 / v7;
							v3 = v9;
							a3[2] = v8;
						}
					}
					if (*(_BYTE*)(a1 + 128))
					{
						v10 = *(int*)(a1 + 168);
						if ((int)v10 > 0)
						{
							v12 = v3 % v10;
							v11 = v3 / v10;
							v3 = v12;
							a3[1] = v11;
						}
					}
					if (*(_BYTE*)(a1 + 40) && *(int*)(a1 + 80) > 0)
					{
						v13 = *(int*)(a1 + 80);
						v14 = v3 / v13;
						v3 %= v13;
						*a3 = v14;
					}
					if (v3)
					{
						v19 = 0i64;
						TlsValue = &off_140B5E648;
						lpTlsValue = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, &TlsValue);
						v15 = 0x141E0A520i64;
						v16 = &unk_140C8AD60;
						goto LABEL_22;
					}
					return;
				}
			}
		}
	}
	v19 = 0i64;
	TlsValue = &off_140B5E648;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v15 = 0x141E0A540i64;
	v16 = &unk_140C8AD64;
LABEL_22:
	v22 = v15;
	v21[0] = (__int64)TlsValue;
	v21[1] = v19;
	v21[2] = (__int64)lpTlsValue;
	v17 = sub_140196F30(v16, 13, &v22, v21, TlsValue);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v17)
		DebugBreak();
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

