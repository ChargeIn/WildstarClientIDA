//----- (00000001401223B0) ----------------------------------------------------
__int64 __fastcall sub_1401223B0(__int64 a1, int* a2)
{
	int v2; // eax
	int v4; // kr0C_4
	__int128* v5; // rdx
	__int64 v6; // rcx
	int v7; // eax
	__int128 v8; // xmm1
	int v9; // ecx
	__int64 result; // rax
	__int128 v11; // xmm0
	__int128 v12; // xmm0
	__int128 v13; // [rsp+0h] [rbp-98h]
	__int128 v14; // [rsp+10h] [rbp-88h] BYREF
	__int128 v15; // [rsp+20h] [rbp-78h]
	_OWORD v16[2]; // [rsp+30h] [rbp-68h]
	int v17; // [rsp+50h] [rbp-48h]
	int v18[5]; // [rsp+5Ch] [rbp-3Ch]
	int v19[4]; // [rsp+70h] [rbp-28h]

	v2 = *a2;
	v19[0] = 1056964608;
	v19[1] = 1056964608;
	v19[2] = 1056964608;
	v19[3] = 1056964608;
	v18[1] = v2 / -2;
	v18[2] = a2[1] / -2;
	v18[3] = *a2 / 2;
	v4 = a2[1];
	v5 = &v14;
	v17 = 0;
	v6 = 0i64;
	v18[4] = v4 / 2;
	do
	{
		v7 = v19[v6++];
		v5 = (__int128*)((char*)v5 + 8);
		*(_DWORD*)((char*)&v15 + v6 * 4 + 12) = v7;
		*(_DWORD*)((char*)v16 + v6 * 4 + 12) = v18[v6];
		*((_QWORD*)v5 - 1) = 0i64;
	} while (v6 < 4);
	v8 = v15;
	v9 = v17 | 0x300;
	result = a1;
	*(_OWORD*)a1 = v13;
	v11 = v14;
	*(_DWORD*)(a1 + 80) = v9;
	*(_OWORD*)(a1 + 16) = v11;
	v12 = v16[0];
	*(_OWORD*)(a1 + 32) = v8;
	*(_OWORD*)(a1 + 48) = v12;
	*(_OWORD*)(a1 + 64) = v16[1];
	return result;
}
// 140122478: variable 'v13' is possibly undefined

