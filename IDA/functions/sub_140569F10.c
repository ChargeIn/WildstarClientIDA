//----- (0000000140569F10) ----------------------------------------------------
__int64 __fastcall sub_140569F10(__int64 a1)
{
	int v2; // edx
	__int64 result; // rax
	unsigned int v4; // esi
	__int64 v5; // r8
	__int64 v6; // r9
	float v7; // xmm6_4
	unsigned int v8; // ecx
	__int64 v9; // rcx
	unsigned int v10; // ebx
	unsigned int v11; // eax
	int v12; // eax
	int v13; // [rsp+40h] [rbp+8h]

	v13 = *(_DWORD*)(a1 + 132);
	v2 = 1065353216;
	if (v13 < 0)
		v2 = 1082130432;
	if ((int)abs32(v2 - v13) <= 84)
		return 0i64;
	result = sub_1403B5400((unsigned int)v13, *(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 72));
	v4 = result;
	if ((_DWORD)result)
	{
		v5 = *(_QWORD*)(a1 + 72);
		v6 = *(_QWORD*)(a1 + 64);
		v7 = *(float*)(a1 + 132);
		v8 = 0;
		if (v7 < 0.0)
			v8 = 0x80000000;
		v9 = v8 - LODWORD(v7);
		v10 = 0;
		if ((int)abs32(v9) > 84 && (v12 = sub_1403B5400(v9, v6, v5)) != 0)
		{
			v11 = (int)(float)((float)((float)v12 * v7) + 0.5);
			if (!v11)
				v11 = 1;
		}
		else
		{
			v11 = 0;
		}
		LOBYTE(v10) = v11 < v4;
		return v10;
	}
	return result;
}

