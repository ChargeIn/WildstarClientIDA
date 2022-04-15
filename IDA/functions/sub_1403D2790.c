//----- (00000001403D2790) ----------------------------------------------------
int* __fastcall sub_1403D2790(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	int* v4; // rax
	_BYTE v6[40]; // [rsp+20h] [rbp-49h]
	__int128 v7; // [rsp+48h] [rbp-21h]
	_QWORD v8[2]; // [rsp+68h] [rbp-1h] BYREF
	__int128 v9; // [rsp+78h] [rbp+Fh]
	__int128 v10; // [rsp+88h] [rbp+1Fh]
	__int128 v11; // [rsp+98h] [rbp+2Fh]
	__int64 v12; // [rsp+A8h] [rbp+3Fh]
	__int64 v13; // [rsp+B0h] [rbp+47h]
	int* v14; // [rsp+D0h] [rbp+67h] BYREF
	int* v15; // [rsp+E0h] [rbp+77h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = (int*)v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < *a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == (int*)v2 || *a2 < (unsigned int)v4[8])
	{
		*(_OWORD*)&v6[4] = 4ui64;
		LODWORD(v8[0]) = *a2;
		*(_DWORD*)v6 = 0;
		*(_QWORD*)((char*)&v7 + 4) = 0i64;
		*(_DWORD*)&v6[36] = 0;
		v8[1] = *(_QWORD*)v6;
		*(_QWORD*)&v6[20] = 1i64;
		v9 = *(_OWORD*)&v6[8];
		*(_QWORD*)&v6[28] = 1i64;
		v12 = 0i64;
		v10 = *(_OWORD*)&v6[24];
		v13 = 0i64;
		v11 = v7;
		v14 = v4;
		sub_1403D5050(a1, &v15, (__int64*)&v14, v8);
		v4 = v15;
	}
	return v4 + 10;
}
// 1403D2844: variable 'v7' is possibly undefined

