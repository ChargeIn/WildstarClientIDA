//----- (0000000140510B80) ----------------------------------------------------
float __fastcall sub_140510B80(__int64 a1, __int64 a2, unsigned __int64* a3, __int64 a4)
{
	unsigned __int64 v7; // r8
	void* v8; // rax
	__int64 v9; // rax
	int v10; // ecx
	__int64* v11; // rax
	double v12; // xmm0_8
	float v13; // xmm0_4
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	__int64 v17; // [rsp+40h] [rbp+8h] BYREF

	if (a3)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)a3 + v7));
		sub_140058710(a1, a3, v7);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v8 = sub_1400580E0(a1, -2);
	sub_14005E8E0(a1, (__int64)v8, (int*)(*(_QWORD*)(a1 + 16) - 16i64), *(_QWORD*)(a1 + 16) - 16i64);
	v9 = *(_QWORD*)(a1 + 16);
	v10 = *(_DWORD*)(v9 - 8);
	v11 = (__int64*)(v9 - 16);
	if (v10 != 3)
	{
		if (v10 != 4 || !sub_14005AC80((char*)(*v11 + 32), (unsigned __int64*)&v17))
		{
			v12 = 0.0;
			goto LABEL_11;
		}
		v16 = 3;
		v11 = &v15;
		v15 = v17;
	}
	v12 = *(double*)v11;
LABEL_11:
	v13 = v12;
	*(float*)a4 = v13;
	*(_QWORD*)(a1 + 16) -= 16i64;
	return *(float*)a4;
}

