//----- (0000000140381180) ----------------------------------------------------
void __fastcall sub_140381180(__int64 a1)
{
	__int64* v2; // r14
	float* v3; // rdi
	__int64* v4; // r15
	__int64 v5; // r13
	__int64 v6; // rbp
	__int64* v7; // rbx
	__int64 v8; // rsi
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rsi
	__int64 v12; // rcx
	__int64 v13; // [rsp+80h] [rbp+8h] BYREF
	__int64 v14; // [rsp+88h] [rbp+10h] BYREF

	if ((*(_DWORD*)(*(_QWORD*)a1 + 232i64) & 0x4000) != 0)
	{
		v2 = (__int64*)(a1 + 672);
		v3 = (float*)(a1 + 720);
		v4 = (__int64*)(a1 + 512);
		v5 = 4i64;
		do
		{
			v6 = 0i64;
			*(_DWORD*)v3 = dword_140C44570;
			*(v3 - 4) = 0.0;
			if (*(_DWORD*)(a1 + 784))
			{
				v7 = v4;
				v8 = 4i64;
				do
				{
					v9 = *v7;
					if (*v7)
					{
						v6 = *v7;
						*((_DWORD*)v3 - 4) |= *(_DWORD*)(v9 + 36);
						*v3 = fminf(*v3, sub_140374BF0(v9).m128_f32[0]);
					}
					++v7;
					--v8;
				} while (v8);
			}
			v10 = 0i64;
			v11 = 0i64;
			v13 = 0i64;
			v14 = 0i64;
			if (v6)
			{
				sub_1403748E0(v6, (unsigned __int64)&v13, &v14);
				v10 = v13;
				v11 = v14;
			}
			v12 = *(v2 - 4);
			if (v12)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
				*(v2 - 4) = 0i64;
			}
			*(v2 - 4) = v10;
			if (*v2)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*v2 + 8i64))(*v2);
				*v2 = 0i64;
			}
			*v2++ = v11;
			++v3;
			v4 += 4;
			--v5;
		} while (v5);
		sub_14037D540((__m128**)a1);
	}
}
// 140C44570: using guessed type int dword_140C44570;

