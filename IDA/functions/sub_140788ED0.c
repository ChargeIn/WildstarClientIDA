//----- (0000000140788ED0) ----------------------------------------------------
void __fastcall sub_140788ED0(__int64 a1, __int64 a2, unsigned __int8(__fastcall* a3)(__int128*, __int128*))
{
	__int64** v3; // r14
	__int64** v4; // rsi
	__int64* v6; // rbx
	__int64** v7; // rdi
	__int64 v8; // xmm1_8
	__int128 v9; // xmm0
	__int64 v10; // xmm1_8
	__int64* v11; // rax
	__int64* v12; // rdx
	__int64* v13; // rcx
	__int128 v14; // [rsp+20h] [rbp-48h] BYREF
	__int64 v15; // [rsp+30h] [rbp-38h]
	__int128 v16; // [rsp+40h] [rbp-28h] BYREF
	__int64 v17; // [rsp+50h] [rbp-18h]

	v3 = *(__int64***)(a1 + 8);
	v4 = *(__int64***)(a2 + 8);
	v6 = *v3;
	v7 = (__int64**)*v4;
	if (*v3 == (__int64*)v3)
	{
	LABEL_9:
		if (v7 != v4 && v3 != v4)
		{
			*v4[1] = (__int64)v3;
			*v7[1] = (__int64)v4;
			*v3[1] = (__int64)v7;
			v13 = v3[1];
			v3[1] = v4[1];
			v4[1] = v7[1];
			v7[1] = v13;
		}
	}
	else
	{
		while (v7 != v4)
		{
			v8 = v6[4];
			v14 = *((_OWORD*)v6 + 1);
			v9 = *((_OWORD*)v7 + 1);
			v15 = v8;
			v10 = (__int64)v7[4];
			v16 = v9;
			v17 = v10;
			if (a3(&v16, &v14))
			{
				v11 = *v7;
				if (v6 != *v7)
				{
					*(_QWORD*)v11[1] = v6;
					*v7[1] = (__int64)v11;
					*(_QWORD*)v6[1] = v7;
					v12 = (__int64*)v6[1];
					v6[1] = v11[1];
					v11[1] = (__int64)v7[1];
					v7[1] = v12;
				}
				v7 = (__int64**)v11;
			}
			else
			{
				v6 = (__int64*)*v6;
			}
			if (v6 == (__int64*)v3)
				goto LABEL_9;
		}
	}
}

