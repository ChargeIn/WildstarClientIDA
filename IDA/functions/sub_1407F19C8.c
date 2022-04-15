//----- (00000001407F19C8) ----------------------------------------------------
__int64 __fastcall sub_1407F19C8(_BYTE* a1, unsigned __int64 a2, int a3, int a4, __int64 a5, char a6, _OWORD* a7)
{
	__int64 v10; // rsi
	_QWORD* v11; // rax
	unsigned int v12; // ebx
	int v13; // eax
	int* v14; // rbx
	__int64 v15; // rax
	_BYTE* v16; // rdx
	_BYTE* v17; // rbx
	__int64 v18; // rdx
	int* v19; // rcx
	int v20; // r8d
	__int64 v22; // [rsp+30h] [rbp-38h] BYREF
	__int64 v23; // [rsp+40h] [rbp-28h]
	char v24; // [rsp+48h] [rbp-20h]

	v10 = a3;
	sub_1407DE348((__int64)&v22, a7);
	if (!a1 || !a2)
	{
		v11 = sub_1407DE1B0();
		v12 = 22;
	LABEL_8:
		*(_DWORD*)v11 = v12;
		sub_1407DC370();
		goto LABEL_33;
	}
	v13 = 0;
	if ((int)v10 > 0)
		v13 = v10;
	if (a2 <= v13 + 9)
	{
		v11 = sub_1407DE1B0();
		v12 = 34;
		goto LABEL_8;
	}
	if (a6)
	{
		v14 = (int*)&a1[*(_DWORD*)a5 == 45];
		if ((int)v10 > 0)
		{
			v15 = sub_1407E1990((__int64)&a1[*(_DWORD*)a5 == 45]);
			sub_1407DB590((int*)((char*)v14 + ((int)v10 > 0)), v14, v15 + 1);
		}
	}
	v16 = a1;
	if (*(_DWORD*)a5 == 45)
	{
		*a1 = 45;
		v16 = a1 + 1;
	}
	if ((int)v10 > 0)
	{
		*v16 = v16[1];
		*++v16 = ***(_BYTE***)(v22 + 240);
	}
	v17 = &v16[v10 + (a6 == 0)];
	v18 = a2 + a1 - v17;
	if (a2 == -1i64)
		v18 = -1i64;
	if ((unsigned int)sub_1407EA194(v17, v18, "e+000"))
	{
		sub_1407DC390();
		JUMPOUT(0x1407F1BC0i64);
	}
	v19 = (int*)(v17 + 2);
	if (a4)
		*v17 = 69;
	if (**(_BYTE**)(a5 + 16) != 48)
	{
		v20 = *(_DWORD*)(a5 + 4) - 1;
		if (v20 < 0)
		{
			v20 = 1 - *(_DWORD*)(a5 + 4);
			v17[1] = 45;
		}
		if (v20 >= 100)
		{
			v17[2] += v20 / 100;
			v20 %= 100;
		}
		if (v20 >= 10)
		{
			v17[3] += v20 / 10;
			v20 %= 10;
		}
		v17[4] += v20;
	}
	if ((byte_140C608E8 & 1) != 0 && *(_BYTE*)v19 == 48)
		sub_1407DB590(v19, (int*)(v17 + 3), 3ui64);
	v12 = 0;
LABEL_33:
	if (v24)
		*(_DWORD*)(v23 + 200) &= ~2u;
	return v12;
}
// 1407F1BBB: control flows out of bounds to 1407F1BC0
// 140C608E8: using guessed type char byte_140C608E8;

