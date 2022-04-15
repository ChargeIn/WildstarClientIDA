//----- (0000000140886AC0) ----------------------------------------------------
__int64 __fastcall sub_140886AC0(__int64 a1, _BYTE* a2, float a3)
{
	unsigned int v5; // edi
	__int64 v6; // rax
	__int64 v8; // rsi
	__int64 v9; // r9
	__int64 v10; // r8
	__int64 v11; // rdx
	bool v12; // zf
	char v13; // al
	__int64* v14; // rcx
	__int64 v15; // r9
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // [rsp+30h] [rbp-28h] BYREF
	__int64 v19; // [rsp+38h] [rbp-20h] BYREF
	float v20; // [rsp+78h] [rbp+20h] BYREF
	char v21; // [rsp+7Ch] [rbp+24h]

	v5 = sub_140884180((__int64)a2);
	v6 = *(_QWORD*)a2;
	if (v5 != 1)
		return (*(__int64(__fastcall**)(_BYTE*, _QWORD, __int64))(v6 + 40))(a2, 0i64, 2i64);
	v8 = (*(__int64(__fastcall**)(_BYTE*, __int64*, __int64*, _QWORD))(v6 + 32))(a2, &v18, &v19, 0i64);
	if (v8)
	{
		v12 = v19 == 0;
		if (v19)
		{
			v12 = (a2[117] & 2) == 0;
			v13 = a2[116];
			v14 = *(__int64**)(a1 + 256);
			v20 = a3;
			v21 = v13;
			v15 = *(_QWORD*)(v19 + 16);
			v16 = *v14;
			if (v12)
				v17 = (*(__int64(__fastcall**)(__int64*, __int64, float*, __int64, __int64))(v16 + 40))(
					v14,
					v18,
					&v20,
					v15,
					v19);
			else
				v17 = (*(__int64(__fastcall**)(__int64*, __int64, float*, __int64, __int64))(v16 + 48))(
					v14,
					v18,
					&v20,
					v15,
					v19);
			v5 = v17;
			sub_140886E00(a1, v8, v17);
			v12 = v19 == 0;
		}
		LOBYTE(v9) = !v12;
		v10 = v5;
		v11 = v8;
	}
	else
	{
		v9 = 0i64;
		v10 = 53i64;
		v11 = 0i64;
	}
	return (*(__int64(__fastcall**)(_BYTE*, __int64, __int64, __int64))(*(_QWORD*)a2 + 40i64))(a2, v11, v10, v9);
}
// 140886B93: variable 'v9' is possibly undefined

