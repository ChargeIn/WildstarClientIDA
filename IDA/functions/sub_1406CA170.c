//----- (00000001406CA170) ----------------------------------------------------
__int64 __fastcall sub_1406CA170(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rdx
	void(__fastcall * **v7)(_QWORD, __int64); // rax
	__int64 v8; // rdx
	void(__fastcall * **v9)(_QWORD, __int64); // rsi
	__int64 v10; // rbx
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // r8
	__int64* v16; // rdx
	__int64 v17; // rdx
	_DWORD* v18; // rax
	__int64* v19; // rax
	int v20; // [rsp+38h] [rbp+10h] BYREF

	result = sub_1406CA0C0(a1);
	v3 = result;
	if (result)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2];
		v5 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		a1[2] += 16i64;
		sub_1400F0090((__int64)a1, v6, (unsigned __int64*)"strType", *(unsigned __int16**)(v3 + 1472));
		v7 = sub_1406C5440(v3);
		v9 = v7;
		if (v7)
		{
			v10 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v7)[15])(v7);
			sub_1400F0090((__int64)a1, v11, (unsigned __int64*)"strText", *(unsigned __int16**)(v10 + 40));
			sub_1400F0090((__int64)a1, v12, (unsigned __int64*)"strIcon", *(unsigned __int16**)(v10 + 8));
			sub_1400EFEB0((__int64)a1, v13, (unsigned __int64*)"bReady", *(_DWORD*)(v10 + 172) == 0);
			sub_140058710((__int64)a1, (unsigned __int64*)"spell", 5ui64);
			v14 = ((__int64(__fastcall*)(_QWORD, _QWORD))(*v9)[16])(v9, 0i64);
			if (v14)
			{
				v20 = **(_DWORD**)(v14 + 112);
				sub_1403D3470(a1, &v20);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			v15 = a1[2];
			v16 = (__int64*)(v15 - 48);
		}
		else
		{
			sub_1400F0090((__int64)a1, v8, (unsigned __int64*)"strText", word_1409F7814);
			sub_1400F0090((__int64)a1, v17, (unsigned __int64*)"strIcon", word_1409F77DC);
			sub_140058710((__int64)a1, (unsigned __int64*)"bReady", 6ui64);
			v18 = (_DWORD*)a1[2];
			*v18 = 0;
			v18[2] = 1;
			a1[2] += 16i64;
			v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
			v15 = a1[2];
			v16 = v19;
		}
		sub_14005EA50((__int64)a1, v16, (int*)(v15 - 32), (unsigned int*)(v15 - 16));
		a1[2] -= 32i64;
		return 1i64;
	}
	return result;
}
// 1406CA1E1: variable 'v6' is possibly undefined
// 1406CA214: variable 'v11' is possibly undefined
// 1406CA227: variable 'v12' is possibly undefined
// 1406CA244: variable 'v13' is possibly undefined
// 1406CA2C0: variable 'v8' is possibly undefined
// 1406CA2D6: variable 'v17' is possibly undefined
// 1409F77DC: using guessed type unsigned __int16 word_1409F77DC[2];
// 1409F7814: using guessed type unsigned __int16 word_1409F7814[2];

