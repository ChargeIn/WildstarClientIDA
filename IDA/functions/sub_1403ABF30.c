//----- (00000001403ABF30) ----------------------------------------------------
__int64 __fastcall sub_1403ABF30(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
	__int64 v8; // rax
	int v9; // ecx
	int v10; // ecx
	__int64 v11; // r11
	float v12; // xmm0_4
	int v14; // eax

	v8 = sub_14022F2C0(a2);
	if (!v8)
	{
		*(_DWORD*)(*(_QWORD*)(a4 + 16) + 8i64) = 0;
	LABEL_8:
		*(_QWORD*)(a4 + 16) += 16i64;
		return 1i64;
	}
	v9 = *(_DWORD*)(v8 + 8);
	if (!v9)
		goto LABEL_6;
	v10 = v9 - 1;
	if (!v10)
	{
		v14 = sub_1403ABFE0(a1, a2, a3);
		*(double*)v11 = (double)v14;
		goto LABEL_7;
	}
	if (v10 == 1)
	{
	LABEL_6:
		v12 = sub_1403AC060(a1, a2, a3);
		*(double*)v11 = v12;
	LABEL_7:
		*(_DWORD*)(v11 + 8) = 3;
		goto LABEL_8;
	}
	return 1i64;
}
// 1403ABF8F: variable 'v11' is possibly undefined

