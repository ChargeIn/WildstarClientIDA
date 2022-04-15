//----- (00000001406E52A0) ----------------------------------------------------
void __fastcall sub_1406E52A0(__int64 a1, int a2, void(__fastcall*** a3)(_QWORD))
{
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	__m128** v7; // rbx
	__m128* v8; // rbx
	unsigned __int64 v9; // rcx
	__m128 v10; // xmm0
	int v11; // [rsp+40h] [rbp+8h] BYREF
	int v12; // [rsp+44h] [rbp+Ch]
	int v13; // [rsp+48h] [rbp+10h] BYREF

	v13 = a2;
	v5 = (*(__int64(__fastcall**)(int*))(a1 + 2440))(&v13);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v5 % *(_QWORD*)(a1 + 2424)));
	if (v6)
	{
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 2448))(&v13, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				return;
		}
		v7 = (__m128**)(v6 + 3);
		if (v7)
		{
			v8 = *v7;
			if ((void(__fastcall***)(_QWORD))v8[37].m128_u64[0] != a3)
			{
				if (a3)
					(**a3)(a3);
				v9 = v8[37].m128_u64[0];
				if (v9)
					(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v9 + 8i64))(v9);
				v8[37].m128_u64[0] = (unsigned __int64)a3;
			}
			v10 = _mm_add_ps(*(__m128*)(a1 + 1104), v8[1]);
			v11 = (int)v10.m128_f32[0];
			v12 = (int)_mm_shuffle_ps(v10, v10, 85).m128_f32[0];
			sub_1400CC900((__int64)a3, (unsigned int*)&v11);
		}
	}
}

