//----- (000000014041BCC0) ----------------------------------------------------
__int64 __fastcall sub_14041BCC0(_QWORD* a1)
{
	float v1; // xmm7_4
	int v3; // xmm8_4
	__int64** v4; // rax
	__int64** v5; // r14
	__int64 v6; // rbx
	__int64* v7; // rax
	__int64 result; // rax
	int* v9; // r12
	int* v10; // rax
	__int64 v11; // r15
	bool v12; // zf
	int v13; // edx
	__int64 v14; // rax
	__int64 v15; // rsi
	__int64 v16; // rbx
	__int64 v17; // rbp
	unsigned int v18; // ebx
	__int64 v19; // rcx
	unsigned int v20; // eax
	unsigned __int64 v21; // rax
	unsigned __int64 v22; // rcx
	float v23; // xmm0_4
	__int64 v24; // rax
	__int64 v25; // rbp
	__int64 v26; // rcx
	unsigned int v27; // eax
	unsigned __int64 v28; // rax
	unsigned __int64 v29; // rdx
	float v30; // xmm0_4
	__int64 v31; // rcx
	__int64 v32; // [rsp+20h] [rbp-78h] BYREF
	unsigned __int64 v33; // [rsp+28h] [rbp-70h]
	__int64 v34; // [rsp+30h] [rbp-68h]

	v1 = 1.0;
	v3 = 1065353216;
	v4 = (__int64**)sub_140417660((__int64)a1, 1);
	v5 = v4;
	v6 = 0i64;
	if (v4)
	{
		v7 = *v4;
		if (v7)
		{
			if (*v7)
			{
				v6 = *v7;
				if ((unsigned int)sub_1403D6A10(*v7, 1u))
				{
					result = 1i64;
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
					return result;
				}
				v3 = *(_DWORD*)(v6 + 132);
			}
		}
	}
	v9 = sub_140417BF0(a1, 1u);
	v10 = sub_140417C90(a1, 1u);
	v11 = (__int64)v10;
	if (v9 && v10)
	{
		v12 = *(_DWORD*)(qword_140C65898 + 26180) == 49;
		v32 = 0i64;
		v33 = 1i64;
		v34 = 0i64;
		if (v12)
			v13 = *(_DWORD*)(qword_140C65898 + 26176);
		else
			v13 = 0;
		v14 = sub_1403D90D0(qword_140C65898, v13);
		if (v14)
			v1 = *(float*)(v14 + 14048);
		v15 = v11 + 88;
		if (v6)
		{
			if ((~(*(_DWORD*)(v6 + 128) >> 3) & 1) != 0)
			{
				v16 = v6 + 240;
				if (sub_1403D8CB0(v16))
					v15 = v16;
			}
		}
		v17 = *(_QWORD*)v15;
		v18 = 0;
		if (*(__int64*)v15 > 0)
		{
			v19 = *(unsigned int*)(v15 + 8);
			v20 = *(_DWORD*)(v15 + 12);
			v32 = *(_QWORD*)v15;
			v33 = __PAIR64__(v20, v19);
			if ((_DWORD)v19 == 1 && (!*v5 || !*((_DWORD*)*v5 + 4)))
			{
				v21 = sub_1403B54A0(v19, (__int64)v9, v11, *(float*)&v3);
				v22 = 0i64;
				v23 = (float)(int)v17 * v1;
				if (v23 >= 9.223372e18)
				{
					v23 = v23 - 9.223372e18;
					if (v23 < 9.223372e18)
						v22 = 0x8000000000000000ui64;
				}
				v24 = v22 + (unsigned int)(int)v23 - v21;
				if (v24 < 0)
					v24 = 0i64;
				v32 = v24;
			}
			v18 = 1;
			sub_140501210(a1, &v32);
		}
		v25 = *(_QWORD*)(v15 + 24);
		if (v25 > 0)
		{
			v26 = *(unsigned int*)(v15 + 32);
			v27 = *(_DWORD*)(v15 + 36);
			v32 = *(_QWORD*)(v15 + 24);
			v33 = __PAIR64__(v27, v26);
			if ((_DWORD)v26 == 1 && (!*v5 || !*((_DWORD*)*v5 + 4)))
			{
				v28 = sub_1403B54A0(v26, (__int64)v9, v11, *(float*)&v3);
				v29 = 0i64;
				v30 = (float)(int)v25 * v1;
				if (v30 >= 9.223372e18)
				{
					v30 = v30 - 9.223372e18;
					if (v30 < 9.223372e18)
						v29 = 0x8000000000000000ui64;
				}
				v31 = v29 + (unsigned int)(int)v30 - v28;
				if (v31 < 0)
					v31 = 0i64;
				v32 = v31;
			}
			++v18;
			sub_140501210(a1, &v32);
		}
		return v18;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

