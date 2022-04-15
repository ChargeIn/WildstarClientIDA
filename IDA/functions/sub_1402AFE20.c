//----- (00000001402AFE20) ----------------------------------------------------
int* __fastcall sub_1402AFE20(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	int a4,
	int a5,
	int a6,
	unsigned int a7,
	unsigned int a8,
	int a9,
	unsigned int a10,
	unsigned int a11)
{
	__int64 v13; // r14
	int* v16; // rcx
	int* v17; // rsi
	unsigned __int64 v18; // rax
	unsigned int v19; // r8d
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // r9
	int* v23; // rbp
	int* v24; // rbx
	__int64 v25; // rdi
	void(__fastcall * v26)(int*, __int64, _QWORD); // r14
	__int64 v27; // r15
	int* v28; // [rsp+20h] [rbp-68h] BYREF
	__int64 v29; // [rsp+28h] [rbp-60h]
	void(__fastcall * v30)(int*, __int64, _QWORD); // [rsp+30h] [rbp-58h]
	unsigned __int64 v31; // [rsp+38h] [rbp-50h]
	__int64 v32; // [rsp+40h] [rbp-48h]
	__int64 v33; // [rsp+48h] [rbp-40h]
	__int64 v34; // [rsp+50h] [rbp-38h]

	v13 = a2;
	v29 = a2;
	if (a6 == a9)
		return (int*)a2;
	v30 = (void(__fastcall*)(int*, __int64, _QWORD))qword_140C38410[a6];
	if (a8 < a11)
	{
		v28 = sub_14018B280(a11 * a5, 0);
		sub_140033260((__int64*)(a1 + 408), &v28);
		v16 = v28;
	}
	else
	{
		v16 = (int*)a2;
		v28 = (int*)a2;
	}
	v17 = v16;
	v18 = (unsigned __int64)v16 + a11 * a5;
	v31 = v18;
	if ((unsigned __int64)v16 < v18)
	{
		v19 = a10;
		v20 = a11;
		v21 = a8;
		v32 = a11;
		v33 = a8;
		v22 = a10 * a4;
		v34 = v22;
		do
		{
			v23 = (int*)((char*)v17 + v22);
			v24 = v17;
			v25 = v13;
			if (v17 < (int*)((char*)v17 + v22))
			{
				v26 = v30;
				v27 = v19;
				do
				{
					v26(v24, v25, a3);
					v24 = (int*)((char*)v24 + v27);
					v25 += a7;
				} while (v24 < v23);
				v13 = v29;
				v18 = v31;
				v20 = v32;
				v21 = v33;
				v19 = a10;
				v22 = v34;
			}
			v13 += v21;
			v17 = (int*)((char*)v17 + v20);
			v29 = v13;
		} while ((unsigned __int64)v17 < v18);
		return v28;
	}
	return v16;
}
// 140C38410: using guessed type _QWORD qword_140C38410[2];

