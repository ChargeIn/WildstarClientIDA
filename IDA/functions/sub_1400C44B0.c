#include "../winhttp.h"

//----- (00000001400C44B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400C44B0(__int64 a1)
{
	int v1; // eax
	int v3; // ecx
	int v4; // r13d
	int v5; // r12d
	int v6; // eax
	int v7; // esi
	int v8; // eax
	int v9; // eax
	int v10; // eax
	int v11; // eax
	int v12; // eax
	int v13; // eax
	int v14; // edi
	int v15; // r14d
	int v16; // r15d
	int v17; // r8d
	int v18; // r8d
	int v19; // r12d
	int v20; // ecx
	int v21; // edi
	int v22; // r9d
	int v23; // eax
	int* v24; // rcx
	int v25; // r13d
	int v26; // edx
	unsigned __int64 result; // rax
	int v28; // [rsp+20h] [rbp-28h] BYREF
	int v29; // [rsp+24h] [rbp-24h]
	int v30; // [rsp+28h] [rbp-20h]
	int v31; // [rsp+2Ch] [rbp-1Ch]
	int v32[2]; // [rsp+30h] [rbp-18h] BYREF
	int v33; // [rsp+38h] [rbp-10h]
	int v34; // [rsp+3Ch] [rbp-Ch]
	int v35; // [rsp+90h] [rbp+48h] BYREF
	int v36; // [rsp+98h] [rbp+50h] BYREF
	int v37; // [rsp+A0h] [rbp+58h]
	int v38; // [rsp+A8h] [rbp+60h]

	v1 = *(_DWORD*)(a1 + 1312);
	v3 = *(_DWORD*)(a1 + 1316);
	v4 = *(_DWORD*)(a1 + 1320);
	v5 = *(_DWORD*)(a1 + 1324);
	*(_DWORD*)(a1 + 1344) = v1;
	v38 = v1;
	v32[0] = v1;
	v28 = v1;
	v6 = *(_DWORD*)(a1 + 1316);
	v7 = 0;
	v37 = v3;
	*(_DWORD*)(a1 + 1348) = v6;
	v8 = *(_DWORD*)(a1 + 1320);
	v32[1] = v3;
	*(_DWORD*)(a1 + 1352) = v8;
	v9 = *(_DWORD*)(a1 + 1324);
	v33 = v4;
	*(_DWORD*)(a1 + 1356) = v9;
	v10 = *(_DWORD*)(a1 + 1312);
	v34 = v5;
	*(_DWORD*)(a1 + 1360) = v10;
	v11 = *(_DWORD*)(a1 + 1316);
	v29 = v3;
	*(_DWORD*)(a1 + 1364) = v11;
	v12 = *(_DWORD*)(a1 + 1320);
	v30 = v4;
	*(_DWORD*)(a1 + 1368) = v12;
	v13 = *(_DWORD*)(a1 + 1324);
	v31 = v5;
	*(_DWORD*)(a1 + 1372) = v13;
	*(_DWORD*)(a1 + 1376) = *(_DWORD*)(a1 + 1312);
	*(_DWORD*)(a1 + 1380) = *(_DWORD*)(a1 + 1316);
	*(_DWORD*)(a1 + 1384) = *(_DWORD*)(a1 + 1320);
	*(_DWORD*)(a1 + 1388) = *(_DWORD*)(a1 + 1324);
	if ((*(_BYTE*)(a1 + 1392) & 1) != 0)
	{
		v14 = v5 - v3;
		v15 = sub_1400C3930((_QWORD**)a1, &v35)[1];
		v16 = sub_1400C3930((_QWORD**)(a1 + 416), &v35)[1];
		v17 = sub_1400C3930((_QWORD**)(a1 + 832), &v35)[1];
	}
	else
	{
		v14 = v4 - *(_DWORD*)(a1 + 1312);
		v15 = *sub_1400C3930((_QWORD**)a1, &v35);
		v16 = *sub_1400C3930((_QWORD**)(a1 + 416), &v35);
		v17 = *sub_1400C3930((_QWORD**)(a1 + 832), &v35);
	}
	v35 = v17;
	if (v16 + v15 > v14)
	{
		v16 = 0;
		v15 = 0;
	LABEL_6:
		v18 = 0;
		goto LABEL_7;
	}
	v21 = v14 - v16 - v15;
	if (v21 <= v17)
		goto LABEL_6;
	v22 = *(_DWORD*)(a1 + 1296);
	if (v22 <= 0)
		goto LABEL_6;
	v23 = *(_DWORD*)(a1 + 1304);
	if (!(v23 + v22))
		goto LABEL_6;
	v24 = &v36;
	v36 = v21 * v23 / (v23 + v22);
	if (v17 >= v36)
		v24 = &v35;
	v18 = *v24;
	v7 = *(_DWORD*)(a1 + 1300) * (v21 - *v24) / v22;
LABEL_7:
	if ((*(_BYTE*)(a1 + 1392) & 1) != 0)
	{
		v19 = v5 - v16;
		v20 = v15 + v37 + v7;
		v34 = v15 + v37;
		*(_DWORD*)(a1 + 1348) = v15 + v37;
		*(_DWORD*)(a1 + 1372) = v19;
		v29 = v19;
		*(_DWORD*)(a1 + 1356) = v20;
		*(_DWORD*)(a1 + 1380) = v20;
		*(_DWORD*)(a1 + 1388) = v20 + v18;
		*(_DWORD*)(a1 + 1364) = v20 + v18;
	}
	else
	{
		v25 = v4 - v16;
		v26 = v15 + v38 + v7;
		v33 = v15 + v38;
		*(_DWORD*)(a1 + 1344) = v15 + v38;
		*(_DWORD*)(a1 + 1368) = v25;
		v28 = v25;
		*(_DWORD*)(a1 + 1352) = v26;
		*(_DWORD*)(a1 + 1376) = v26;
		*(_DWORD*)(a1 + 1384) = v26 + v18;
		*(_DWORD*)(a1 + 1360) = v26 + v18;
	}
	sub_1400C3AD0(a1 + 416, &v28);
	result = sub_1400C3AD0(a1, v32);
	*(_BYTE*)(a1 + 1392) &= ~0x10u;
	return result;
}

