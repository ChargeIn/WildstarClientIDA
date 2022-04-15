//----- (00000001405315D0) ----------------------------------------------------
__int64 __fastcall sub_1405315D0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64* v4; // rdi
	__int64* v5; // rax
	int v6; // ecx
	int v7; // eax
	int v8; // eax
	int v9; // eax
	unsigned __int32 v10; // xmm0_4
	bool v11; // zf
	__m128* v12; // rax
	__int64 v14; // [rsp+30h] [rbp-40h] BYREF
	int v15; // [rsp+38h] [rbp-38h]
	int v16; // [rsp+3Ch] [rbp-34h]
	__m128 v17; // [rsp+40h] [rbp-30h] BYREF
	int v18; // [rsp+50h] [rbp-20h] BYREF
	__int64 v19; // [rsp+54h] [rbp-1Ch]
	int v20; // [rsp+5Ch] [rbp-14h]
	int v21; // [rsp+60h] [rbp-10h]
	int v22; // [rsp+64h] [rbp-Ch]
	__int64 v23; // [rsp+98h] [rbp+28h] BYREF
	int v24; // [rsp+A0h] [rbp+30h] BYREF
	int v25; // [rsp+A4h] [rbp+34h]

	v2 = sub_14052E9B0(a1);
	v3 = v2;
	if (!v2 || !*(_QWORD*)(v2 + 1152))
		return 0i64;
	v4 = (__int64*)dword_140A12138;
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int64*)(a1[3] + 16i64);
	v6 = *((_DWORD*)v5 + 2);
	if (v6 == 3)
		goto LABEL_9;
	if (v6 == 4 && sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v23))
	{
		v15 = 3;
		v5 = &v14;
		v14 = v23;
	LABEL_9:
		v7 = (int)*(double*)v5;
		goto LABEL_10;
	}
	v7 = 0;
LABEL_10:
	v24 = v7;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (__int64*)(a1[3] + 32i64);
	v8 = *((_DWORD*)v4 + 2);
	if (v8 != 3)
	{
		if (v8 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v23))
		{
			v9 = 0;
			goto LABEL_17;
		}
		v15 = 3;
		v4 = &v14;
		v14 = v23;
	}
	v9 = (int)*(double*)v4;
LABEL_17:
	v25 = v9;
	v10 = sub_14052B130(v3).m128_u32[0];
	v11 = *(_QWORD*)(v3 + 1192) == 0i64;
	LODWORD(v23) = v10;
	if (!v11)
		sub_14052B1A0(v3, (int*)&v14, &v17, (float*)&v23);
	v18 = 0;
	v22 = 0;
	v19 = v14;
	v20 = v15;
	v21 = v16;
	LODWORD(v23) = (***(__int64(__fastcall****)(_QWORD))(v3 + 1152))(*(_QWORD*)(v3 + 1152));
	v12 = (__m128*)sub_140538120(v3 + 1376, (int*)&v23);
	sub_140775350(v12, (__int64)a1, (__int64)&v24, 0.0, (__int64)&v18);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

