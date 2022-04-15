#include "../winhttp.h"

//----- (00000001400FD1D0) ----------------------------------------------------
__int64 __fastcall sub_1400FD1D0(__int64 a1, __int64 a2)
{
	unsigned int v2; // ebx
	LONG v3; // edi
	__int64 v5[4]; // [rsp+20h] [rbp-49h] BYREF
	__int64 v6; // [rsp+40h] [rbp-29h] BYREF
	int pWVTData; // [rsp+50h] [rbp-19h] BYREF
	__int64 v8; // [rsp+58h] [rbp-11h]
	__int64 v9; // [rsp+60h] [rbp-9h]
	__int64 v10; // [rsp+68h] [rbp-1h]
	int v11; // [rsp+70h] [rbp+7h]
	__int64* v12; // [rsp+78h] [rbp+Fh]
	int v13; // [rsp+80h] [rbp+17h]
	__int64 v14; // [rsp+88h] [rbp+1Fh]
	__int64 v15; // [rsp+90h] [rbp+27h]
	int v16; // [rsp+9Ch] [rbp+33h]
	GUID pgActionID; // [rsp+A0h] [rbp+37h] BYREF

	v2 = 0;
	v5[1] = a2;
	v5[0] = 32i64;
	v5[2] = 0i64;
	v5[3] = 0i64;
	pgActionID.Data1 = 11191659;
	*(_DWORD*)&pgActionID.Data2 = 298896708;
	*(_DWORD*)pgActionID.Data4 = -1073692020;
	*(_DWORD*)&pgActionID.Data4[4] = -292175281;
	sub_1407E4830(&pWVTData, 0i64, 0x50ui64);
	pWVTData = 80;
	v8 = 0i64;
	v12 = v5;
	v9 = 0i64;
	v10 = 2i64;
	v11 = 1;
	v13 = 1;
	v14 = 0i64;
	v15 = 0i64;
	v16 = 0;
	v3 = WinVerifyTrust(0i64, &pgActionID, &pWVTData);
	if (v3)
	{
		v6 = 0x141D149C0i64;
		sub_1401A3130(15, 2, &v6);
	}
	v13 = 2;
	WinVerifyTrust(0i64, &pgActionID, &pWVTData);
	LOBYTE(v2) = v3 == 0;
	return v2;
}

