//----- (0000000140537710) ----------------------------------------------------
__int64 __fastcall sub_140537710(_QWORD* a1, __int64 a2, __int64 a3, float a4)
{
	__int64 result; // rax
	__int64 v6; // rbp
	_DWORD* v7; // rax
	_DWORD* v8; // rax
	int v9; // edi
	int v10; // ecx
	int v11; // esi
	BOOL v12; // eax
	_BOOL8 v13; // r15
	_DWORD* v14; // rax
	int v15; // ecx
	BOOL v16; // eax
	_BOOL8 v17; // r14
	_DWORD* v18; // rax
	int v19; // ecx
	__int64(__fastcall * **v20)(_QWORD); // rcx
	__m128* v21; // rax
	int v22[4]; // [rsp+50h] [rbp-68h] BYREF
	__int128 v23; // [rsp+60h] [rbp-58h] BYREF
	int v24[8]; // [rsp+70h] [rbp-48h] BYREF
	int v25; // [rsp+C8h] [rbp+10h] BYREF
	int v26; // [rsp+D0h] [rbp+18h] BYREF
	int v27; // [rsp+D4h] [rbp+1Ch]

	result = sub_14052E9B0(a1);
	v6 = result;
	if (result)
	{
		sub_14052B440(result, v22);
		v7 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 5)
		{
			v23 = *(_OWORD*)sub_140056AB0(a1, 2u);
		}
		else
		{
			sub_1400F0A10((__int64)a1, 2, (__int64)"x", (float*)&v23);
			sub_1400F0A10((__int64)a1, 2, (__int64)"y", (float*)&v23 + 1);
		}
		v8 = sub_1400580E0((__int64)a1, 3);
		v9 = 0;
		v10 = v8[2];
		v11 = 1;
		v12 = v10 && (v10 != 1 || *v8);
		v13 = v12;
		v14 = sub_1400580E0((__int64)a1, 4);
		v15 = v14[2];
		v16 = v15 && (v15 != 1 || *v14);
		v17 = v16;
		v18 = sub_1400580E0((__int64)a1, 5);
		v19 = v18[2];
		if (!v19 || v19 == 1 && !*v18)
			v11 = 0;
		v24[0] = 0;
		v24[1] = v22[0];
		v24[2] = v22[1];
		v24[3] = v22[2];
		v24[4] = v22[3];
		v20 = *(__int64(__fastcall****)(_QWORD))(v6 + 1152);
		v26 = (int)*(float*)&v23;
		v27 = (int)*((float*)&v23 + 1);
		v25 = (**v20)(v20);
		LOBYTE(v9) = v11 != 0;
		v21 = (__m128*)sub_140538120(v6 + 1376, &v25);
		return sub_140774BF0(v21, a1, (unsigned int*)&v26, a4, (__int64)v24, v13, v17, v9);
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

